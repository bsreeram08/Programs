#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
	int Roll;
	node* next;
}*start,*ptr,*newptr;
void display()
{
	cout<<"The Previous Rollno is:";
	cout<<start->Roll;
	cout<<"\nThe Next Roll No is:";
	cout<<ptr->Roll;
}
void main()
{
	int temp;char ans='y';
	while(ans=='y')
	{
		cout<<"Enter The Temp Variable";
		cin>>temp;
		new ptr=create(temp);
		if(start==NULL)
		start=new ptr;
		else
		{newptr->next=start;
		start=new ptr;}
		cout<<"continue?(y/n)";
		cin>>ans;
	}
	display(start);
	getch();
}