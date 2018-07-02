#include<iostream.h>
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
	int get_rno()
	{
		return roll;
	}
	void show()
	{
		cout<<roll<<endl;
		cout<<name<<endl;
		cout<<marks<<endl;
	}
};
void main()
{
	clrscr();
	student s1;
	char found='N';
	fstream file("student.dat",ios::in|ios::binary);
	if(!file)
	{
		cout<<"Cannot Open";
		exit(0);
	}
	int rno;
	cout<<"Enter Roll_no  to search";
	cin>>rno;
	file.seekg(0);
	while(!file.eof())
	{
		file.read((char*)&s1,sizeof(s1));
		if(s1.get_rno()==rno)
		{
			s1.show();
			found='y';
			break;
		}
	}
	getch();
}


