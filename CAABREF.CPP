#include <iostream.h>
#include<conio.h>
void f1(int,int);
void f2(int &,int &);
void main()
{
	clrscr();
	int a,b;
	cout<<"enter a,b:";
	cin>>a>>b;
	f1(a,b);
	cout<<a<<"  "<<b;
	f2(a,b);
	cout<<"\n"<<a<<"  "<<b;
	getch();
}
void f1(int x,int y)
{
	x=x-10;
	y=y+20;
}
void f2(int &x,int&y)
{
	x=x-10;
	y=y+10	;
}