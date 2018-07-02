#include<iostream.h>
#include<conio.h>
#include<process.h>
int top=-1;
void pushstack(int&,int,int[]);
void display(int,int[]);
int popstack(int&,int[]);
void main()
{
	clrscr();
	int item,ar[30];
	char flag='Y';
	while(flag=='Y'||flag=='y')
	{
		cout<<"Enter the element to insert in the stack: 	";
		cin>>item;
		pushstack(top,item,ar);
		cout<<"\nThe stack after pushingis: ";
		display(top,ar);
		cout<<"Do you want to push more elements?(Y/N)";
		cin>>flag;
	}
	cout<<"Final Stack is :";
	display(top,ar);
	cout<<"Now We will POP from the stack:-\n";
	char ch='y';
	char choice;
	while(ch=='y'||ch=='Y')
	{
		cout<<"DO YOU WANT TO POP FROM THIS ARRAY?(y/n):";
		cin>>ch;
		while(choice=='y'||choice=='Y')
		{
			popstack(top,ar);
			cout<<"Now the array is:-";
			display(top,ar);
			cout<<"CONTINUE(y/n)";
			cin>>choice;
		}
		cout<<"Now the stack finally is:-\n";
		display(top,ar);
	}
	getch();
}
void pushstack(int& t,int n, int stack[])
{
	if(n==30)
	{
		cout<<"OverFlow.......\n\n\n\n\nPress any key to continue.";
		getch();
		exit(0);
	}
	else
	{
		t++;
		stack[t]=n;
	}
}
void display(int size,int stack[])
{
	for(int i=size;i>=0;i--)
	{
		cout<<stack[i];
	}
}
int popstack(int& t,int stack[])
{
	if(t==-1)
	{
		cout<<"UNDERFLOW....";
		getch();
		return 0;
	}
	else
	{

		return stack[t--];
	}
}