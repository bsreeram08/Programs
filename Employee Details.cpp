#include<iostream.h>
#include<conio.h>
struct emp
{
	int empno;
	char name_emp[30];
	char designation[30];
	float salary;
}e1;
void main()
{
	cout<<"\n Enter the employee number: ";
	cin>>e1.empno;
	cout<<"\n Enter the employee name: ";
	cin>>e1.name_emp;
	cout<<"\n Enter the designation of the employee: ";
	cin>>e1.designation;
	cout<<"\n Enter the salary: ";
	cin>>e1.salary;
	cout<<"\n EMPLOYEE NUMBER= "<<e1.empno;
	cout<<"\n EMPLOYEE NAME= "<<e1.name_emp;
	cout<<"\n DESIGNATION OF THE EMPLOYEE= "<<e1.designation;
	cout<<"\n SALARY OF THE EMPLOYEE= "<<e1.salary;
	getch();
}