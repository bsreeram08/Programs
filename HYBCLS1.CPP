#include<iostream.h>
#include<conio.h>
class education
{
	protected:
	char degree(30);
	int grade;
	public:
	void getdata1()
	{
		cout<<"Enter the grade and degree";
		cin>>degree>>grade;
	}
};
class languages
{
	protected:
	char known(30);
	public:
	void getdata2()
	{
		cout<<"Enter the known languages(use ',' to differentiate between two language)";
		cin>>known;
	}
};
class salesrep:public education,public language
{
	protected:
	int age1;
	public:
	void getdata3()
	{
		cout<<"Enter the age";
		cin>>age1;
	}
};
class medrep:public education
{
       protected:
       int age2,experience;
       public:
       void getdata4()
       {
		cout<<"Enter the age and the experience";
		cin>>age2>>experience;
       }
};
class workername:public education
{
	protected:
	char name(20);
	public:
	cout<<"Enter the name of the person";
	cin>>name;
	void show();
	{
		cout<<name<<endl<<degree<<endl<<grade;
	}
};
void main
{
	clrscr();
	workername p
