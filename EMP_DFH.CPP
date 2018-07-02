#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
class emp
{
	private:
	int emp_no;
	char emp_name[30];
	float b_sal;
	long int phone;
	int dept_code;
	int design_code;

	public:
	void getdata()
	{
		cout<<"Enter employee number";
		cin>>emp_name;
		cout<<"Enter employee name";
		cin>>emp_name;
		cout<<"Enter Basic Salary";
		cin>>b_sal;
		cout<<"Enter phone number";
		cin>>phone;
		cout<<"Enter department code";
		cin>>dept_code;
		cout<<"Enter designation code";
		cin>>design_code;
	}
	void Inout()
	{
		ofstream bic("Emp.dat",ios::binary|ios::app)
		if(!bic)
		{
			cout<<"cannot open";
			exit(0);
		}
		bic<<emp_no<<endl;
		bic<<emp_name<<endl;
		bic<<b_sal<<endl;
		bic<<phone<<endl;
		bic<<dept_code<<endl;
		bic<<design_code<<endl;
		bic.close();

		ifstream bih("emo.dat");
		bih.seekg(0);
		bih>>emp_no;
		bih>>emp_name;
		bih>>b_sal;
		bih>>phone;
		bih>>dept_code;
		bih>>design_code;
		clrscr();
		cout<<"Employee details are as follows";
		cout<<emp_no<<"\n"<<emp_name<<"\n"<<b_sal<<"\n"<<phone<<"\n"<<dept_code<<"\n"<<design_code;
		bih.close();
	}
};
void main()
{
	clrscr();
	emp.obj;
	obj.getdata;
	obj.Inout;
	getch();
}
