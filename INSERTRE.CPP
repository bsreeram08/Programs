#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<stdlib.h>

class student

{ 	int roll;
	char name[10];
	float marks;

	public:
	void getdata()
	{ cout<<"\n enter the roll no.\n";
	cin>>roll;
	cout<<"\n enter name of student \n";
	cin>>name;
	cout<<"\n enter the marks|n ";
	cin>>marks;

	}

	int get_RNO()
	{return roll;
	}
};

void main()

{ 	clrscr();
	char last= 'y';
	student S1,S2;
	fstream file("student.dat",ios::in|ios::binary);

	if(!file)
	{ cout<<"\n cant open file";
	exit(0);
	}

	fstream tmp("temp.dat",ios::out|ios::binary);
	S2.getdata();
	file.seekg(0);

	while(file.read((char*)&S1,sizeof(S1)))
       {
	if(S2.get_RNO()<=S1.get_RNO())
	{tmp.write((char*)&S2,sizeof(S2));
	last='n';
	break;
	}

	else
	{tmp.write((char*)&S1,sizeof(S1)); }
       }
       if (last=='y')
		tmp.write((char*)&S2,sizeof(S2));
       else if(!file.eof())
       {     while(!file.eof())
		       {
			tmp.write((char*)&S1, sizeof(S1));
			file.read((char*)&S1, sizeof(S1));
			}
	}


       file.close();
       tmp.close();
       remove("student.dat");
       rename("temp.dat","student.dat");
       getch();

}