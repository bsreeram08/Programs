#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{
	clrscr();
	char ch;
	int count=0;
	gotoxy(5,5);
	cout<<"==============================================";
	gotoxy(5,6);
	cout<<"...............................";
	gotoxy(5,7);
	cout<<"...............................";
	gotoxy(5,8);
	cout<<"...............................";
	gotoxy(5,9);
	cout<<"==============================================";
	gotoxy(5,7);
	char a;
	cin>>a;
	int i=6,j=7;
	if(a=='o')
	{
		while(i!=30)
		{    gotoxy(5,5);
	cout<<"==============================================";
	gotoxy(5,9);
	cout<<"==============================================";
	gotoxy(9,50);
	cout<<"POINTS:"<<count;
		gotoxy(i,j);
		cout<<"o";
		ch=getch();
		if(ch=='w')
		{
		gotoxy(i,j);
		delay(200);
		cout<<" ";
		gotoxy(i,--j);
		cout<<"o";
		count++;
		}
		if(ch=='s')
		{
		gotoxy(i,j);
		delay(200);
		cout<<" ";
		count++;
		gotoxy(i,++j);
		cout<<"o";
		}if(ch=='a')
		{
		gotoxy(i,j);
		delay(200);
		cout<<" ";
		gotoxy(--i,j);
		cout<<"o";
		count++;
		}if(ch=='d')
		{
		gotoxy(i,j);
		delay(200);
		cout<<" ";
		gotoxy(++i,j);
		cout<<"o";
		count++;
		}
		}
	}
	getch();
}