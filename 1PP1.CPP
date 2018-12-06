#include<iostream.h>
#include<conio.h>
struct point
{
	int x,y,z;
};
void stepin(point&p,int step=1)
{
	p.x+=step;
	p.y-=step;
	p.z+=step;
}
void stepout(point&p, int step=1)
{
	p.x-=step;
	p.y+=step;
	p.x-=step;
}
void main()
{
	clrscr();
	point p1={15,25,5},p2={10,30,20};
	stepin(p1);
	stepout(p2,4);
	cout<<p1.x<<","<<p1.y<<";"<<p1.z<<endl;
	cout<<p1.x<<","<<p1.y<<";"<<p2.z<<endl;
	stepin(p2,12);
	cout<<p2.x<<","<<p2.y<<";"<<p2.z<<endl;
	getch();
}


