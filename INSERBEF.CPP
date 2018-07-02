#include<iostream.h>
#include<conio.h>
struct node
{
	int roll;
	node *next;
}*ptr,*newptr,*start;
node * create(int);
void insert_beg(node *);
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
	insert_beg(newptr);
	display(newptr);
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
void insert_beg(node *np)
{       if(start==NULL)
	{
		start=np;
	}
	else
	{
		np->next=start;
		start=np;
	}
}


void display(node *np)
{	while(np!=NULL)
	{
		cout<<np->roll<<"\n";
		np=np->next;
	}
}