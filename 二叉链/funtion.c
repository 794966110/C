#include"Tree.h";
void createTree(BTNode** b, char* str)//根据字符串str生产对应二叉数
{
	BTNode* St[maxsize];BTNode* p;//p为子结点
	int i = 0;char ch;int top = -1;//top栈顶指针
	int k;//区分左右结点
	ch = str[i];
	(*b) = NULL;
	while (ch != '\0')
	{
		switch (ch)
		{
		case '(':top++;St[top] = p;k = 1;break;//之后检测左结点
		case ')':top--;break;//回到上双亲结点
		case ',':k = 2;break;//之后检测右结点
		default://数据
			p = (BTNode*)malloc(sizeof(BTNode));
			p->data = ch;
			p->lchild = p->rchild = NULL;
			if (*b == NULL)//连接跟结点
			{
				*b = p;
			}
			else
			{
				switch (k)//连接子结点
				{
				case 1:St[top]->lchild = p;break;
				case 2:St[top]->rchild = p;break;
				default:printf("error");
				}
			}
		}//switch
		i++;
		ch = str[i];
	}//while
}

void destory(BTNode** b)//递归销毁二叉链
{
	if ((*b) == NULL)
		return;
	else
	{
		destory(&((*b)->lchild));
		destory(&((*b)->rchild));
		free((*b));
	}
}

BTNode* LChildNode(BTNode* p)//返回p结点的右孩子的指针
{
	return p->lchild;
}

BTNode* RChildNode(BTNode* p)//返回p结点的右孩子的指针
{
	return p->rchild;
}

BTNode* FindNdoe(BTNode* b, ElemType x)//在二叉树b中寻找data域值为x的结点，并返回指向该结点的指针
{
	BTNode* p;
	if (b == NULL)
	{
		return NULL;
	}
	else if (b->data == x)//递归出口
	{
		return b;
	}
	else//往下层搜索
	{
		p = FindNdoe(b->lchild, x);
		if (p != NULL)return p;//如果找到借助p向外返回
		else //左结点未找到，搜索右结点
			return FindNdoe(b->rchild, x);
	}
}



void dispBTree(BTNode* b)//括号表示发输出一颗二叉树
{
	if (b != NULL)
	{
		printf("%c", b->data);
		if (b->lchild != NULL || b->rchild != NULL)
		{
			printf("(");
			dispBTree(b->lchild);
			if (b->rchild != NULL)
			{
				printf(",");
			}
			dispBTree(b->rchild);
			printf(")");
		}
	}
}

//int BTHeight1(BTNode* b)//求树高1
//{
//	int hmax=0,h1,h2;
//	if (b == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		h1=BTHeight(b->lchild);	
//		if (h1 > hmax)
//		{
//			hmax = h1;
//		}
//		h2 = BTHeight(b->rchild);
//		if (h2 > hmax)
//		{
//			hmax = h2;
//		}
//	}
//	return hmax + 1;
//}

int BTHeight2(BTNode* b)//求树高2
{
	int h1, h2;
	if (b == NULL)//递归出口
	{
		return 0;
	}
	else
	{
		h1 = BTHeight2(b->lchild);
		h2 = BTHeight2(b->rchild);
		return h1 > h2 ? (h1 + 1) : (h2 + 1);
	}
}

void preorder(BTNode* b)//先序遍历（递归）
{
	if (b != NULL)
	{
		printf("%c ", b->data);//访问根结点
		preorder(b->lchild);
		preorder(b->rchild);
	}
}

void preorder2(BTNode*b)//先序遍历（非递归数组实现）
{
	BTNode* st[maxsize];int top = -1;BTNode* p;
	if (b!= NULL)
	{
		top++;
		st[top]=b;//指向根结点
	}
	while (top>-1)
	{
		if (b != NULL)
		{
			p = st[top];
			top--;//退回
		}
		printf("%c", p->data);
		if (p->rchild != NULL)//先指向右子树，再指向左子树，方便向下遍历和向右跳转
		{
			top++;
			st[top] = p->rchild;
		}
		if (p->lchild != NULL)
		{
			top++;
			st[top] = p->lchild;
		}
		putchar(' ');
	}
}

void inorder(BTNode* b)//中序遍历
{
	if (b != NULL)
	{
		inorder(b->lchild);
		printf("%c ", b->data);//访问根结点
		inorder(b->rchild);
	}
}

void postorder(BTNode* b)//后序遍历
{
	if (b != NULL)
	{
		inorder(b->lchild);
		inorder(b->rchild);
		printf("%c ", b->data);//访问根结点
	}
}

int allnodes(BTNode* b)//求二叉树的所有结点个数
{
	int num1 = 0, num2 = 0;
	if (b == NULL)
	{
		return 0;
	}
	num1 = allnodes(b->lchild);
	num2 = allnodes(b->rchild);
	return num1 + num2 + 1;
}

int leavesnodes(BTNode* b)//叶子结点个数
{
	int num1, num2;
	if (b == NULL)
	{
		return 0;
	}
	else if (b->lchild == NULL && b->rchild == NULL)//尾结点时
	{
		return 1;
	}
	else
	{
		num1 = leavesnodes(b->lchild);
		num2 = leavesnodes(b->rchild);
		return num1 + num2;
	}
}

//void displeaves(BTNode* b)//输出叶子结点
//{
//	if (b != NULL)
//	{
//		displeaves(b->lchild);
//		displeaves(b->rchild);//后序遍历
//		if (b->lchild == NULL && b->rchild == NULL)
//		{
//			printf("%c ", b->data);
//		}
//	}
//}

//void displeaves(BTNode* b)//输出叶子结点
//{
//	if (b != NULL)
//	{
//		displeaves(b->lchild);//中序遍历
//		if (b->lchild == NULL && b->rchild == NULL)
//		{
//			printf("%c ", b->data);
//		}
//		displeaves(b->rchild);
//		
//	}
//}

void displeaves(BTNode* b)//输出叶子结点
{
	if (b != NULL)
	{

		if (b->lchild == NULL && b->rchild == NULL)//先序遍历
		{

			printf("%c ", b->data);
		}
		displeaves(b->lchild);
		displeaves(b->rchild);
	}
}

int level(BTNode* b, char x, int h)//先序遍历寻找x的层数h
{
	int l;
	if (b == NULL)
	{
		return 0;
	}
	else if (b->data == x)//找到时
	{
		return h;//返回层数
	}
	else 
	{
		l=level(b->lchild, x, h+1);//查找左子树，返回层数
		if (l == 0)//若左子树未找到，查找右字树
		l=level(b->rchild, x, h+1);
		else
			return l;
	}
}


void Lnodenum(BTNode* b, int h, int k, int* n)//求二叉树b中第k层的结点个数
{
	if (b == NULL)
	{
		return ;
	}
	else
	{
		if (k != h)
		{
			Lnodenum(b->lchild, h + 1, k, &(*n));
			Lnodenum(b->rchild, h + 1, k, &(*n));
		}
		else//k==h
		{
			(*n)+=1;
		}
	}
}

int similar(BTNode* t1,BTNode *t2)//判断是否是相似的树
{
	int s1, s2;
	if (t1 ==NULL&& t2 == NULL)
	{
		return 1;
	}
	else if((t1==NULL&&t2!=NULL)||(t1!=NULL&&t2==NULL))
	{
		return 0;
	}
	else
	{
		s1=similar(t1->lchild, t2->lchild);
		s2=similar(t1->rchild, t2->rchild);
		return (s1 && s2);//返回like1和like2的与运算结果
	}
}

int ancestor(BTNode* b, char x)//返回x的祖先结点
{
	int s1,s2;
	if (b == NULL)
	{
		return 0;
	}
	else if(b->data == x)//find
	{
		return 1;
	}
	else
	{	
		s1 = ancestor(b->lchild, x);
		s2 = ancestor(b->rchild, x);
		if (s1 == 1||s2 == 1)
		{
			printf("%c ", b->data);
			return 1;
		}
	}
}

void initstack(stack** st)
{
	(*st) = (stack*)malloc(sizeof(stack));
	(*st)->top = -1;
}

int push(stack**st, BTNode**x)//进栈
{
	if ((*st)->top == maxsize - 1)
	{
		return 0;
	}
	else
	{
		(*st)->top++;
		(*st)->data[(*st)->top] = (*x);
		return 1;
	}
}

int pop(stack** st, BTNode **x)
{
	if ((*st)->top == -1)
	{
		return 0;
	}
	else
	{
		*x = (*st)->data[(*st)->top];
		(*st)->top--;
	}
}

int stackempty(stack* st)
{
	return (st->top == -1);
}

void preorder3(BTNode* b)//先序遍历（非递归栈实现）
{
	stack* st;initstack(&st);BTNode* p;
	
	if(b!=NULL)
	{
		push(&st, &b);
		while (!stackempty(st))
		{
			pop(&st, &p);
			printf("%c ", p->data);
			if (p->rchild != NULL)
			{
				push(&st, &(p->rchild));
			}
			if (p->lchild != NULL)
			{
				push(&st, &(p->lchild));
			}
		}
	}
	//destory(&st);
}
