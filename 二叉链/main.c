#include<stdio.h>
#include"Tree.h"


int main()
{	
	BTNode* b;int n = 0, k = 3;
	createTree(&b,"A(B(D(,G)),C(E,F))");
	printf("%c\n", FindNdoe(b, 'G')->data);
	dispBTree(b);//输出二叉树
	printf("\nA的左孩子为：%c\n", LChildNode(b)->data);//输出A的左孩子
	printf("树高为：%d\n", BTHeight2(b));
	printf("先序遍历：");preorder(b);putchar('\n');
	printf("先序遍历（非递归数组实现）：");preorder2(b);putchar('\n');
	printf("先序遍历（非递归栈实现）：");preorder3(b);putchar('\n');
	printf("中序遍历：");inorder(b);putchar('\n');
	printf("中序遍历（非递归）：");inorder2(b);putchar('\n');
	printf("后序遍历：");postorder(b);putchar('\n');
	//printf("后序遍历：");postorder2(b);putchar('\n');
	printf("所有结点个数为：%d\n", allnodes(b));
	printf("叶子结点数：");
	printf("%d\n", leavesnodes(b));
	displeaves(b);
	printf("\nD的层数为：%d\n",level(b, 'D', 1));
	Lnodenum(b, 1, k, &n);
	printf("第%d层有%d个结点\n",k, n);
	printf("A的两个子树是否相同：%d\n", similar(b->lchild, b->rchild));
	printf("G的祖先结点为：");ancestor(b, 'G');putchar('\n');
	
	destory(&b);
	return 0;
}
