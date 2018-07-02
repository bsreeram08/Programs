#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	struct book
	{
		int code;
		char name1[20];
		char name2[20];
		char name3[20];
		int price;
	}S[2];
	for(int i=0; i<2; i++)
	{
		cout<<"Enter the code of book";
		cin>>S[i].code;
		cout<<"Enter the name OF BOOK";
		cin>>S[i].name1;
		cout<<"Enter the AUTHOR'S NAME";
		cin>>S[i].name2;
		cout<<"Enter the publications name";
		cin>>S[i].name3;
		cout<<"Enter the price of book";
		cin>>S[i].price;
	}
	getch();
}