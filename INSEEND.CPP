#include<iostream.h>
#include<conio.h>
struct node
{
	int roll;
	node *next;
}*ptr,*newptr,*start,*rear;
node * create(int);
void insert_end(node *);
void display(node *);
void main()
{
	clrscr();
	start=NULL;
	int info;char ans='y';
	while(ans=='y'||ans=='Y')
	{
	cout<<"enter the information:";
	cin>>info;
	newptr=create(info);
	insert_end(newptr);
	display(start);
	cout<<"\n Do you want to enter more info:";
	cin>>ans;
	}
	getch();
}
node *create(int item)
{
	ptr=new node;
	ptr->roll=item;
	ptr->next=NULL;
	return ptr;
}
void insert_end(node *np)
{       if(start==NULL)
	{
		start=rear=np;
	}             6
	else
	{
		rear->next=np;
		rear=np;
	}
}


void display(node *np)
{	while(np!=NULL)
	{
		cout<<np->roll<<"\n";
		np=np->next;
}	}
