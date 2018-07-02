#include<iosteam.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream.h>
class student
{
	int roll;
	char name[10];
	float marks;
	public:
	void getdata();
	{
		cout<<"enter roll no:";
		cin>>roll;
		cout<<"enter name:";
		cin>>name;
		cout<<"enter marks:";
		cin>>marks;
	}
	void display()
	{
		cout<<roll<<" "<<name<<" "<<marks;
	}
	int getrno()
	{
		return roll;
	}
	void modify()
	{
		char nm[10];
		float mk;
		cout<<"enter any value:/to retain old value, input .";
		cin>>nm;
		cout<<"enter new marks:/to retain old value, input 0";
		cin>>mk;
		if(strcmp(nm,".")!=0)
		strcpy(name, nm);
		if(mk!=0)
		marks=mk;
	}
};
	void main()
	{  clrscr();
		student s1;
		int RNO;
		fstream file("student.dat",ios::in|ios::out|ios::binary);
		if(!file)
		{
			cout<<"cant open";
			exit(0);
		}
		int choice;
		char ans, found='n';
		cout<<"enter your choice. \n 1.add record \n 2.view record \n 3.modify record \n 4.remove record \n 5.exit";
		cin>>choice;
		switch(choice)
		{
			case 1:
			s1.getdata();
			file.seekp(0l,ios::end);
			file.write((char*)&s1,sizeof(s1));
			break;
			case 2:
			file.seekg(0);
			while(file.read((char*)&s1,sizeof(s1)))
			{
				s1.display();
			}
			break;
			case 3:
			cout<<"enter roll no to modify:";
			cin>>RNO;
			file.seekg(0);
			while(!file.eof())
			{
				 if(s1.getrno()==RNO)
				 {
					s1.modify();
				 }
			}
			break;
			case 3:
			cout<<"enter roll to remove";
			cin>>RNO;







