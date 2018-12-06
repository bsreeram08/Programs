#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct node
{

	int info;
	node *next;

}*front,*rear,*newptr,*ptr;
node*create(int);
void Qremove();
void Qinsert(node*)  ;
void display(node*) ;
void main()
{
	clrscr();
	front=NULL;
	rear=NULL;
	int info;
	char ans='y';
	while(ans=='y'||ans=='Y')
	{
		cout<<"Enter the information:";
		cin>>info;
		newptr=create(info);
		Qinsert(newptr);
		display(front);
		cout<<"\n Do u want to continue?(Y/N)";
		cin>>ans;
	}
	char ch='y';
	cout<<"Do u want to delete?(Y/N)";
	cin>>ch;
	while(ch=='Y'||ch=='y')
	{
		Qremove();
		cout<<"After deletion";
		display(front);
		cout<<"U wanna continue";
		cin>>ch;
	}
	display(front);
	getch();
}
void Qinsert(node *np)
{
	if((front==NULL)||(rear==NULL))
	{
		front=np;
		rear=np;
	}
	else
	{
		rear->next=np;
		rear=np;
	}
}
void display(node *np)
{
	while(np!=NULL)
	{
		cout<<np->info<<"<-";
		np=np->next;
	}
	cout<<"!!!!\n";
}
node *create(int item)
{
	ptr=new node;
	ptr->info=item;
	ptr->next=NULL;
	return ptr;
}
void Qremove()
{
	if(front==NULL)
	{
		cout<<"UNDERFLOW!!";
		getch();
		exit(0);
	}
	else
	{
		node *temp;
		temp=front;
		front=front->next;
		delete temp;
	}
}