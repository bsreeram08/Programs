#include<iostream.h>
class stud
{
	int adm;
	char sname[20];
	float eng,sci,math,total;
	void ctotal()
	{
		total=eng+math+sci;
	}
public:
	void takedata()
	{
		cout<<"Enter the admission number: ";
		cin>>adm;
		cout<<"Emter the name: ";
		cin>>sname;
		cout<<"Enter the marks in English, Maths and Science: ";
		cin>>eng>>math>>sci;
		ctotal();
	}
	void showdata()
	{
		cout<<total;
		cout<<sname;
		cout<<adm;
	}
}s1;
void main()
{
	stud s1;
	s1.takedata();
	s1.showdata();
}

