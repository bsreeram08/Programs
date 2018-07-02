#include<iostream.h>
#include<conio.h>
int f1(int);
void main()
{
	clrscr();
	int a, b;
	cout<<"Enter a value ";
	cin>>a;
	b=f1(a);
	cout<<"The cube of the entered number is "<<b<<" . ";
	getch();
}
int f1(int x)
	{
		int z;
		z=x*x*x;
		return z;
	}

