#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int number;
	struct node *next;
}NODE;
NODE *start;
void display()
{
	NODE *ptr;
	printf("\nThe List is;-\n");
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
	{
		printf("%d\n",ptr->number);
	}
}
void deletenode(int no)
{
	NODE *ptr,*safe;
	for(ptr=start;ptr;safe=ptr,ptr=ptr->next)
	{
		if(ptr->number==no)
		{
			safe->next=ptr->next;
		}
	}
}
void insert(int no)
{
	NODE *pos,*safe,*newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->number=no;
	newnode->next=NULL;
	for(pos=start; pos->number<newnode->number && pos!=NULL ; safe=pos,pos=pos->next);
	if(pos==start)
	{
		newnode->next=start;
		start=newnode;
	}
	else
	{
		newnode->next=pos;
		safe->next=newnode;
	}
}
int main()
{
	int iteration=0,no;
	clrscr();
	while(iteration!=999)
	{       if(iteration==0)
		printf("Enter the Starting node:");
		else
			printf("Enter the next node:");
		scanf("%d",&no);
		insert(no);
		printf("Inserted!\n Press 999 to finish insertion:");
		scanf("%d",&iteration);

	}
	display();
	printf("Enter the element to delete:");
	scanf("%d",&no);
	deletenode(no);
	display();
	getch();
	return 0;
}
