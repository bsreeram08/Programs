#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	cout<<"Enter a number to find whether a number is even or odd";
	cin>>n;
	if(n%2==0)
	{
		cout<<"The number entered is an even number";
	}
	else
	{
		cout<<"The number entered is an odd number";
	}
	getch();
}