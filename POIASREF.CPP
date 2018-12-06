#include<iostream.h>
#include<conio.h>
class time
{
	int ss,mm,hh;
	public:
	time()
	{
		cin>>ss>>mm>>hh;
	}
	void sum(time & T1)
	{
		T1.ss=T1.ss+5;
		T1.mm=T1.mm+2;
		T1.hh=T1.hh+1;
	}
	void display()
	{
		cout<<ss<<mm<<hh;
	}
};
void main()
{
	clrscr();
	time s1,s2;
	s1.display();
	s1.sum(s2);
	s1.display();
	getch();
}