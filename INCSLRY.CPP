#include<iostream.h>
#include<conio.h>
#include<string.h>
struct emp
{
	int emp_no;
	char empname[20];
	float emp_salry;
	char emp_desig[20];
};

void main()
{
	clrscr();
	void incriment(emp&,emp&);
	struct emp e1, e2;
	cout<<"1st Employee";
	cout<<" Enter the employment number: \n";
	cin>>e1.emp_no;
	cout<<"\n Enter the employee name: \n";
	cin>>e1.empname;
	cout<<"\n Enter the monthly salary given to the employee \n";
	cin>>e1.emp_salry;
	cout<<"\n Enter the employee's designation ";
	cin>>e1.emp_desig;
	cout<<"2nd Employee";
	cout<<" Enter the employment number: \n";
	cin>>e2.emp_no;
	cout<<"\n Enter the employee name: \n";
	cin>>e2.empname;
	cout<<"\n Enter the monthly salary given to the employee \n";
	cin>>e2.emp_salry;
	cout<<"\n Enter the employee's designation ";
	cin>>e2.emp_desig;
	incriment(e1,e2);
	cout<<"\n The salary of the first and the second person's are as follows:- \n"<<e1.emp_salry<<"\n"<<e2.emp_salry;
	getch();
}
void incriment(emp&x1,emp&x2)
{
	if(strcmp(x1.emp_desig,"manager")==0)
	x1.emp_salry=x1.emp_salry+(x1.emp_salry*0.2);
	if(strcmp(x2.emp_desig,"manager")==0)
	x2.emp_salry=x2.emp_salry+(x2.emp_salry*0.2);
	else
	cout<<"\n No incriment to both of them \n";
}
