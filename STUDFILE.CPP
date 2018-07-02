#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
class student
{
	int roll;
	char name[10];
	float marks;
	public:
	void getdata()
	{
		cout<<"Enter roll:";
		cin>>roll;
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter marks:";
		cin>>marks;
	}
	void display()
	{
		cout<<"\nDETAILS:";
		cout<<roll<<"\t"<<name<<"\t"<<marks<<"\n";
	}
	int getrno()
	{
		return roll;
	}
	void modify()
	{
		char NM[10];
		float mk;
		cout<<"Enter new name/to retain old value input .:";
		cin>>NM;
		cout<<"Enter new marks/to retain old value(0):";
		cin>>mk;
		if(strcmp(NM,".")!=0)
			strcpy(name,NM);
		if(mk!=0)
			marks=mk;
	}

}s1,s2;
void main()
{
	clrscr();
	fstream file("student.dat",ios::in|ios::out|ios::binary);
	if(!file)
	{
		cout<<"cannot open";
		exit(0);
	}
	fstream tmp("temp.dat",ios::out|ios::binary);
	int choice,rno;
	char ans,found='y';
	int pos=0;
	cout<<"\n\nEnter your choice:";
	cout<<"\n1.add record\n2.view record\n3.modify\n4.remove\n5.exit\n\n";
	cin>>choice;
	switch(choice)
	{
		case 1:		s1.getdata();
				file.seekp(0L,ios::end);
				file.write((char*)&s1,sizeof(s1));
				file.close();
				break;
		case 2:		file.seekg(0);
				while(file.read((char*)&s1,sizeof(s1)))
				{
					s1.display();
				}
				file.close();
				break;
		case 3:         cout<<"Enter roll to modify:";
				cin>>rno;
				file.seekg(0);
				while(file.read((char*)&s1,sizeof(s1)))
				{
					pos=file.tellg();
					if(s1.getrno()==rno)
					{
						s1.modify();
						file.seekg(pos-sizeof(s1));
						file.write((char*)&s1,sizeof(s1));
						break;
					 }
				}
				break;
		case 4:         clrscr();
				cout<<"\nEnter roll to remove:";
				file.seekg(0);
				while(file.read((char*)&s1,sizeof(s1)))
				{
					if(s1.getrno()!=rno)
					{
						tmp.write((char*)&s1,sizeof(s1));
					}
					else
					{
						cout<<"\nR U SURE??\n\n";
						cin>>ans;
						if(ans=='n'||ans=='N')
						{
							tmp.write((char*)&s1,sizeof(s1));
						}
					}
				}
				if(found=='y'||found=='Y')
				{
					cout<<"\n\nRecord removed!!!!!!!!!\n\n";
				}
				else
					cout<<"\nRECORD NOT REMOVED:";
				file.close();
				tmp.close();
				remove("student.dat");
				rename("temp.dat","student.dat");
				file.open("student.dat",ios::in|ios::out|ios::binary);
				break;
		case 5:		file.close();
				exit(0);
		default:	cout<<"Invalid choice";
				break;
	}
	getch();
}






