#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
	int Roll;
	node* next;
}*start,*ptr;
void main()
{
	clrscr();
	ptr=new node;
	cout<<"Enter the ROll no";
	cin>>ptr->Roll;
	ptr->next=NULL;
	start=ptr;
	ptr=new node;
	cout<<"The new Roll no";
	cin>>ptr->Roll;
	start->next=ptr;
	cout<<"The Previous Rollno is:";
	cout<<start->Roll;
	cout<<"\nThe Next Roll No is:";
	cout<<ptr->Roll;
	getch();
}


