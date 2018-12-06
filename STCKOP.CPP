#include<iostream.h>
#include<conio.h>
#include<process.h>
int push(int[],int&,int);
int pop(int[],int&);
void display(int[],int);
const int size=30;
void main()
{
	clrscr();
	int stack[size],res,item,ch,top=-1;
	while(ch!=4)
	{
		cout<<"\nMain Menu for performing stack operations:-";
		cout<<"\n\t1)Push\n\t2)Pop\n\t3)Display\n\t4)Exit\nEnter your choice:";
		cin>>ch;
		switch (ch)
		{
		       case 1: cout<<"\nPush";
			       cout<<"\nEnter the item to push into the stack:";
			       cin>>item;
			       res=push(stack,top,item);
			       if(res==-1)
			       {
					cout<<"Overflow!!\n";
			       }
			       else
			       {
					cout<<"\nThe stack after pushing:-";
					cout<<"\n";
					display(stack,top);
			       }
			       break;
			case 2: cout<<"\nPoping";
				res=pop(stack,top);
				if(res==-1)
				{
					cout<<"\nUnderflow!!";
				}
				else
				{
					cout<<"\The element Popped is:"<<res;
					cout<<"\nThe stack after poping is:-";
					display(stack,top);
				}
				break;
			case 3: cout<<"\nDisplay";
				cout<<"\n";
				display(stack,top);
				break;
			case 4:break;
			default:cout<<"\a";
		}
	}
	getch();
}
int push(int a[],int &n,int m)
{
	if(n==size-1)
	{
		return -1;
	}
	n++;
	a[n]=m;
	return 0;
}
int pop(int a[],int &n)
{
	int temp;
	if(n==-1)
	{
		return -1;
	}
	temp=a[n];
	n--;
	return temp;
}
void display(int a[],int top)
{
	if(top==-1)
	{
		return;
	}
	cout<<a[top]<<"<--"<<endl;
	for(int i=top-1;i>=0;i--)
	cout<<a[i]<<endl;
}