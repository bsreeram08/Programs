#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
class shop
{
	private:
	int cust_code;
	char name[30];
	long int phone;
	char address[30];

	public:
	void getdata()
	{
		cout<<"Enter customer number";
		cin>>cust_code;
		cout<<"Enter name";
		cin>>name;
		cout<<"Enter phone number";
		cin>>phone;
		cout<<"Enter address code";
		cin>>address;
	}
	void Inout()
	{
		ofstream in("cust.dat",ios::binary|ios::app);
		if(!in)
		{
			cout<<"cannot open";
			exit(0);
		}
		in<<cust_code<<endl;
		in<<name<<endl;
		in<<phone<<endl;
		in<<address<<endl;
		in.close();

		ifstream out("emo.dat");
		out.seekg(0);
		out>>cust_code;
		out>>name;
		out>>phone;
		out>>address;
		clrscr();
		cout<<"customer details are as follows";
		cout<<cust_code<<"\n"<<name<<"\n"<<phone<<"\n"<<address;
		out.close();
	}
};
void main()
{
	clrscr();
	shop obj;
	obj.getdata();
	obj.Inout();
	getch();
}
