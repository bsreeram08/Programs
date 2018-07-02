#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<iomanip.h>

fstream file;
int input1;
int dd1,dd2,mm1,mm2,yy1,yy2,fhalf,shalf,days=0;

void center(char* s)											//to  center the output
{
     int l=strlen(s);
     int pos=(int)((80-l)/2);
     for(int i=0;i<pos;i++)
        cout<<" "; 
     cout<<s<<endl;
}

int month(int mm, int yy)
{
	int n;
	switch(mm)
	{
	case 1:n=31;
		break;
	case 2: if(yy%4==0)
				n=29;		
		else n=28;
		break;
	case 3:n=31;
		break;
	case 4:n=30;
		break;
	case 5:n=31;
		break;
	case 6:n=30;
		break;
	case 7:n=31;
		break;
	case 8:n=31;
		break;
	case 9:n=30;
		break;
	case 10:n=31;
		break;
	case 11:n=30;
		break;
	case 12:n=31;
		break;
	}
	return n;
}

int date_day()													//date to days conversion
{
	
	int n;
	
	char result;
	cout<<"\n\n------------";
	cout<<"\nFrom Date"<<"\n";
	cout<<"------------";

		cout<<"\nEnter date (01-31): ";
		cin>>dd1;
		cout<<"\nEnter month (01-12): ";
		cin>>mm1;
		cout<<"\nEnter year (20xx): ";
		cin>>yy1;
		cout<<"\n\n------------";
		cout<<"\nTo Date";
		cout<<"\n------------";
		cout<<"\nEnter date (01-31): ";
		cin>>dd2;
		cout<<"\nEnter month (01-12): ";
		cin>>mm2;
		cout<<"\nEnter year (20xx): ";
		cin>>yy2;

	if(mm1 != mm2 )
	{
		n=month(mm1,yy1);
		
		days = n - dd1+1;
		fhalf=days;
		mm1++;

			if(mm1>=13)
				{
					mm1=1;
					yy1=yy2;
				}
		do
		{
			if(mm1==mm2)
				result='y';
			else
				result='n';
			switch(result)
			{
			case 'n': n=month(mm1,yy1);
				days+=n;
				mm1++;
			
				if(mm1>=13)
				{
					mm1=1;
					yy1=yy2;
				}
				cout<<"mm1="<<mm1;
				cout<<"yy1="<<yy1;
					break;
			case 'y':days+=dd2;
				mm1++;
				break;
			}
		}while(mm1<=mm2);
	}
	else 
		days= (dd2-dd1)+1;
	
	cout<<"\nTotal Number of Days:"<<days;

	shalf=days-fhalf;
	

	return days;
}

void heading()
{
	center("--------------------------");
	center("ASIAN INTERNATIONAL SCHOOL");
	center("--------------------------");
	cout<<"\n\n";
	center("------------------------------");
	center("STAFF LEAVE RECORD MAINTENANCE");
	center("------------------------------");
}

int mainmenu()
{
	int menu_input;
	
	cout<<endl;
	center("---------");
	center("MAIN MENU");
	center("---------");
	cout<<endl;
	cout<<setw(49)<<"1.Add New Employees"<<endl;
	cout<<setw(44)<<"2.Edit Details"<<endl;
	cout<<setw(47)<<"3.Delete a Record"<<endl;
	cout<<setw(49)<<"4.Leave Application"<<endl;
	cout<<setw(45)<<"5.Leave Reports"<<endl;
	cout<<setw(51)<<"6.Display all Records"<<endl;
	cout<<setw(36)<<"7.Exit"<<endl<<endl;

	do
	{
	cout<<"Input : ";
	cin>>menu_input;
	if(menu_input <1 || menu_input>8)
		cout<<"\nInvalid Input !!! Please try agian "<<endl<<endl;
	else
	return menu_input;

	}while(menu_input <1 || menu_input>8);
}

int report_menu()
{
	int report_input;
	
	center("-----------");
	center("REPORT MENU");
	center("-----------");
	cout<<endl;
	cout<<setw(46)<<"1.Employee Wise"<<endl;
	cout<<setw(46)<<"2.Category Wise"<<endl;
	cout<<setw(48)<<"3.Department Wise"<<endl;
	cout<<setw(59)<<"4.Month Wise (All Employees)"<<endl;
	cout<<setw(61)<<"5.Month Wise (Single Employee)"<<endl;
	cout<<setw(50)<<"6.Back to Main Menu"<<endl;
	cout<<setw(37)<<"7.Exit"<<endl<<endl;


	do
	{
	cout<<"Input : ";
	cin>>report_input;
	if(report_input <1 || report_input>7)
		cout<<"Invalid Input !!! Please try agian "<<endl<<endl;
	else
	return report_input;

	}while(report_input <1 || report_input>7);
}

int leave_menu()
{
	int leave_input;
	cout<<endl;
	
	center("----------");
	center("LEAVE MENU");
	center("----------");
	cout<<endl;
	cout<<setw(46)<<"1.Annual Leave"<<endl;
	cout<<setw(47)<<"2.Medical Leave"<<endl;
	cout<<setw(46)<<"3.Casual Leave"<<endl;
	cout<<setw(37)<<"4.CDO"<<endl;
	cout<<setw(51)<<"5.Back to Main Menu"<<endl;
	cout<<setw(38)<<"6.Exit"<<endl<<endl;


	do
	{
	cout<<"Input : ";
	cin>>leave_input;
	if(leave_input <1 || leave_input>6)
		cout<<"Invalid Input !!! Please try agian "<<endl<<endl;
	else
	return leave_input;

	}while(leave_input <1 || leave_input>6);
}



class edetails
{

public:
	char name[25],dept[20],category[30];
	int empno,aleave ,mleave,cleave,cdo,balance;

	int amm1,amm2,afhalf,ashalf,a_days;
	int mmm1,mmm2,mfhalf,mshalf,m_days;
	int cmm1,cmm2,cfhalf,cshalf,c_days;
	int comm1,comm2,cofhalf,coshalf,co_days;


	int ajan,afeb,amar,aapl,amay,ajun,ajul,aaug,asep,aoct,anov,adec;
	int mjan,mfeb,mmar,mapl,mmay,mjun,mjul,maug,msep,moct,mnov,mdec;
	int cjan,cfeb,cmar,capl,cmay,cjun,cjul,caug,csep,coct,cnov,cdec;
	int cojan,cofeb,comar,coapl,comay,cojun,cojul,coaug,cosep,cooct,conov,codec;

	
	void input_details();
	void display_details();
	void display_annual();
	void display_medical();
	void display_casual();
	void display_cdo();

	

}details;



void edetails :: input_details()
{ 
	cout<<"\n\n--------------------";
	cout<<"\nNew Employee Details";
	cout<<"\n--------------------";
	cout<<"\n";

	cin.ignore();
	cout<<"\nName: ";
	cin.getline(name,25);

	cout<<"\nEmployee Number: ";
	cin>>empno;

	cout<<"\nDepartment: ";
	cin>>dept;
	cin.ignore();
	
	cout<<"\nCategory: ";
	cin.getline(category,30);
	
	
	cout<<"\nAnnual Leave: ";
	cin>>aleave;
	
	
	cout<<"\nMedical Leave: ";
	cin>>mleave;
	
	
	cout<<"\nCasual Leave: ";
	cin>>cleave;
	
	
	cout<<"\nCDO: ";
	cin>>cdo;


	balance=aleave+mleave+cleave+cdo;
	cout<<"\n----------------";
	cout<<"\nBalance: "<<balance<<" days"<<endl;
	cout<<"----------------";

	details.amm1=details.amm2=0;
	details.a_days = details.m_days = details.c_days = details.co_days = 0;
	details.afhalf=details.mfhalf=details.cfhalf=details.cofhalf=0;
	details.ashalf=details.mshalf=details.cshalf=details.coshalf=0;

	details.ajan=details.afeb=details.amar=details.aapl=details.amay=details.ajun=details.ajul=details.aaug=details.asep=details.aoct=details.anov=details.adec=0;
	details.mjan=details.mfeb=details.mmar=details.mapl=details.mmay=details.mjun=details.mjul=details.maug=details.msep=details.moct=details.mnov=details.mdec=0;
	details.cjan=details.cfeb=details.cmar=details.capl=details.cmay=details.cjun=details.cjul=details.caug=details.csep=details.coct=details.cnov=details.cdec=0;
	details.cojan=details.cofeb=details.comar=details.coapl=details.comay=details.cojun=details.cojul=details.coaug=details.cosep=details.cooct=details.conov=details.codec=0;


	
}

void edetails :: display_details()
{
	
	cout<<"\n\n--------------------";
	cout<<"\n Employee Details ";
	cout<<"\n--------------------";
	
	cout<<"\nName: "<<name<<endl;

	cout<<"\nEmployee Number: "<<empno<<endl;

	cout<<"\nDepartment: "<<dept<<endl;
	
	cout<<"\nCategory: "<<category<<endl;
	
	cout<<"\nAnnual Leave: "<<aleave<<" days"<<endl;
	
	cout<<"\nMedical Leave: "<<mleave<<" days"<<endl;
	
	cout<<"\nCasual Leave: "<<cleave<<" days"<<endl;
	
	cout<<"\nCDO: "<<cdo<<" days"<<endl;
	cout<<"\n----------------"<<endl;

	cout<<"\nBalance: "<<balance<<" days"<<endl;
	cout<<"\n----------------";
	
}	


void edetails :: display_annual()
{
	
	cout<<"\n\n-----------------------";
	cout<<"\nEmployee Leave Balance";
	cout<<"\n-----------------------";
	
	cout<<"\n\nName: "<<name;

	cout<<"\n\nEmployee Number: "<<empno;

	cout<<"\n\nAnnual Leave: "<<aleave<<" days";


	
}	

void edetails :: display_medical()
{
	
	cout<<"\n\n----------------------";
	cout<<"\nEmployee Leave Balance";
	cout<<"\n----------------------";
	
	cout<<"\n\nName: "<<name;

	cout<<"\n\nEmployee Number: "<<empno;

	
	cout<<"\n\nMedical Leave: "<<mleave<<" days"<<endl;
	
	
}	

void edetails :: display_casual()
{
	
	cout<<"\n\n----------------------";
	cout<<"\nEmployee Leave Balance";
	cout<<"\n----------------------";
	
	cout<<"\n\nName: "<<name;

	cout<<"\n\nEmployee Number: "<<empno;

	
	cout<<"\n\nCasual Leave: "<<cleave<<" days"<<endl;
	

}	

void edetails :: display_cdo()
{
	
	cout<<"\n\n----------------------";
	cout<<"\nEmployee Leave Balance";
	cout<<"\n----------------------";
	
	cout<<"\n\nName: "<<name;

	cout<<"\n\nEmployee Number: "<<empno;

	
	cout<<"\n\nCDO: "<<cdo<<" days"<<endl;

}



int main_menu1(int n)																//add details
{	
	char ans,last='y';
	

	ofstream file;
	file.open("tech_details.dat",ios::app);
	
		for(int i=0;i<n;i++)
		{
			details.input_details();
								
			file.write((char*)&details,sizeof(details));
			
		}

			
		
		cout<<"\nDo you want to return to main menu ? (y/n) ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;
}



int main_menu2()																//edit menu
{
	char ans;
	int edt_no,input,flag=0,aleave,cleave,mleave,cdo;
	char name[25],dept[20],category[25];
	fstream file;
	file.open("tech_details.dat",ios::in|ios::out|ios::binary);
	
		cout<<"\nEnter the Employee Number (xxx) : ";
		cin>>edt_no;
		cout<<endl;
		
		
				
	while(file.read((char*)&details,sizeof(details)))

		{
			
			if(details.empno == edt_no)
			{
				flag=1;	
				

				center("----------------------------");
				center("Enter the field to be edited");
				center("----------------------------");

				cout<<setw(40)<<"1.Name"<<endl;
				cout<<setw(46)<<"2.Department"<<endl;
				cout<<setw(44)<<"3.Category"<<endl;
				cout<<setw(48)<<"4.Annual Leave"<<endl;
				cout<<setw(49)<<"5.Medical Leave"<<endl;
				cout<<setw(48)<<"6.Casual Leave"<<endl;
				cout<<setw(39)<<"7.CDO"<<endl;

				cout<<"\n\nInput : ";
				cin>>input;
				if(input <1 || input>7)
						cout<<"Invalid Input !!! Please try agian "<<endl<<endl;

	switch(input)
	{
	case 1: cout<<"\nOld Name: "<<details.name<<endl;
		cin.ignore();
		cout<<"\nEnter New Name: ";
		cin.getline(name,25);
		strcpy(details.name,name);
		
		file.seekp(-1*sizeof(details),ios::cur);
		file.write((char*)&details,sizeof(details));
		
		cout<<"\nEdit Successful..!!"<<endl;
		break;

	case 2:cout<<"\nOld Department: "<<details.dept<<endl;
		cin.ignore();
		cout<<"\nEnter New Department: ";
		cin.getline(dept,20);
		strcpy(details.dept,dept);
		
		file.seekp(-sizeof(details),ios::cur);
		file.write((char*)&details,sizeof(details));
		
		cout<<"\nEdit Successful..!!"<<endl;
		break;

	case 3:cout<<"\nOld Category: "<<details.category<<endl;
		cin.ignore();
		cout<<"\nEnter New Category: ";
		cin.getline(category,25);
		strcpy(details.category,category);
		
		file.seekp(-sizeof(details),ios::cur);
		file.write((char*)&details,sizeof(details));
		
		cout<<"\nEdit Successful..!!";
		break;

	case 4:cout<<"\nOld Annual Leave: "<<details.aleave<<endl;
		cin.ignore();
		cout<<"\nEnter Annual Leave: ";
		cin>>aleave;
		details.balance-=details.aleave;
		details.aleave=aleave;
		
		details.balance+=details.aleave;		
		file.seekp(-sizeof(details),ios::cur);
		file.write((char*)&details,sizeof(details));
		
		cout<<"\nEdit Successful..!!"<<endl;
		break;

	case 5:cout<<"\nOld Medical Leave: "<<details.mleave<<endl;
		cin.ignore();
		cout<<"\nEnter Medical Leave: ";
		cin>>mleave;
		details.balance-=details.mleave;
		details.mleave=mleave;
		
		details.balance+=details.mleave;		
		file.seekp(-sizeof(details),ios::cur);
		file.write((char*)&details,sizeof(details));
		
		cout<<"\nEdit Successful..!!"<<endl;
		break;

	case 6:cout<<"\nOld Casual Leave: "<<details.cleave<<endl;
		cin.ignore();
		cout<<"\nEnter Casual Leave: ";
		cin>>cleave;
		details.balance-=details.cleave;
		details.cleave=cleave;
		
		details.balance+=details.cleave;		
		file.seekp(-sizeof(details),ios::cur);
		file.write((char*)&details,sizeof(details));
		
		cout<<"\nEdit Successful..!!"<<endl;
		break;

	case 7:cout<<"\nOld CDO: "<<details.cdo<<endl;
		cin.ignore();
		cout<<"\nEnter CDO: ";
		cin>>cdo;
		details.balance-=details.cdo;
		details.cdo=cdo;
		
		details.balance+=details.cdo;		
		file.seekp(-sizeof(details),ios::cur);
		file.write((char*)&details,sizeof(details));
		
		cout<<"\nEdit Successful..!!"<<endl;
		break;
	}

			}
		}
			
	
			
	if (flag==0)
			cout<<"\nNot Found..!!\n";
	
		cout<<"\nDo you want to edit more ? (y/n) :";
		cin>>ans;
		if(ans=='n'||ans=='N')
		{
			input1=mainmenu();
						
		}
		else
			main_menu2();
		return input1;
	}


int main_menu3()																//delete menu
{
	char ans,reply;
	char ans2='n';
	int flag1=0,del_no;
	
	ifstream file;
	fstream temp;
	file.open("tech_details.dat",ios::in|ios::binary);
	temp.open("temp.dat",ios::trunc);

		cout<<"\nEnter the Employee Number to be Deleted: ";
		cin>>del_no;

		while(file.read((char*)&details,sizeof(details)))
		{		

			if(details.empno == del_no)
			{
				cout<<"\nPlease Comfirm Deleting "<<details.name<<"("<<details.empno<<")"<<" : (y/n)";
				cin>>reply;			
				flag1=1;
			
			}		

		}
		
		if (flag1==0)
			cout<<"\nNot Found..!!\n\n";

		file.close();

		file.open("tech_details.dat",ios::in|ios::binary);		
		
		
	if(reply =='y')
	{
		file.seekg(0);
		
		
	while(file.read((char*)&details,sizeof(details)))

		{
			
			if(details.empno == del_no)
			{
				cout<<"\nDetails of "<<details.name<<"("<<details.empno<<")"<<" deleted..!!";
				flag1=1;		
			
			}

			else

				temp.write((char*)&details,sizeof(details));			
		

		}
		
		if (flag1==0)
			cout<<"\n\nNot Found...!!\n\n";

		file.close();
		temp.close();
		
		fstream file2;
		file2.open("tech_details.dat",ios::trunc|ios::binary);
		file2.seekp(0);
		temp.open("temp.dat",ios::binary|ios::in);
		
		while(temp.read((char*)&details,sizeof(details)))
		file2.write((char*)&details,sizeof(details));

		temp.close();
		file2.close();
	}
		
	
			cout<<"\n\nDo you want to return to main menu ? (y/n) ";
			cin>>ans;
			if(ans=='y'||ans=='Y')
			{
				input1=mainmenu();
			}
			else
				input1=0;
			
			return input1;
}
	
	

int main_menu4()															//leave menu
{
	file.seekg(0);

	
		int input3=leave_menu();

		switch(input3)
		{

		case 1: int leave_menu1();
			input1=leave_menu1();
			break;

		case 2: int leave_menu2();
			input1=leave_menu2();
			break;

		case 3:	int leave_menu3();
			input1=leave_menu3();
			break;

		case 4: int leave_menu4();
			input1=leave_menu4();
			break;

		case 5: input1=mainmenu();
			break;

		case 6: exit(0);

			
		}

		return input1;
}



int main_menu5()														//report menu
{
	file.seekg(0);
		

		int input2=report_menu();

		switch(input2)
		{

		case 1: int report_menu1();
			input1=report_menu1();
			break;

		case 2: int report_menu2();
			input1=report_menu2();
			break;

		case 3:	int report_menu3();
			input1=report_menu3();
			break;

		case 4: int report_menu4();
			input1=report_menu4();
			break; 

		case 5: int report_menu5();
			input1=report_menu5();
			break;

		case 6: input1=mainmenu();
			break;

		case 7: exit(0);

			
		}

		return input1;
}


int report_menu1()																//employee wise report
{
	int flag1=0,search_no;
	char ans;
	ifstream file;
	file.open("tech_details.dat",ios::in|ios::binary);
		cout<<"\nEnter the employee number to be searched: ";
		cin>>search_no;		
		

		while(file.read((char*)&details,sizeof(details)))
		{

			if(details.empno == search_no)
			{
				details.display_details();
				flag1=1;
			
			}
		

		}
		
		if (flag1==0)
			cout<<"\nNot Found..!!\n";

		cout<<"\nDo you want to return to main menu ? (y/n) ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;
}

int report_menu2()																//category wise report
{
	int flag2=0;
	char ans,search_category[30];
	ifstream file;
	file.open("tech_details.dat",ios::in|ios::binary);

		cin.ignore();
		cout<<"\nEnter the category to be searched: ";
		cin.getline(search_category,30);		
		

		while(file.read((char*)&details,sizeof(details)))
		{
			
			if(!strcmp(details.category,search_category))
			{
				flag2=1;
				
			details.display_details();
			}
				
			
		}

		if (flag2==0)
			cout<<"\nNot Found..!!\n"<<endl;		
			

		cout<<"\nDo you want to return to main menu ? (y/n) ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;
}


int report_menu3()															//department wise report
{

	int flag3=0;
	char ans,search_department[30];
	
	ifstream file;
	file.open("tech_details.dat",ios::in|ios::binary);

		cout<<"\nEnter the department to be searched: ";
		cin>>search_department;
		
		

		while(file.read((char*)&details,sizeof(details)))
		{
			
			if(!strcmp(details.dept,search_department))
			{
				flag3=1;
				
				details.display_details();
			}
				
			

		}

		if (flag3==0)
			cout<<"\nNot Found..!!\n"<<endl;		
			
			

		cout<<"\nDo you want to return to main menu ? (y/n) ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;
}

int report_menu4()														//month wise report (all employees)
{
	int month;
	char ans;
	ifstream file;
	file.open("tech_details.dat",ios::in|ios::binary);
		cout<<"\nEnter the month (eg.1.January) : ";
		cin>>month;
		
		
		

		while(file.read((char*)&details,sizeof(details)))
		{
			cout<<"\n---------------------------------------------------------------";
	
			cout<<"\n\nName: "<<details.name;

			cout<<"\t\tEmployee Number: "<<details.empno<<endl;
			

			
	switch(month)														//annual leave
	{
	case 1:cout<<"\nAnnual Leave: "<<details.ajan<<" days";
		break;
	case 2: cout<<"\nAnnual Leave: "<<details.afeb<<" days";
		break;
	case 3:cout<<"\nAnnual Leave: "<<details.amar<<" days";
		break;
	case 4:cout<<"\nAnnual Leave: "<<details.aapl<<" days";
		break;
	case 5:cout<<"\nAnnual Leave: "<<details.amay<<" days";
		break;
	case 6:cout<<"\nAnnual Leave: "<<details.ajun<<" days";
		break;
	case 7:cout<<"\nAnnual Leave: "<<details.ajul<<" days";
		break;
	case 8:cout<<"\nAnnual Leave: "<<details.aaug<<" days";
		break;
	case 9:cout<<"\nAnnual Leave: "<<details.asep<<" days";
		break;
	case 10:cout<<"\nAnnual Leave: "<<details.aoct<<" days";
		break;
	case 11:cout<<"\nAnnual Leave: "<<details.anov<<" days";
		break;
	case 12:cout<<"\nAnnual Leave: "<<details.adec<<" days";
		break;
	}

		
				
				
	switch(month)														//medical leave
	{
	case 1:cout<<"\nMedical Leave: "<<details.mjan<<" days";
		break;
	case 2: cout<<"\nMedical Leave: "<<details.mfeb<<" days";
		break;
	case 3:cout<<"\nMedical Leave: "<<details.mmar<<" days";
		break;
	case 4:cout<<"\nMedical Leave: "<<details.mapl<<" days";
		break;
	case 5:cout<<"\nMedical Leave: "<<details.mmay<<" days";
		break;
	case 6:cout<<"\nMedical Leave: "<<details.mjun<<" days";
		break;
	case 7:cout<<"\nMedical Leave: "<<details.mjul<<" days";
		break;
	case 8:cout<<"\nMedical Leave: "<<details.maug<<" days";
		break;
	case 9:cout<<"\nMedical Leave: "<<details.msep<<" days";
		break;
	case 10:cout<<"\nMedical Leave: "<<details.moct<<" days";
		break;
	case 11:cout<<"\nMedical Leave: "<<details.mnov<<" days";
		break;
	case 12:cout<<"\nMedical Leave: "<<details.mdec<<" days";
		break;
	}
	
						
			
				
	switch(month)														//casual leave
	{
	case 1:cout<<"\nCasual Leave: "<<details.cjan<<" days";
		break;
	case 2: cout<<"\nCasual Leave: "<<details.cfeb<<" days";
		break;
	case 3:cout<<"\nCasual Leave: "<<details.cmar<<" days";
		break;
	case 4:cout<<"\nCasual Leave: "<<details.capl<<" days";
		break;
	case 5:cout<<"\nCasual Leave: "<<details.cmay<<" days";
		break;
	case 6:cout<<"\nCasual Leave: "<<details.cjun<<" days";
		break;
	case 7:cout<<"\nCasual Leave: "<<details.cjul<<" days";
		break;
	case 8:cout<<"\nCasual Leave: "<<details.caug<<" days";
		break;
	case 9:cout<<"\nCasual Leave: "<<details.csep<<" days";
		break;
	case 10:cout<<"\nCasual Leave: "<<details.coct<<" days";
		break;
	case 11:cout<<"\nCasual Leave: "<<details.cnov<<" days";
		break;
	case 12:cout<<"\nCasual Leave: "<<details.cdec<<" days";
		break;
	}

					
				
	switch(month)														//CDO
	{
	case 1:cout<<"\nCDO: "<<details.cojan<<" days";
		break;
	case 2: cout<<"\nCDO: "<<details.cofeb<<" days";
		break;
	case 3:cout<<"\nCDO: "<<details.comar<<" days";
		break;
	case 4:cout<<"\nCDO: "<<details.coapl<<" days";
		break;
	case 5:cout<<"\nCDO: "<<details.comay<<" days";
		break;
	case 6:cout<<"\nCDO: "<<details.cojun<<" days";
		break;
	case 7:cout<<"\nCDO: "<<details.cojul<<" days";
		break;
	case 8:cout<<"\nCDO: "<<details.coaug<<" days";
		break;
	case 9:cout<<"\nCDO: "<<details.cosep<<" days";
		break;
	case 10:cout<<"\nCDO: "<<details.cooct<<" days";
		break;
	case 11:cout<<"\nCDO: "<<details.conov<<" days";
		break;
	case 12:cout<<"\nCDO: "<<details.codec<<" days";
		break;
	}
	

	cout<<"\n---------------------------------------------------------------";
		
		}			
		
		
		cout<<"\nDo you want to return to main menu ? (y/n) ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;

}


int report_menu5()												//month wise report (single employee)
{
	int flag1=0,search_no,month;
	char ans;
	ifstream file;
	file.open("tech_details.dat",ios::in|ios::binary);

		cout<<"\nEnter the employee number : ";
		cin>>search_no;

		cout<<"\nEnter the month (eg.1.January) : ";
		cin>>month;		
		

		while(file.read((char*)&details,sizeof(details)))
		{
			

			if(details.empno == search_no)
			{
			cout<<"\n---------------------------------------------------------------";
	
			cout<<"\n\nName: "<<details.name;

			cout<<"\t\tEmployee Number: "<<details.empno<<endl;
			

			
	switch(month)														//annual leave
	{
	case 1:cout<<"\nAnnual Leave: "<<details.ajan<<" days";
		break;
	case 2: cout<<"\nAnnual Leave: "<<details.afeb<<" days";
		break;
	case 3:cout<<"\nAnnual Leave: "<<details.amar<<" days";
		break;
	case 4:cout<<"\nAnnual Leave: "<<details.aapl<<" days";
		break;
	case 5:cout<<"\nAnnual Leave: "<<details.amay<<" days";
		break;
	case 6:cout<<"\nAnnual Leave: "<<details.ajun<<" days";
		break;
	case 7:cout<<"\nAnnual Leave: "<<details.ajul<<" days";
		break;
	case 8:cout<<"\nAnnual Leave: "<<details.aaug<<" days";
		break;
	case 9:cout<<"\nAnnual Leave: "<<details.asep<<" days";
		break;
	case 10:cout<<"\nAnnual Leave: "<<details.aoct<<" days";
		break;
	case 11:cout<<"\nAnnual Leave: "<<details.anov<<" days";
		break;
	case 12:cout<<"\nAnnual Leave: "<<details.adec<<" days";
		break;
	}

		
				
				
	switch(month)														//medical leave
	{
	case 1:cout<<"\nMedical Leave: "<<details.mjan<<" days";
		break;
	case 2: cout<<"\nMedical Leave: "<<details.mfeb<<" days";
		break;
	case 3:cout<<"\nMedical Leave: "<<details.mmar<<" days";
		break;
	case 4:cout<<"\nMedical Leave: "<<details.mapl<<" days";
		break;
	case 5:cout<<"\nMedical Leave: "<<details.mmay<<" days";
		break;
	case 6:cout<<"\nMedical Leave: "<<details.mjun<<" days";
		break;
	case 7:cout<<"\nMedical Leave: "<<details.mjul<<" days";
		break;
	case 8:cout<<"\nMedical Leave: "<<details.maug<<" days";
		break;
	case 9:cout<<"\nMedical Leave: "<<details.msep<<" days";
		break;
	case 10:cout<<"\nMedical Leave: "<<details.moct<<" days";
		break;
	case 11:cout<<"\nMedical Leave: "<<details.mnov<<" days";
		break;
	case 12:cout<<"\nMedical Leave: "<<details.mdec<<" days";
		break;
	}
	
						
			
				
	switch(month)											//casual leave
	{
	case 1:cout<<"\nCasual Leave: "<<details.cjan<<" days";
		break;
	case 2: cout<<"\nCasual Leave: "<<details.cfeb<<" days";
		break;
	case 3:cout<<"\nCasual Leave: "<<details.cmar<<" days";
		break;
	case 4:cout<<"\nCasual Leave: "<<details.capl<<" days";
		break;
	case 5:cout<<"\nCasual Leave: "<<details.cmay<<" days";
		break;
	case 6:cout<<"\nCasual Leave: "<<details.cjun<<" days";
		break;
	case 7:cout<<"\nCasual Leave: "<<details.cjul<<" days";
		break;
	case 8:cout<<"\nCasual Leave: "<<details.caug<<" days";
		break;
	case 9:cout<<"\nCasual Leave: "<<details.csep<<" days";
		break;
	case 10:cout<<"\nCasual Leave: "<<details.coct<<" days";
		break;
	case 11:cout<<"\nCasual Leave: "<<details.cnov<<" days";
		break;
	case 12:cout<<"\nCasual Leave: "<<details.cdec<<" days";
		break;
	}

					
				
	switch(month)														//CDO
	{
	case 1:cout<<"\nCDO: "<<details.cojan<<" days";
		break;
	case 2: cout<<"\nCDO: "<<details.cofeb<<" days";
		break;
	case 3:cout<<"\nCDO: "<<details.comar<<" days";
		break;
	case 4:cout<<"\nCDO: "<<details.coapl<<" days";
		break;
	case 5:cout<<"\nCDO: "<<details.comay<<" days";
		break;
	case 6:cout<<"\nCDO: "<<details.cojun<<" days";
		break;
	case 7:cout<<"\nCDO: "<<details.cojul<<" days";
		break;
	case 8:cout<<"\nCDO: "<<details.coaug<<" days";
		break;
	case 9:cout<<"\nCDO: "<<details.cosep<<" days";
		break;
	case 10:cout<<"\nCDO: "<<details.cooct<<" days";
		break;
	case 11:cout<<"\nCDO: "<<details.conov<<" days";
		break;
	case 12:cout<<"\nCDO: "<<details.codec<<" days";
		break;
	}
	

	cout<<"\n---------------------------------------------------------------";
			flag1=1;
			
			}
		}
			
		
		if (flag1==0)
			cout<<"\\nNot Found..!!\n";

		
		cout<<"\n\nDo you want to return to main menu ? (y/n): ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
		
			input1=0;

		return input1;
}

		
	

int leave_menu1()
{
	int a_days;
	int flag1=0,search_no;
	char ans;
	center("------------------------");
	center("ANNUAL LEAVE APPLICATION");
	center("------------------------");

	fstream file;
	file.open("tech_details.dat",ios::in|ios::out|ios::binary);
		cout<<"\nEnter the Employee Number : ";
		cin>>search_no;		
		

		while(!file.eof())
		{
			file.read((char*)&details,sizeof(details));

			if(details.empno == search_no)
			{
			
			
			details.display_annual();
			
			a_days=date_day();

			if (a_days<=details.aleave)
			{
				details.aleave-=a_days;
				details.balance-=a_days;
				
				details.amm1=mm1;
				details.amm2=mm2;
			
				details.afhalf=fhalf;
				details.ashalf=shalf;
				details.a_days=days;

				

	switch(details.amm1)
	{
	case 1:if(details.amm1==details.amm2)
			   details.ajan+=details.a_days;
		else 
		{
			details.ajan+=details.afhalf;
			details.afeb+=details.ashalf;
		}
		break;

	case 2: if(details.amm1==details.amm2)
			   details.afeb+=details.a_days;
		else 
		{
			details.afeb+=details.afhalf;
			details.amar+=details.ashalf;
		}
		break;

	case 3:if(details.amm1==details.amm2)		  
			   details.amar+=details.a_days;
			   
			   
		else 
		{
			details.amar+=details.afhalf;
			details.aapl+=details.ashalf;
		}
		break;

	case 4:if(details.amm1==details.amm2)
			   details.aapl+=details.a_days;
		else 
		{
			details.aapl+=details.afhalf;
			details.amay+=details.ashalf;
		}
		break;
	case 5:if(details.amm1==details.amm2)
			   details.amay+=details.a_days;
		else 
		{
			details.amay+=details.afhalf;
			details.ajun+=details.ashalf;
		}
		break;

	case 6:if(details.amm1==details.amm2)
			   details.ajun+=details.a_days;
		else 
		{
			details.ajun+=details.afhalf;
			details.ajul+=details.ashalf;
		}
		break;

	case 7:if(details.amm1==details.amm2)
			   details.ajul+=details.a_days;
		else 
		{
			details.ajul+=details.afhalf;
			details.aaug+=details.ashalf;
		}
		break;

	case 8:if(details.amm1==details.amm2)
			   details.aaug+=details.a_days;
		else 
		{
			details.aaug+=details.afhalf;
			details.asep+=details.ashalf;
		}
		break;

	case 9:if(details.amm1==details.amm2)
			   details.asep+=details.a_days;
		else 
		{
			details.asep+=details.afhalf;
			details.aoct+=details.ashalf;
		}
		break;

	case 10:if(details.amm1==details.amm2)
			   details.aoct+=details.a_days;
		else 
		{
			details.aoct+=details.afhalf;
			details.anov+=details.ashalf;
		}
		break;

	case 11:if(details.amm1==details.amm2)
			   details.anov+=details.a_days;
		else 
		{
			details.anov+=details.afhalf;
			details.adec+=details.ashalf;
		}
		break;

	case 12:if(details.amm1==details.amm2)
			   details.adec+=details.a_days;
		else 
		
			details.adec+=details.afhalf;		
		break;
	}

				

			file.seekp(-1*sizeof(details),ios::cur);

			file.write((char*)&details,sizeof(details));			
				
			details.display_annual();
			flag1=1;
						
			break;

			
			}

		else
			
			cout<<"\n\nApplication Denied...!!!";
			flag1=1;
			}		
		}
	
		
		if (flag1==0)
			cout<<"\nNot Found..!!\n";

		

		cout<<"\n\nDo you want to return to main menu ? (y/n): ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
		
			input1=0;

		return input1;
}
		
int leave_menu2()
{
	int a_days;
	int flag1=0,search_no;
	char ans;
	center("------------------------");
	center("MEDICAL LEAVE APPLICATION");
	center("------------------------");

	fstream file;
	file.open("tech_details.dat",ios::in|ios::out|ios::binary);
		cout<<"\nEnter the Employee Number : ";
		cin>>search_no;
		
		
		

		while(!file.eof())
		{
			file.read((char*)&details,sizeof(details));

			if(details.empno == search_no)
			{
			
			details.display_medical();
			
			a_days=date_day();

			if (a_days<=details.mleave)
			{
				details.mleave-=a_days;
				details.balance-=a_days;

				
				details.mmm1=mm1;
				
				details.mmm2=mm2;
				
				details.mfhalf=fhalf;
				details.mshalf=shalf;
				details.m_days=days;

					

	switch(details.mmm1)
	{
	case 1:if(details.mmm1==details.mmm2)
			   details.mjan+=details.m_days;
		else 
		{
			details.mjan+=details.mfhalf;
			details.mfeb+=details.mshalf;
		}
		break;
	case 2: if(details.mmm1==details.mmm2)
			   details.mfeb+=details.m_days;
		else 
		{
			details.mfeb+=details.mfhalf;
			details.mmar+=details.mshalf;
		}
		break;
	case 3:if(details.mmm1==details.mmm2)		  
			   details.mmar+=details.m_days;
			   
			   
		else 
		{
			details.mmar+=details.mfhalf;
			details.mapl+=details.mshalf;
		}
		break;
	case 4:if(details.mmm1==details.mmm2)
			   details.mapl+=details.m_days;
		else 
		{
			details.mapl+=details.mfhalf;
			details.mmay+=details.mshalf;
		}
		break;
	case 5:if(details.mmm1==details.mmm2)
			   details.mmay+=details.m_days;
		else 
		{
			details.mmay+=details.mfhalf;
			details.mjun+=details.mshalf;
		}
		break;
	case 6:if(details.mmm1==details.mmm2)
			   details.mjun+=details.m_days;
		else 
		{
			details.mjun+=details.mfhalf;
			details.mjul+=details.mshalf;
		}
		break;
	case 7:if(details.mmm1==details.mmm2)
			   details.mjul+=details.m_days;
		else 
		{
			details.mjul+=details.mfhalf;
			details.maug+=details.mshalf;
		}
		break;
	case 8:if(details.mmm1==details.mmm2)
			   details.maug+=details.m_days;
		else 
		{
			details.maug+=details.mfhalf;
			details.msep+=details.mshalf;
		}
		break;
	case 9:if(details.mmm1==details.mmm2)
			   details.msep+=details.m_days;
		else 
		{
			details.msep+=details.mfhalf;
			details.moct+=details.mshalf;
		}
		break;
	case 10:if(details.mmm1==details.mmm2)
			   details.moct+=details.m_days;
		else 
		{
			details.moct+=details.mfhalf;
			details.mnov+=details.mshalf;
		}
		break;
	case 11:if(details.mmm1==details.mmm2)
			   details.mnov+=details.m_days;
		else 
		{
			details.mnov+=details.mfhalf;
			details.mdec+=details.mshalf;
		}
		break;
	case 12:if(details.mmm1==details.mmm2)
			   details.mdec+=details.m_days;
		else 
		
			details.mdec+=details.mfhalf;		
		break;
	}


			file.seekp(-1*sizeof(details),ios::cur);

			file.write((char*)&details,sizeof(details));
				
				
			details.display_medical();
			flag1=1;
			
			break;

			
			}
		else
		
			cout<<"\n\nApplication Denied...!!!";
			flag1=1;
			}

		
		}
	
		
		if (flag1==0)
			cout<<"\nNot Found..!!\n";		

		cout<<"\nDo you want to return to main menu ? (y/n): ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;
}
		
int leave_menu3()
{
	int a_days;
	int flag1=0,search_no;
	char ans;
	center("------------------------");
	center("CASUAL LEAVE APPLICATION");
	center("------------------------");

	fstream file;
	file.open("tech_details.dat",ios::in|ios::out|ios::binary);
		cout<<"\nEnter the Employee Number : ";
		cin>>search_no;
		
		
		

		while(!file.eof())
		{
			file.read((char*)&details,sizeof(details));

			if(details.empno == search_no)
			{
				
			details.display_casual();
			
			a_days=date_day();

			if (a_days<=details.cleave)
			{
				details.cleave-=a_days;
				details.balance-=a_days;

				
				details.cmm1=mm1;			
				details.cmm2=mm2;
			
				details.cfhalf=fhalf;
				details.cshalf=shalf;
				details.c_days=days;

	switch(details.cmm1)
	{
	case 1:if(details.cmm1==details.cmm2)
			   details.cjan+=details.c_days;
		else 
		{
			details.cjan+=details.cfhalf;
			details.cfeb+=details.cshalf;
		}
		break;
	case 2: if(details.cmm1==details.cmm2)
			   details.cfeb+=details.c_days;
		else 
		{
			details.cfeb+=details.cfhalf;
			details.cmar+=details.cshalf;
		}
		break;
	case 3:if(details.cmm1==details.cmm2)
		  
			   details.cmar+=details.c_days;
			   
			   
		else 
		{
			details.cmar+=details.cfhalf;
			details.capl+=details.cshalf;
		}
		break;
	case 4:if(details.cmm1==details.cmm2)
			   details.capl+=details.c_days;
		else 
		{
			details.capl+=details.cfhalf;
			details.cmay+=details.cshalf;
		}
		break;
	case 5:if(details.cmm1==details.cmm2)
			   details.cmay+=details.c_days;
		else 
		{
			details.cmay+=details.cfhalf;
			details.cjun+=details.cshalf;
		}
		break;
	case 6:if(details.cmm1==details.cmm2)
			   details.cjun+=details.c_days;
		else 
		{
			details.cjun+=details.cfhalf;
			details.cjul+=details.cshalf;
		}
		break;
	case 7:if(details.cmm1==details.cmm2)
			   details.cjul+=details.c_days;
		else 
		{
			details.cjul+=details.cfhalf;
			details.caug+=details.cshalf;
		}
		break;
	case 8:if(details.cmm1==details.cmm2)
			   details.caug+=details.c_days;
		else 
		{
			details.caug+=details.cfhalf;
			details.csep+=details.cshalf;
		}
		break;
	case 9:if(details.cmm1==details.cmm2)
			   details.csep+=details.c_days;
		else 
		{
			details.csep+=details.cfhalf;
			details.coct+=details.cshalf;
		}
		break;
	case 10:if(details.cmm1==details.cmm2)
			   details.coct+=details.c_days;
		else 
		{
			details.coct+=details.cfhalf;
			details.cnov+=details.cshalf;
		}
		break;
	case 11:if(details.cmm1==details.cmm2)
			   details.cnov+=details.c_days;
		else 
		{
			details.cnov+=details.cfhalf;
			details.cdec+=details.cshalf;
		}
		break;
	case 12:if(details.cmm1==details.cmm2)
			   details.cdec+=details.c_days;
		else 
		
			details.cdec+=details.cfhalf;
			
		
		break;
	}



			file.seekp(-1*sizeof(details),ios::cur);
			file.write((char*)&details,sizeof(details));
				
				
			details.display_casual();
			flag1=1;
			
			
			break;

			
			}
		else
		
			cout<<"\n\nApplication Denied...!!!";
			flag1=1;
			}

		
		}
	
		
		if (flag1==0)
			cout<<"\nNot Found..!!\n";

		

		cout<<"\nDo you want to return to main menu ? (y/n): ";
		cin>>ans;
		if(ans=='Y'||ans=='y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;
}

int leave_menu4()
{
	int a_days;
	int flag1=0,search_no;
	char ans;
	center("------------------------");
	center("CDO LEAVE APPLICATION");
	center("------------------------");

	fstream file;
	file.open("tech_details.dat",ios::in|ios::out|ios::binary);
		cout<<"\nEnter the Employee Number : ";
		cin>>search_no;
		
		
		

		while(!file.eof())
		{
			file.read((char*)&details,sizeof(details));

			if(details.empno == search_no)
			{
			
			details.display_cdo();
			
			a_days=date_day();

			if (a_days<=details.cdo)
			{
				details.cdo-=a_days;
				details.balance-=a_days;

				
				details.comm1=mm1;			
				details.comm2=mm2;
			
				details.cofhalf=fhalf;
				details.coshalf=shalf;
				details.co_days=days;


	switch(details.comm1)
	{
	case 1:if(details.comm1==details.comm2)
			   details.cojan+=details.co_days;
		else 
		{
			details.cojan+=details.cofhalf;
			details.cofeb+=details.coshalf;
		}
		break;
	case 2: if(details.comm1==details.comm2)
			   details.cofeb+=details.co_days;
		else 
		{
			details.cofeb+=details.cofhalf;
			details.comar+=details.coshalf;
		}
		break;
	case 3:if(details.comm1==details.comm2)		  
			   details.comar+=details.co_days;		   
			   
		else 
		{
			details.comar+=details.cofhalf;
			details.coapl+=details.coshalf;
		}
		break;
	case 4:if(details.comm1==details.comm2)
			   details.coapl+=details.co_days;
		else 
		{
			details.coapl+=details.cofhalf;
			details.comay+=details.coshalf;
		}
		break;
	case 5:if(details.comm1==details.comm2)
			   details.comay+=details.co_days;
		else 
		{
			details.comay+=details.cofhalf;
			details.cojun+=details.coshalf;
		}
		break;
	case 6:if(details.comm1==details.comm2)
			   details.cojun+=details.co_days;
		else 
		{
			details.cojun+=details.cofhalf;
			details.cojul+=details.coshalf;
		}
		break;
	case 7:if(details.comm1==details.comm2)
			   details.cojul+=details.co_days;
		else 
		{
			details.cojul+=details.cofhalf;
			details.coaug+=details.coshalf;
		}
		break;
	case 8:if(details.comm1==details.comm2)
			   details.coaug+=details.co_days;
		else 
		{
			details.coaug+=details.cofhalf;
			details.cosep+=details.coshalf;
		}
		break;
	case 9:if(details.comm1==details.comm2)
			   details.cosep+=details.co_days;
		else 
		{
			details.cosep+=details.cofhalf;
			details.cooct+=details.coshalf;
		}
		break;
	case 10:if(details.comm1==details.comm2)
			   details.cooct+=details.co_days;
		else 
		{
			details.cooct+=details.cofhalf;
			details.conov+=details.coshalf;
		}
		break;
	case 11:if(details.comm1==details.comm2)
			   details.conov+=details.co_days;
		else 
		{
			details.conov+=details.cofhalf;
			details.codec+=details.coshalf;
		}
		break;
	case 12:if(details.comm1==details.comm2)
			   details.codec+=details.co_days;
		else 
		
			details.codec+=details.cofhalf;
			
		
		break;
	}

			file.seekp(-1*sizeof(details),ios::cur);
			file.write((char*)&details,sizeof(details));			
			
			details.display_cdo();
			flag1=1;
		

			break;

			
			}
		else
		
			cout<<"\n\nApplication Denied...!!!";
			flag1=1;
			}

		
		}
	
		
		if (flag1==0)
			cout<<"\nNot Found..!!\n";

		

		cout<<"\nDo you want to return to main menu ? (y/n): ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;
}
	





int display_all()
{
	
	char ans;
	ifstream file;
	file.open("tech_details.dat",ios::in|ios::binary);
	file.seekg(0);
	

	while(file.read((char*)&details,sizeof(details)))
	{		
		details.display_details();
		
	}
	
	cout<<"\nDo you want to return to main menu ? (y/n) ";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			input1=mainmenu();
						
		}
		else
			input1=0;
		return input1;
}


void main()

{
	clrscr();
	int n;
	file.open("tech_details.dat",ios::in|ios::out);	
	
	heading();

	input1=mainmenu();
	
	do
	{

	switch(input1)
	{

	case 1: cout<<"\nEnter number of employee details to be added: ";
		cin>>n;
		input1=main_menu1(n);				
		break;

	case 2:input1=main_menu2();
		break;

	case 3: input1=main_menu3();
		break;

	case 4:input1=main_menu4();
		break;

	case 5:input1=main_menu5();
		break;

	case 6: input1=display_all();
		break;
	case 7:exit(0);
	}
	
	}while(input1);
	

	file.close();
	
}
