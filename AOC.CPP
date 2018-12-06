#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float rad, area;
	cout<<"Enter the radious of the circle in cm\n";
	cin>>rad;
	area=3.14*rad*rad;
	cout<<"The area of circle with radious "<<rad<<"cm is "<<area;
	getch();
}