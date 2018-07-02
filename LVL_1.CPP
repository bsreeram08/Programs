#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{
	clrscr();
	gotoxy(36,3);
	cout<<"LEVEL 1";
	gotoxy(17,6);
	cout<<"=========================================||";
	for(int i=1;i<=14;i++)
	{
		gotoxy(58,5+i);
		cout<<"||";
	}
	gotoxy(17,8);
	cout<<"====================================||";
	for(i=1;i<=10;i++)
	{
			gotoxy(53,7+i);
		cout<<"||";
	}
	gotoxy(17,17);
	cout<<"====================================||";
	gotoxy(17,19);
	cout<<"=========================================||";
	gotoxy(17,7);
	cout<<char(232);
	for(i=1;i<20;i++)
	{
		gotoxy(18+2*i,7);
		cout<<char(250);
	}
	for(i=1;i<12;i++)
	{
		gotoxy(56,7+i);
		cout<<char(250);
	}
	for(i=1;i<20;i++)
	{
		gotoxy(18+2*i,18);
		cout<<char(250);
	}
	gotoxy(15,22);
	cout<<"Controls: W - UP, S - DOWN , A - LEFT , D - RIGHT";
	getch();
}
