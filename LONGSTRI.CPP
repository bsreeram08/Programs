#include<iostream.h>
#include<conio.h>
int num(int,int,int);
void main()
{
	clrscr();
	long float n1, n2, n3;
	cout<<"Enter 3 numbers";
	cin>>n1>>n2>>n3;
	num(n1,n2,n3);
	cout<<"\n";
	getch();
}
int num(int x, int y,int z)
{
	if(x>=y && x>=z)
	{
		cout<<"Largest number is: "<<x;
	}
	if(y>=x && y>=z)
	{
		cout<<"Largest number is: "<<y;
	}
	if(z>=x && z>=y)
	{
		cout<<"Largest number is: "<<z;
	}
	return 0;
}

