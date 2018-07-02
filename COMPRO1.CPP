#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<dos.h>
#include<fstream.h>
#include<stdlib.h>
char origpw[10]="qwertyuiop";
class student
{
	int rollno;
	char name[50];
	int p_marks,m_marks,c_marks,cs_marks,e_marks;
	float per;
	char grade;
	int remarks;
	void calculate()
	{
		per=((p_marks+c_marks+m_marks+cs_marks+e_marks)/5.0);
		if(per>=80&&per<=100)
		{
			grade='A';
			remarks=1;
		}
		else if(per>=60&&per<80)
		{
			grade='B';
			remarks=2;
		}
		else if(per>=40&&per<60)
		{
			grade='C';
			remarks=3;
		}
		else if(per>=33&&per<40)
		{
			grade='D';
			remarks=4;
		}
		else
		{
			grade='F';
			remarks=5;
		}
	}
	public:
	void getdata()
	{
		cout<<"\nEnter the Roll No of the Student:";
		cin>>rollno;
		cout<<"Enter the Name of the Student:";
		cin>>name;
		cout<<"Enter the marks scored in ";
		textcolor(2);
		cprintf("Physics");
		textcolor(7);
		cout<<" out of 100:";
		cin>>p_marks;
		cout<<"Enter the marks scored in ";
		textcolor(6);
		cprintf("Chemistry");
		textcolor(7);
		cout<<" out of 100:";
		cin>>c_marks;
		cout<<"Enter the marks scored in ";
		textcolor(1);
		cprintf("Maths");
		textcolor(7);
		cout<<" out of 100:";
		cin>>m_marks;
		cout<<"Enter the marks scored in ";
		textcolor(1);
		cprintf("Computer/Biology");
		textcolor(7);
		cout<<" out of 100:";
		cin>>cs_marks;
		cout<<"Enter the marks scored in ";
		textcolor(5);
		cprintf("English");
		textcolor(7);
		cout<<" out of 100:";
		cin>>e_marks;
		calculate();
		cout<<"\n\n\n\t\t\t\t";
		getch();
	}
	void showdata()
	{
		clrscr();
		cout<<"RollN0:\t"<<rollno<<"\nName:\t"<<name<<"\nMarks scored in ";
		textcolor(2);
		cprintf("Physics");
		textcolor(7);
		cout<<" : "<<p_marks;
		cout<<"\nMarks scored in ";
		textcolor(4);
		cprintf("Chemistry");
		textcolor(7);
		cout<<" : "<<c_marks;
		cout<<"\nMarks scored in ";
		textcolor(1);
		cprintf("Maths");
		textcolor(7);
		cout<<" : "<<m_marks;
		cout<<"\nMarks scored in ";
		textcolor(1);
		cprintf("Computer/Biology");
		textcolor(7);
		cout<<" : "<<cs_marks;
		cout<<"\nMarks scored in ";
		textcolor(5);
		cprintf("English");
		textcolor(7);
		cout<<" : "<<e_marks;
		cout<<"\nTotal Percentage scored: "<<per;
		cout<<"\nGrade: "<<grade;
	}
	int retrollno()
	{
		return rollno;
	}
	void show_tabular(int x)
	{
		gotoxy(2,x);
		cout<<rollno;
		gotoxy(8,x);
		cout<<name;
		gotoxy(26,x);
		cout<<p_marks;
		gotoxy(29,x);
		cout<<c_marks;
		gotoxy(32,x);
		cout<<m_marks;
		gotoxy(36,x);
		cout<<cs_marks;
		gotoxy(41,x);
		cout<<e_marks;
		gotoxy(49,x);
		cout<<per;
		gotoxy(59,x);
		cout<<grade;
	}
	void showreportcard()
	{
		clrscr();
		cout<<"||====================================================||"<<endl;
		cout<<"||             Asian International [P] School         ||"<<endl;
		cout<<"||                    Ruwais,Abudhabi                 ||"<<endl;
		cout<<"||                 United Arab Emerates               ||"<<endl;
		cout<<"||\tName                     :"<<name;
		gotoxy(55,5);
		cout<<"||\n";
		cout<<"||\tRollno                   :"<<rollno;
		gotoxy(55,6);
		cout<<"||\n";
		cout<<"||\tMarks in Physics         :"<<p_marks;
		gotoxy(55,7);
		cout<<"||\n";;
		cout<<"||\tMarks in Chemistry       :"<<c_marks;
		gotoxy(55,8);
		cout<<"||\n";;
		cout<<"||\tMarks in Maths           :"<<m_marks;
		gotoxy(55,9);
		cout<<"||\n";
		cout<<"||\tMarks in Computer/Biology:"<<cs_marks;
		gotoxy(55,10);
		cout<<"||\n";
		cout<<"||\tMarks in English         :"<<e_marks;
		gotoxy(55,11);
		cout<<"||\n";
		cout<<"||\tTotal Percentage         :"<<per;
		gotoxy(55,12);
		cout<<"||\n";
		cout<<"||\tGrade Obtained           :"<<grade;
		gotoxy(55,13);
		cout<<"||\n";
		cout<<"||\tRemarks                  :";
		if(remarks==1)
		{
			cout<<"Excellent";
		}
		else if(remarks==2)
		{
			cout<<"Very Good";
		}
		else if(remarks==3)
		{
			cout<<"Improvement Needed";
		}
		else if(remarks==4)
		{
			cout<<"Very Bad";
		}
		else
		{
			cout<<"Meet the Principal";
		}
		gotoxy(55,14);cout<<"||\n";
		cout<<"||                                                    ||\n";
		cout<<"||====================================================||";
		cout<<"\n\n\n";
	}
};
void intro()
{
	clrscr();
	textcolor(10);
	cout<<"\n\n\t\t";
	cprintf("*****  *****  *   *  *****    *****  *   *  *****");
	cout<<"\n";
	cout<<"\t\t";
	cprintf("*        *    *   *   *   *   *      **  *    *");
	cout<<"\n";
	cout<<"\t\t";
	cprintf("*****    *    *   *   *    *  ***    * * *    *");
	cout<<"\n";
	cout<<"\t\t";
	cprintf("    *    *    *   *   *   *   *      *  **    *");
	cout<<"\n";
	cout<<"\t\t";
	cprintf("*****    *    *****  *****    *****  *   *    *");
	cout<<"\n\n\n";
	cout<<"\t";
	textcolor(14);
	cprintf("*****  *****  *****  *****  *****  *****   ****    *    *****  *****");
	cout<<"\n";
	cout<<"\t";
	cprintf("*   *  *      *   *  *   *  *   *    *    *       * *   *   *   *   *");
	cout<<"\n";
	cout<<"\t";
	cprintf("*****  ***    *****  *   *  *****    *    *      *****  *****   *    *");
	cout<<"\n";
	cout<<"\t";
	cprintf("* *    *      *      *   *  * *      *    *      *   *  * *     *   *");
	cout<<"\n";
	cout<<"\t";
	cprintf("*  **  *****  *      *****  *  **    *     ****  *   *  *  **  *****");
	cout<<"\n";
	textcolor(4);
	cout<<"\n\n\t\t\t\t\t\t\t";
	cprintf("Done by,");
	cout<<"\n\t\t\t\t\t\t\t      ";
	cprintf("-B.SREERAM");
	cout<<"\n\t\t\t\t\t\t\t      ";
	cprintf("-MANISH KANCHAN");
	textcolor(7);
}
void write_student()
{
	clrscr();
	student stud,s1;
	ifstream fi("student.dat",ios::in|ios::app|ios::binary);
	ofstream fo("temp.dat",ios::out|ios::app|ios::binary);
	char last='y',choi;
	lb:
	cout<<"Enter detail of the student you want to add \n";
	s1.getdata();
	while(!fi.eof())
	{
		fi.read((char*)&stud,sizeof (stud));
		if(s1.retrollno()<=stud.retrollno())
		{
			fo.write((char*)&s1,sizeof (s1));
			last='n';
			break;
		}
	else
		fo.write((char*)&stud,sizeof(stud));

	if(last=='n')
		fo.write((char*)&s1,sizeof(s1));
	else
	while(!fi.eof())
	{
		fi.read((char*)&stud,sizeof(stud));
		fo.write((char*)&s1,sizeof(s1));
	}
	}
	remove("student.dat");
	rename("temp.dat","student.dat");
	cout<<"Record Added\n";
	textcolor(4);
	cprintf("Press any key to continue");
	textcolor(7);
	getch();
}
void searcha(int rollno)
{
	clrscr();
	student search;
	ifstream infile;
	infile.open("student.dat",ios::binary|ios::in|ios::app);
	if(!infile)
	{
		textcolor(4);
		cprintf("FILE COULD NOT BE OPENED!!!");
		cout<<" \n\t\t";
		textcolor(4);
		cprintf("press any key to continue");
		textcolor(7);
		getch();
		return;
	}
	int x=0;
	while(	infile.read((char*)&search,sizeof(search)))
	{
		if(rollno==search.retrollno())
		{
			search.showdata();
			x=1;
			break;
		}
	}
	infile.close();
	if(x==0)
	{
		for(int i=0;i<31;i++)
		{
			delay(100);
			textcolor(i);
			gotoxy(1,1);
			cprintf("Record not Exist");
		}

		textcolor(7);
		cout<<"\n\n\n\n";
	}
	textcolor(4);
	cprintf("Press any key to continue");
	textcolor(7);
	getch();
}
void modify_student(int rollno)
{
	int found=0;
	student st;
	fstream File;
	File.open("student.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		getch();
		return;
	}
	while(File.read((char *) &st, sizeof(student)) && found==0)
	{
		if(st.retrollno()==rollno)
		{
			st.showdata();
			cout<<"\n\nPlease Enter The New Details of student"<<endl;
			st.getdata();
			int pos=(-1)*sizeof(st);
			File.seekp(pos,ios::cur);
			File.write((char *) &st, sizeof(student));
			cout<<"\n\n\t Record Updated";
			found=1;
		}
	}
	File.close();
	if(found==0)
		cout<<"\n\n Record Not Found ";
	getch();
}
void del_student(int roll)
{
	student st;
	int x=0;
	int ch;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		getch();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read((char *) &st, sizeof(student)))
	{
		if(st.retrollno()==roll)
		{
			st.showdata();
			cout<<"\nAre you sure you want to delete this record??";
			cout<<"\n1)YES\n2)NO\nOption:";
			cin>>ch;
			if(ch==2)
			{
				outFile.write((char *)&st, sizeof(student));
			}
			else
			{
				x=1;
			}
		}
		else
		{
			outFile.write((char *)&st,sizeof(st));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	if(x==1)
	{
		cout<<"\n\n\tRecord Deleted...";
	}
	else
	{
		cout<<"\n\n\tRecord Not Deleted...";
	}
	getch();
}
void class_result()
{
	student result;
	ifstream infile;
	infile.open("student.dat",ios::binary|ios::in);
	if(!infile)
	{
		textcolor(4);
		cprintf("File not found");
		textcolor(7);
		getch();
		exit(0);
	}
	clrscr();
	int count=6;
	cout<<"\n\t\tALL STUDENT RESULT \n\n";
	cout<<"*****************************************************************";
	cout<<"\n";
	textcolor(2);
	cprintf("ROLLNO  NAME              P  C  M  CS/B  E   Percentage  Grade");
	cout<<"\n";
	cout<<"*****************************************************************\n";
	textcolor(7);
	while(infile.read((char*)&result,sizeof(result)))
	{
		count++;
		result.show_tabular(count);
	}
	textcolor(4);
	cout<<"\n";
	cprintf("Press any key to continue");
	textcolor(7);
	infile.close();
	getch();
}
void resultmenu()
{
	clrscr();
	char ch;
	int rno;
	cout<<"\n\n\n\n\n\n\n\n\n\t\t";
	textcolor(10);
	cprintf("Result menu");
	textcolor(14);
	cout<<"\n\t\t";
	cprintf("    1)Class Result");
	cout<<"\n\t\t";
	cprintf("    2)Student Report Card");
	cout<<"\n\t\t";
	cprintf("    3)Return to Main Menu");
	textcolor(7);
	ch=getch();
	switch(ch)
		{
			case '1':class_result();
				break;
			case '2':clrscr();
				cout<<"Enter the roll no:";
				cin>>rno;
				searcha(rno);
				break;
			case '3':break;
			default: cout<<"\a";
		}

}
void reportcard(int rollnoob)
{
	clrscr();
	student rep;
	ifstream infile;
	infile.open("student.dat",ios::binary|ios::in|ios::app);
	if(!infile)
	{
		textcolor(4);
		cprintf("FILE COULD NOT BE OPENED!!!");
		cout<<" \n\t\t";
		textcolor(4);
		cprintf("press any key to continue");
		textcolor(7);
		getch();
		return;
	}
	int x=0;
	while(	infile.read((char*)&rep,sizeof(rep)))
	{
		if(rollnoob==rep.retrollno())
		{
			rep.showreportcard();
			x=1;
			break;
		}
	}
	infile.close();
	if(x==0)
	{
		for(int i=0;i<31;i++)
		{
			delay(100);
			textcolor(i);
			gotoxy(1,1);
			cprintf("Record not Exist");
		}

		textcolor(7);
		cout<<"\n\n\n\n";
	}
	textcolor(4);
	cprintf("Press any key to continue");
	textcolor(7);
	getch();
}

void entry_menu()
{       int loop=0;
	while(loop==0)
	{
		char choice;
		int num;
		clrscr();
		cout<<"\n\n\n\n\n\n\t\t";
		textcolor(10);
		cprintf("Entry/Edit Menu");
		cout<<"\n\t\t";
		textcolor(14);
		cprintf("1)Create Record");
		cout<<"\n\t\t";
		cprintf("2)Display all Student Record");
		cout<<"\n\t\t";
		cprintf("3)Search");
		cout<<"\n\t\t";
		cprintf("4)Modify");
		cout<<"\n\t\t";
		cprintf("5)Delete");
		cout<<"\n\t\t";
		cprintf("6)Return to main menu");
		textcolor(7);
		choice=getch();
		switch(choice)
		{
			case '1':write_student();
			break;
			case '2':class_result();
			break;
			case '3':cout<<"\nEnter the Rollno to Search:";
			cin>>num;
			searcha(num);
			break;
			case '4':cout<<"\nEnter the Rollno to Modify:";
				 cin>>num;
				 modify_student(num);
				 break;
			case '5':cout<<"\nEnter the Rollno to Delete:";
				 cin>>num;
				 del_student(num);
				 break;
			case '6':loop=1;
				 break;
				 default:cout<<"\a";
		}
	}
}
void mainmenu()
{
	int che=0;
	char pwd[10];
	char ch='a';
	while(ch!=3)
	{
		clrscr();
		int rollno;
		cout<<"\n\n\n\n\n\n\n\n\n\t\t";
		textcolor(10);
		cprintf("Entry Menu");
		cout<<"\n\t\t\t\t";
		textcolor(14);
		cprintf("1)Result menu");
		cout<<"\n\t\t\t\t";
		cprintf("2)Entry/Edit");
		cout<<"\n\t\t\t\t";
		cprintf("3)Report card");
		cout<<"\n\t\t\t\t";
		cprintf("4)exit");
		ch=getch();
		textcolor(7);
		switch(ch)
		{
			case '1':resultmenu();
			break;
			case '2':
		cout<<"\nEnter the (10 letter) ADMIN password:";
		for(int k=0;k<10;k++)
		{
			pwd[k]=getch();
			cout<<"*";
		}
		for(int g=0;g<10;g++)
		{if(pwd[g]==origpw[g])
		{
			che=0;
		}
		else
		{
			che=1;
			break;
		}
		}
		if(che==0)
		{
		       clrscr();
		       entry_menu();

		}
		else
		{
			clrscr();
			textcolor(4);
			cprintf("Password Wrong.......");
			delay(500);
			textcolor(7);
			cout<<"\n Press any key to continue";
			getch();
		}
		break;
			case '3':cout<<"\nEnter the student's roll no to Display report card:";
			cin>>rollno;
			reportcard(rollno);
			break;
			case '4':exit(0);
			default:cout<<"\a";
		}
	}
}
void main()
{
	setprecision(2);
	intro();
	delay(3000);
	clrscr();
	mainmenu();
	getch();
}