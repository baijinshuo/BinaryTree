#include<stdio.h>
#include<malloc.h>
#define Null 0
typedef struct node
{
	int data;
    struct node *lchild,*rchild; 
}tree;
tree* createbinarytree()
{
    tree *t;
    int i;
    scanf("%d",&i);
    if(i==0)t=Null;
    else
    {
        t=(tree*)malloc(sizeof(tree));
        t->data=i;
        t->lchild=createbinarytree();
        t->rchild=createbinarytree();
    }
    return t;
}
void inorder(tree* t) 
{
    if(t!=NULL)
    {
		inorder(t->lchild);
		printf("%d  ",t->data);
		inorder(t->rchild);
	}
}

void swap(tree* t) 
{    
	tree *p;
    if(t!=NULL||(t->lchild==NULL&&t->rchild==NULL))
    {p=t->lchild;
    t->lchild=t->rchild;
    t->rchild=p;
    swap(t->lchild);
    swap(t->rchild);}
}
void main()
{   
	tree *t; 
    printf("please input the binary tree.(xian xu)\n");
    t=createbinarytree();
    printf("the binary before swap is:\n"); 
    inorder(t);
    swap(t);
    printf("the binary after swap is:\n"); 
    inorder(t); 
} 















