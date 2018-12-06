#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
class book
{
	private:
	char book_name[30];
	float b_price;
	char author_name[30];

	public:
	void getdata()
	{
		cout<<"Enter book name";
		cin>>book_name;
		cout<<"Enter Book price";
		cin>>b_price;
		cout<<"Enter author name";
		cin>>author_name;
	}
	void Inout()
	{
		ofstream in("book.dat",ios::binary|ios::app);
		if(!in)
		{
			cout<<"cannot open";
			exit(0);
		}
		in<<book_name<<endl;
		in<<b_price<<endl;
		in<<author_name<<endl;
		in.close();

		ifstream out("emo.dat");
		out.seekg(0);
		out>>book_name;
		out>>b_price;
		out>>author_name;
		clrscr();
		cout<<"Bookname , price and author name are as follows:-\n";
		cout<<book_name<<"\n"<<b_price<<"\n"<<author_name;
		out.close();
	}
};
void main()
{
	clrscr();
	book obj;
	obj.getdata();
	obj.Inout();
	getch();
}