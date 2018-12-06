#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
class std
{
	int roll;
	char name[10];
	float marks;
	public:
	void modify()
	{
		char nm[10];
		float mk;
		cout<<"Enter new value to retain old value input.";
		cin>>nm;
		if(strcmp(nm,".")!=0)
		strcpy(name,nm);
		if(mk!=0)
		marks=mk;
	}
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