#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>

class student
{	int roll;
	char name[10];
	float marks;

	public:
	void putdata()
	{cout<<"\n  roll values: "<<roll;
	cout<<"\n  name value: "<<name;
	cout<<"\n  mrks value: "<<marks;
	}

	int get_RNO()
	{ return roll;
	}

	};

void main()
{clrscr();

	fstream file("student.dat",ios::in|ios::binary);
	if(!file)
	{cout<<"\n can't open file";
	exit(0);
	}
		student S1;
		file.seekg(0);
		while( file.read((char*)&S1,sizeof(S1)))
		{S1.putdata(); getch();}
		file.close();

	 getch();
}
