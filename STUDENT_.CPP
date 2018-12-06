#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[30];
	float percent;
}s1;
void main()
{
	clrscr();
	ifstream inf("std.txt",ios::binary);
	inf.read((char*)&s1,sizeof(s1));
	cout<<s1.roll<<s1.name<<s1.percent;
	inf.close();
	getch();
}