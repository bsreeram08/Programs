#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
class emp
{
	int emp_no;
	char name[30];
	char doj[30];
	float b_sal;
	public:
	void getdata()
	{
		cout<<"Enter employee number:";
		cin>>emp_no;
		cout<<"Enter employee name";
		cin>>name;
		cout<<"enter date of joining";
		cin>>doj;
		cout<<"enter basic salary";
		cin>>b_sal;
	}
};
void main()
{
	clrscr();
	emp e1;
	e1.getdata();
	ofstream outf("emp.dat",ios::binary|ios::app);
	if(!outf)
	{
		cout<<"cannot open";
		exit(0);
	}
	outf.write((char*)&e1,sizeof(e1));
	outf.close();
	getch();
}