#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
class std
{
	int roll;
	char name[50];
	float marks;
	public:
	void putdata()
	{
		cout<<"the roll number: ";
		cout<<roll<<endl;
		cout<<"the name of the student :";
		cout<<name<<endl;
		cout<<"the marks of the student: ";
		cout<<marks<<endl;

	}
};
void main()
{
	clrscr();
	fstream file("student.dat",ios::in|ios::binary);
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
	file.seekg(0l,ios::beg);
	while(!file.eof())
	{
		file.read((char*)&s1,sizeof(s1));
		s1.putdata();
		getch();
	}
	getch();
}
