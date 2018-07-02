#include <iostream.h>
#include<conio.h>
class person
{
	protected:
	char name(30);
	int code;
	public:
	void getdata1()
	{
		cout<<"Enter the code and Name of the person";
		cin>>code>>name;
	}
};
class Account:public Person
{
	protected:
	int pay;
	public:
	void getdata2()
	{
		cin>>pay;
	}
};
class admin:public person
{
	protected:
	int experience;
	public:
	void getdata3()
	{
		cin>>experience;
	}
};
class master:public admin,public account
{
	public:
	void show()
	{
		cout<<"Name:"<<name<<"\nCode:"<<code<<"\nPay:"<<pay<<"\nExperience:"<<experience;
	}
}o;
void main()
{
	o.show;
}