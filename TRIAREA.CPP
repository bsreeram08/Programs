#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float b,h,area,w=0.5;
	cout<<"Enter the values of height \n";
	cin>>h;
	cout<<"Enter the values of base \n";
	cin>>b;
	area=(float)(w*b*h);
	cout<<"Area of triangle is '"<<area<<"' .";
	getch();
}
