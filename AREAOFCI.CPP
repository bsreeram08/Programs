#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float r, area, p=3.14;
	cout<<"Enter radious of circle in 'METERS'-";
	cin>>r;
	area=(float)(p*r*r);
	cout<<"Area of the circle of given radious "<<r<<"m is "<<area<<".";
	getch();
}