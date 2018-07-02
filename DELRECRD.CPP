#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
class student
{
	int roll;
	char name[10];
	float marks;
	public:
	int getrno()
	{
		return roll;
	}
};
void main()
{
	clrscr();
	student s1;
	char ans;
	int rno;
	char found='N';
	fstream file("student.dat",ios::in||ios::binary);
	fstream tmp("temp.dat",ios::out|ios::binary);
	if(!file)
	{
		cout<<"Cannot open";
		exit(0);
	}
	cout<<"Enter Roll to remove";
	cin>>rno;
	file.seekg(0);
	while(file.read((char*)&s1,sizeof(s1)))
	{
		if(s1.getrno()!=rno)
		{
			tmp.write((char*)&s1,sizeof(s1));
		}
		else
		{
			cout<<" Are You Sure?";
			cin>>ans;
			found='Y';
			if(ans=='N')
			{
				tmp.write((char*)&s1,sizeof(s1));
			}
		}
	}
	 file.close();
	 tmp.close();
	 remove("Student.dat");
	 rename("temp.dat","student.dat");
	 getch();
}
