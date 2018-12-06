#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{
	clrscr();
	char ch;
	gotoxy(5,5);
	cout<<"==============================================";
	gotoxy(5,9);
	cout<<"==============================================";
	gotoxy(5,7);
	char a;
	cin>>a;
	int i=6,j=7;
	if(a=='o')
	{
		while(i!=30&&j!=30)
		{clrscr();
		gotoxy(5,5);
		cout<<"==============================================";
		gotoxy(5,9);
		cout<<"==============================================";
		gotoxy(i,j);
		cout<<"o";
		gotoxy(i,j);
		cout<<" ";
		if(kbhit())
		{
			ch=getch();
			if(ch==72){gotoxy(i,j--);cout<<"o";}//upward
			if(ch==75){gotoxy(i--,j);cout<<"o";}//left
			if(ch==77){gotoxy(i++,j);cout<<"o";}//right
			if(ch==89){gotoxy(i,j++);cout<<"o";}//downward
		}

		}
	}
	getch();
}


