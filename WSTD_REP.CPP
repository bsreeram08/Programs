#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
class std
{
	int roll;
	char name[10];
	float marks;
	public:
	void getdata()
	{
		cout<<"Enter the roll number: "<<endl;
		cin>>roll;
		cout<<"Enter the name of the student :"<<endl;
		cin>>name;
		cout<<"Enter the marks of the student: "<<endl;
		cin>>marks;

	}
};
void main()
{
	clrscr();
	fstream file("student.dat",ios::in|ios::binary|ios::out|ios::app);
	if(!file)
	{
		fstream file("student.dat",ios::out|ios::binary);
		if(!file)
		{
			cout<<"Cannot open! ";
			exit(0);
		}
	}
	std s1;
	for(int i=0;i<5;i++)
	{
		s1.getdata();
		file.seekp(0l,ios::end);
		file.write((char*)&s1,sizeof(s1));
	}
	getch();

}