#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>

class stud
{	int roll;
	char name[10];
	float marks;

	public:
	void getdata()
	{cout<<"\n enter roll values";
	cin>>roll;
	cout<<"\n enter name value";
	cin>>name;
	cout<<"\n enter mrks value";
	cin>>marks;
	}

	int get_RNO()
	{ return roll;
	}

	};

void main()
{clrscr();
	fstream file("student.dat",ios::in|ios::out|ios::app);

	if(!file)
	{ fstream file("student.dat",ios::out|ios::binary);

	if(!file)
	{cout<<"\n can't open file";
	exit(0);
	}
	}
		stud S1;
		for(int i=0;i<1;i++)
		{	S1.getdata();
			//file.seekp(0L,ios::end);
			file.write((char*)&S1,sizeof(S1));
		}
		getch();
}


