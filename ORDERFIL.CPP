#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
class student
{
	int roll;
	char name[10];
	float marks;
	public:
	void getdata()
	{
		cout<<"\nEnter Roll,Name,Marks:\n";
		cin>>roll>>name>>marks;
	}
	int getrno()
	{
		return roll;
	}
};
void main()
{
	clrscr();
	student s1,s2;
	fstream file("student.dat",ios::in|ios::binary);
	/*if(!file)
	{
		cout<<"\nCant open";
		exit(0);                         bbgb
	}*/
	fstream temp("temp.dat",ios::out|ios::binary);
	s2.getdata();
	file.seekg(0);
	char last='Y';
	while(!file.eof())
	{
		file.read((char*)&s1,sizeof(s1));
		if(s2.getrno()<s1.getrno())
		{
			temp.write((char*)&s2,sizeof(s2));
			last='N';
			break;
		}
		else
		{
			file.write((char*)&s1,sizeof(s1));
			break;
		}
	}
	if(last=='Y')
	{
		temp.write((char*)&s1,sizeof(s1));
	}
	else if(!file.eof())
	{
		while(!file.eof())
		{
			file.read((char*)s1,sizeof(s1));
			emp.write((char*)s1,sizeof(s1));
		}
	}
	file.close();
	temp.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
	getch();
}
