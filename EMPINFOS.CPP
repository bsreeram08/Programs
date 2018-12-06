#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	cout<<"Enter the no emploiees";
	cin>>n;
	struct empinfo
	{
		int empno;
		char empname[20];
		char empdoj[20];
		struct empdept
		{
			int deptcode;
			char deptname[20];
			struct empdes
			{
				int descode;
				char desname[20];
			}desig[10];
		}dept[10];
	}emp[10];
	for(int i=0; i<n; i++)
	{
		cout<<"\nENTER EMPLOYEE NUMBER:\n";
		cin>>emp[i].empno;
		cout<<"\nENTER EMPLOYEE NAME:\n";
		cin>>emp[i].empname;
		cout<<"\nENTER DATE OF JOINING:\n";
		cin>>emp[i].empdoj;
		cout<<"\nENTER THE DEPARTMENT CODE:\n";
		cin>>emp[i].dept[i].deptcode;
		cout<<"\nENTER THE DEPARTMENT NAME;\n ";
		cin>>emp[i].dept[i].deptname;
		cout<<"\nENTER THE DESINGNATION CODE\n";
		cin>>emp[i].dept[i].desig[i].descode;
		cout<<"\nENTER THE NAME OF DESIGNATION\n";
		cin>>emp[i].dept[i].desig[i].desname;
	}
	getch();
}