#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	struct book
	{
		int item_code;
		char item_name[20];
		int price;
		char person_name[20];
	}S[2];
	for(int i=0; i<2; i++)
	{
		cout<<"Enter the code of item";
		cin>>S[i].item_code;
		cout<<"Enter the name OF item";
		cin>>S[i].item_name;
		cout<<"Enter the price of item";
		cin>>S[i].price;
		cout<<"Enter the salesman name";
		cin>>S[i].person_name;
	}
	getch();
}