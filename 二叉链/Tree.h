#ifndef TREE_H
#define TREE_H
#include<stdio.h>
#include<stdlib.h>
#define maxsize 50
typedef char ElemType;
typedef struct node
{
	ElemType data;
	struct node* lchild, * rchild;//指向左孩子和右孩子
}BTNode;//二叉链

typedef struct
{
	BTNode *data[maxsize];
	int top;
}stack;//用于非递归遍历

void createTree(BTNode** b, char* str);//根据字符串str生产对应二叉数
void destory(BTNode** b);
BTNode* LChildNode(BTNode* p);//返回p结点的左孩子的指针
BTNode* RChildNode(BTNode* p);//返回p结点的右孩子的指针
BTNode* FindNdoe(BTNode* b, ElemType x);//在二叉树b中寻找data域值为x的结点，并返回指向该结点的指针
void dispBTree(BTNode* b);//括号表示发输出一颗二叉树
int BTHeight2(BTNode* b);//求树高2
void preorder(BTNode* b);//先序遍历（递归）
void preorder2(BTNode* b);//先序遍历（非递归数组实现）
void preorder3(BTNode* b);//先序遍历（非递归栈实现）
void inorder(BTNode* b);//中序遍历
void postorder(BTNode* b);//后序遍历
int allnodes(BTNode* b);//求二叉树的所有结点个数
int leavesnodes(BTNode* b);//叶子结点个数
void displeaves(BTNode* b);//输出叶子结点
int level(BTNode* b, char x, int h);//先序遍历寻找x的层数h
void Lnodenum(BTNode* b, int h, int k, int* n);//求二叉树b中第k层的结点个数
int similar(BTNode* t1, BTNode* t2);//判断是否是相似的树
int ancestor(BTNode* b, char x);//返回x的祖先结点


#endif 
