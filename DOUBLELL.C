#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int number;
	struct node *next,*prev;
}NODE;
NODE *start,*end;
void display()
{
	NODE *ptr;
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
	{
		printf("%d\n",ptr->number);
	}
}
void displayback()
{
	NODE *ptr;
	for(ptr=end;ptr!=NULL;ptr=ptr->prev)
	{
		printf("%d\n",ptr->number);
	}
}
void deletenode(int no)
{
	NODE *ptr;
	for(ptr=start;ptr&&ptr->number!=no;ptr=ptr->next);
	if(ptr==start)
	{
		start=start->next;
	}
	else if(ptr==end)
	{
		end=end->prev;
	}
	else
	{
		ptr->next->prev=ptr->prev;
		ptr->prev->next=ptr->next;
	}
}
void insert(int no)
{
	NODE *pos,*newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->number=no;
	newnode->next=newnode->prev=NULL;
	if(start==NULL)
	{
		start=end=newnode;
	}
	else
	{
	for(pos=start; pos->number<newnode->number && pos!=NULL ;pos=pos->next);
	if(pos==start)
	{
		newnode->next=start;
		start->prev=newnode;
		start=newnode;
	}
	else if(pos==NULL)
	{
		newnode->prev=end;
		end->next=newnode;
		end=newnode;
	}
	else
	{
		newnode->next=pos;
		newnode->prev=pos->prev;
		pos->prev->next=newnode;
		pos->prev=newnode;
	}
	}
	printf("The list after insertion is:-\n");
	display();
}

void replace(int no,int newno)
{
	NODE *ptr;
	for(ptr=start;ptr&&ptr->number!=no;ptr=ptr->next);
	if(ptr==start)
	{
		start=start->next;
	}
	else if(ptr==end)
	{
		end=end->prev;
	}
	else
	{
		ptr->next->prev=ptr->prev;
		ptr->prev->next=ptr->next;
	}
	insert(newno);
}
int main()
{
	int iteration=0,no,newno;
	clrscr();

	while(iteration!=6)
	{
		printf("Enter an option:");
		printf("\n1)Insert\n2)Display Foreward\n3)Display Backward\n4)Find & Replace\n5)Delete\n");
		scanf("%d",&iteration);
		switch(iteration)
		{
			case 1:printf("\nEnter the Element:");
				scanf("%d",&no);
				insert(no);
				break;
			case 2:printf("\nThe list is:-\n");
				display();
				break;
			case 5:printf("\n Enter the element to Delete:");
				scanf("%d",&no);
				deletenode(no);
				break;
			case 3:printf("\n The List backward is:\n");
				displayback();
				break;
			case 4:printf("Enter the number you want to find:");
				scanf("%d",&no);
				printf("Enter the replacement number:");
				scanf("%d",&newno);
				replace(no,newno);
				break;
			default:iteration=6;
				printf("EXIT!");
		}
	}
	/*
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
	*/
	getch();
	return 0;
}
