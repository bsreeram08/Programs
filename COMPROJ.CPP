#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<dos.h>
#include<fstream.h>
#include<stdlib.h>
char origpw[10];
class student
{
	int rollno;
	char name[50];
	int p_marks,m_marks,c_marks,cs_marks,e_marks;
	float per;
	char grade;
	void calculate()
	{
		per=((p_marks+c_marks+m_marks+cs_marks+e_marks)/5.0);
		if(per>=80&&per<=100)
		{
			grade='A';
		}
		else if(per>=60&&per<80)
		{
			grade='B';
		}
		else if(per>=40&&per<60)
		{
			grade='C';
		}
		else if(per>=33&&per<40)
		{
			grade='D';
		}
		else
		{
			grade='F';
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
	void show_tabular()
	{
		cout<<"  "<<rollno<<setw(6)<<""<<name<<setw(10)<<""<<p_marks<<setw(4)<<c_marks<<setw(4)<<m_marks<<setw(4)<<cs_marks<<setw(4)<<e_marks<<setw(4)<<"      "<<per<<setw(8)<<"    "<<grade<<endl;
	}
	char origpw[10];
}pw;
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
	student st,stud;
	ifstream infile;
	infile.open("student.dat",ios::in|ios::binary|ios::app);
	char last='y';
	ofstream outfile;
	st.getdata();
	outfile.open("temp.dat",ios::binary|ios::app|ios::out);
	while(!infile.eof())
	{
		infile.read((char*)&st,sizeof(st));
		if(st.retrollno()<=stud.retrollno())
		{
			outfile.write((char*)&st,sizeof(st));
			last='n';
			break;
		}
		else
			outfile.write((char*)&st,sizeof(st));
	}
	if(last=='y')
	{
		outfile.write((char*)&st,sizeof(st));
	}
	else if(!infile.eof())
	{
		while(!infile.eof())
		{
			infile.read((char*)&st,sizeof(st));
			outfile.write((char*)&st,sizeof(st));
		}
	}
	textcolor(2);
	cout<<"\n\n\t\t";
	cprintf("Records created and Added");
	textcolor(7);
	cout<<"\n\n\n";
	textcolor(4);
	cprintf("Press any key to continue");
	textcolor(7);
	outfile.close();
	infile.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
}
void search(int rollno)
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
	while(!infile.eof())
	{
		infile.read((char*)&search,sizeof(search));
		if(search.retrollno()==rollno)
		{
			search.showdata();
			x=1;
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
		if(st.retrollno()!=roll)
		{
			outFile.write((char *) &st, sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	cout<<"\n\n\tRecord Deleted ..";
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
	cout<<"\n\t\tALL STUDENT RESULT \n\n";
	cout<<"*****************************************************************";
	cout<<"\n";
	textcolor(2);
	cprintf("ROLLNO  NAME              P   C/B M   CS  E   Percentage  Grade");
	cout<<"\n";
	cout<<"*****************************************************************\n";
	textcolor(7);
	while(infile.read((char*)&result,sizeof(result)))
	{
		result.show_tabular();
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
	int rno,t=1;
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
	while(t>0)
	{
		switch(ch)
		{
			case '1':class_result();
				break;
			case '2':clrscr();
				cout<<"Enter the roll no:";
				cin>>rno;
				search(rno);
				break;
			case '3'
			:exit(0);
			default: cout<<"\a";
		}
	}
}
void entry_menu()
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
		char pwd[10];
		case '1':write_student();
		break;
		case '2':class_result();
		break;
		case '3':cout<<"\nEnter the Rollno to Search:";
		cin>>num;
		search(num);
		break;
		case '4':
		cout<<"\nEnter the (10 letter) ADMIN password:";
		for(int k=0;k<10;k++)
		{
			pwd[k]=getch();
			cout<<"*";
		}
		if(strcmp(pwd,pw.origpw))
		{       clrscr();
			cout<<"\nEnter the Rollno to Modify:";
			cin>>num;
			modify_student(num);
		}
		else
		{
			clrscr();
			textcolor(4);
			for(int r=0;r<10;r++)
			{
				cout<<"Password Wrong.......";
				delay(100);
				clrscr();
			}
			cout<<"\n Press any key to continue";
		}
		break;
		case '5':cout<<"\nEnter the Rollno to Delete:";
		cin>>num;
		del_student(num);
		break;
		case '6':break;
		default:cout<<"\a";
	}
}
void main()
{
	setprecision(2);
	intro();
	delay(3000);
	clrscr();
	strcpy(pw.origpw,"qwertyuiop");
	char ch='a';
	while(ch!=3)
	{
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\t\t";
		textcolor(10);
		cprintf("Entry Menu");
		cout<<"\n\t\t\t\t";
		textcolor(14);
		cprintf("1)Result menu");
		cout<<"\n\t\t\t\t";
		cprintf("2)Entry/Edit");
		cout<<"\n\t\t\t\t";
		cprintf("3)Exit");
		ch=getch();
		textcolor(7);
		switch(ch)
		{
			case '1':resultmenu();
			break;
			case '2':entry_menu();
			break;
			case '3':exit(0);
			default:cout<<"\a";
		}
	}
}