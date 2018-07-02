#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
struct stud
{
	int roll;
	char name[30];
	float percent;
}s1;
void main()
{
	cout<<"enter roll no, name , percent";
	cin>>s1.roll>>s1.name>>s1.percent;
	ofstream outf("std.txt",ios::binary|ios::app);//data flow in the form of charecter
	if(!outf)
	{
		cout<<"cannot open";
		exit(0);
	}
	outf.write((char*)&s1,sizeof(s1));
	outf.close();
}
