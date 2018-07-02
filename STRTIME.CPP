#include<iostream.h>
#include<conio.h>
struct time
{
	int hh, mm, ss;
};
void main()
{
	clrscr();
	struct time t1,t2,t3;
	time&calculate(time&,time&);
	cout<<"Enter the time t1 in seconds, minutes and hours";
	cin>>t1.ss>>t1.mm>>t1.hh;
	cout<<"Enter the time t2 in seconds, minutes and hours";
	cin>>t2.ss>>t2.mm>>t2.hh;
	t3=calculate(t1,t2);
	cout<<"The time t3 in seconds minutes and hours is as follows:- \n";
	cout<<t3.ss<<":"<<t3.mm<<":"<<t3.hh<<".";
	getch();
}
time&calculate (time& x,time& y)
{
	x.ss=x.ss+y.ss;
	x.mm=x.mm+y.mm+(x.ss/60);
	x.hh=x.hh+y.hh+(x.mm/60);
	x.ss=x.ss%60;
	x.mm=x.mm%60;
	return x;
}
