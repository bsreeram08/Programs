#include<iostream.h>
#include<conio.h>
#include<process.h>
int ins_cq(int[],int);
void display(int[],int,int);
int del_cq(int[]);
const size=7;
int cqueue[size],front=-1,rear=-1;
void main()
{
	int item,res,ch;
	do
	{
		clrscr();
		cout<<"\nCircular Queue Main Menu:\n";
		cout<<"\n1)Insert\n2)Delete\n3)Display\n4)Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				cout<<"\nEnter theitem for insertion:\n";
				cin>>item;
				res=ins_cq(cqueue,item);
				if(res==-1)
				cout<<"\nOVERFLOW!!\n";
				else
				{
					cout<<"\nCircular Queue:\n";
					display(cqueue,front,rear);
				}
				getch();
				break;
			}
			case 2:
			{
				item=del_cq(cqueue);
				cout<<"\nElement detected is:"<<item<<"\n";
				display(cqueue,front,rear);
				getch();
				break;
			}
			case 3:
			{
				display(cqueue,front,rear);
				getch();
				break;
			}
			case 4:
			break;
			default:
			cout<<"\nWrong Choice\n";
			break;
		}
	}while(ch!=4);
	getch();
}
int ins_cq(int a[],int ele)
{
	if((front==0&&rear==size-1)||(front==rear+1))
	{
		return -1;
	}
	else if(rear==-1)
	front=rear=0;
	else if(rear==size-1)
	rear=0;
	else
	rear++;
	cqueue[rear]=ele;
	return 0;
}
void display(int a[],int front,int rear)
{
	int i=0;
	cout<<"\nCircularqueue is:\n";
	cout<<"(Front shown as>>>,rear shown as<<<,Freespace shown as space)\n";
	if(front==-1)
	return;
	if(rear>=front)
	{
		for(i=0;i<front;i++)
		cout<<" ";
		cout<<">>>";
		for(i=front;i<rear;i++)
		cout<<a[i]<<"<-";
		cout<<cqueue[rear]<<"<<<\n";
	}
	else
	{
		for(i=0;i<rear;i++)
		cout<<a[i]<<"<-";
		cout<<a[rear]<<"<<<";
		for(;i<front;i++)
		cout<<" ";
		cout<<">>>";
		for(i=front;i<size;i++)
		cout<<a[i]<<"<-";
		cout<<"Wrap Around";
	}
}
int del_cq(int a[])
{
	int ret;
	if(front==-1)
	return -1;
	else
	{
		ret=cqueue[front];
		if(front==rear)
		front=rear=-1;
		else if(front==size-1)
		front=0;
		else
		front++;
	}
	return ret;
}