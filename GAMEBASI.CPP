#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{
	clrscr();
	gotoxy(5,5);
	cout<<"==============================================";
	gotoxy(5,9);
	cout<<"==============================================";
	gotoxy(5,7);
	char a;
	cin>>a;
	int i=6;
	if(a=='o')
	{
		while(i!=30)
		{clrscr();
		gotoxy(5,5);
		cout<<"==============================================";
		gotoxy(5,9);
		cout<<"==============================================";
		gotoxy(i,7);
		cout<<"o";
		gotoxy(i,7);
		delay(200);
		cout<<" ";
		gotoxy(i++,7);
		cout<<"o";
		}
	}
	getch();
}


