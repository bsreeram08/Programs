#include<stdio.h>
#include<conio.h>
typedef struct binary_search_tree
{
	int data;
	struct binary_search_tree *left,*right;
}BST;
BST *root;
//typedefstruct
void inorder(BST  *dptr)
{
	if(dptr)
	{
		inorder(dptr->left);
		printf("%d\t",dptr->data);
		inorder(dptr->right);
	}
}
void preorder(BST  *dptr)
{
	if(dptr)
	{
		printf("%d\t",dptr->data);
		preorder(dptr->left);
		preorder(dptr->right);
	}
}
void postorder(BST  *dptr)
{
	if(dptr)
	{
		postorder(dptr->left);
		postorder(dptr->right);
		printf("%d\t",dptr->data);

	}
}
void intobst(int no)
{
	BST *newnode,*tptr,*safe;
	newnode=(BST*)malloc(sizeof(BST));
	newnode->data=no;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		for(tptr=root;tptr!=NULL;safe=tptr,tptr=(tptr->data<newnode->data?tptr->right:tptr->left));
		tptr=newnode;
		if(safe->data>tptr->data)
		{
			safe->left=tptr;
		}
		else
		{
			safe->right=tptr;
		}
	}
}
int main()
{
	int iteration=0,no;
	clrscr();
	while(iteration !=6)
	{
		printf("\n1)Insert\n2)Inorder\n3)Preorder\n4)Postorder\n5)Level Order\n");
		scanf("%d",&iteration);
		switch(iteration)
		{
			case 1:printf("\nEnter the data:");
			scanf("%d",&no);
			intobst(no);
			break;
			case 2:printf("\nInorder:-\n");
			inorder(root);
			break;
			case 3:printf("\nPreorder:-\n");
			preorder(root);
			break;
			case 4:printf("\nPostorder:-\n");
			postorder(root);
			break;
			case 5:printf("\nLevelOrder:-\n");
			levelorder(root);
			case 6:return 0;
			break;
			default:iteration=6;
		}
	}
	getch();
	return 0;
}