#include<iostream.h>
#include<conio.h>
#include<dos.h>
void level1()
{
	int x=70;
	gotoxy(70,5);
	for(int move=0;move<5;move++)
	{


	gotoxy(x,5);
	for(int i=0;i<7;i++)
	{
	       gotoxy(x,5+i);
	       cout<<"     ";
	}
	cout<<"\n\n";
	for(i=0;i<7;i++)
	{
		gotoxy(x,12+i);
		cout<<"    ";
	}
	delay(300);
	gotoxy(x-=4,5);
	for(
	i=0;i<7;i++)
	{      gotoxy(x,5+i);
	       cout<<"||||";
	}
	cout<<"\n\n";
	for(i=0;i<7;i++)
	{
		gotoxy(x,15+i);
		cout<<"||||";
	}
	}
	if (move==5)
	clrscr();
	}
void main()
{
	clrscr();
	level1();
	getch();
}