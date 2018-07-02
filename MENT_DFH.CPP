#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
class student
{
	int rollno;
	char name[20];
	float marks;
	public:
	void getdata()
	{
		cout<<"Enter the roll number: \n";
		cin>>rollno;
		cout<<"Enter the name:\n";
		cin>>name;
		cout<<"Enter the marks:\n";
		cin>>marks;
	}
	void display()
	{
		cout<<"Details:-\n";
		cout<<rollno<<endl<<name<<endl<<marks;
	}
	int getrno()
	{
		return roll;
	}
}s1,s2;
void main()
{
	clrscr();
	fstream file("student.dat",ios::in|ios::out|ios::binary;
	if(!file)
	{
		cout<<"Cannot open";
		exit(0);
	}
	int choice;
	char ans,found='n';
	cout<<"The menu operations is as follows:-\n";
	cout<<"1)Add record\n2)View record\n3)Modify record\n4)Delete record";
	cin>>choice;
	switch(choice)
	{
		case 1:
		s1.getdata();
		file.seekp(01,ios::end);
		file.write((char*)&S2,sizeof(S2));
		last='n';
		break;
		case 2:
		file.seekg(0);
		while(file.read(!file.eof());
		{
			tmp.write((char*)&S1, sizeof(S1));
			file.read((char*)&S1, sizeof(S1));
		}
		break;
		case 3:
		cout<<"Enter roll to modify";
		cin>>rno;
		file.seekg(0);
		while(!fil.eof())
		 { if(strcmp(n,fileobj.getn())==0)
		 { fil.seekg(0,ios::cur); 
		cout<<"Enter New Record.."<<endl; fileobj.input(); 
		fil.seekp(fil.tellg() - sizeof(fileobj)); 
		fil.write((char*)&fileobj, sizeof(fileobj)); 
		} 
	else 
		{ 	
			cout<<"Press Any Key....For Search"<<endl; 
			getch(); 
		}
		fil.read((char*)&fileobj, sizeof(fileobj));
		}
		break;
		case 4:
		{

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




