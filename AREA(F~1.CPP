#include<iostream.h>
#include<conio.h>
 float area(int b,int h); //triangle
 float area(int r); // circle
 float area(float l,float b); //rectangle
 void main()
 {       clrscr();
	 int b,h,r,n;
	 float l,br;
	 cout<<"Enter 1 for a traingle 2 for rectangle 3 for circle \n";
	 cin>>b;
	 switch (b)
	 {
	 case 1:
		 {
			 cout<<"Enter the height and base ";
			 cin>>h>>b;
			 cout<<"\nAREA OF TRIANGLE IS:"<<area(h,b)<<"\n";
		 }
		 break;
	 case 2:
		 {
			 cout<<"Enter the lenght and breadth";
			 cin>>l>>br;
			 cout<<"\n AREA OF RECTANGLE IS:"<<area(l,br)<<"\n";
		 }
		 break;
	 case 3:
		 {
			 cout<<"Enter the radius";
			 cin>>r;
			 cout<<"\nAREA OF CIRCLE IS:"<<area(r)<<"\n";
		 }
		 break;
	 }
	 getch();
 }
float area (int b,int h)
{
	 float clac= .5*b*h;
	 return clac;
}
float area (int r)
{
	float clac=3.14*r*r;
	return clac;
}
float area(float l,float b)
{
	 float clac=l*b;
	 return clac;

}


