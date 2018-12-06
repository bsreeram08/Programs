#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void hangman(char*,char*,int);
void main()
{
	clrscr();
	int count;
	char word[50],life[15],flag;
	cout<<"\n\n\t\t\tWelcome";
	X:
	cout<<"\n Enter the genre of the question \n(note the no of letters in the genre wil be the life of the game)";
	cin>>life;
	count=strlen(life);
	cout<<"\n\t\t The no of letters in the entered genre is:"<<count<<".";
	cout<<"\n\t\t the life of hte game is:"<<count<<".";
	cout<<"\n\tEnter the word for the player to find:";
	gets(word);
	cout<<"\n\n\t\t NOW PRESS Y TO ACCEPT THE QUESTION";
	cin>>flag;
	if(flag=='y'||flag=='Y')
	{
		clrscr();
		hangman(word,life,count);
	}
	else
	{
		goto X;
	}
	getch();
}
void hangman(char w[], char l[],int c)
{
	char input;
	int flag=0;
	cout<<"The number of lifes is:"<<c;
	cout<<"\n\t\t\t The genre of the question is "<<l<<".";
	gotoxy(10,10);
	for(int i=0;i<strlen(w);i++)
	{
		if(w[i]==' ')
		{
			cout<<" ";
		}
		else
		{
			cout<<"_ ";
		}
	}
	gotoxy(10,10);
	while(c!=0)
	{
		cin.get(input);
		for(int j=0;j<strlen(w);j++)
		{
			if(w[j]==input)
			{
				gotoxy(j+10+1,j);
				cout<<input;
			}
		}
		for(int k=0;k<strlen(w);k++)
		{
			if(w[k]==input)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			l--;
		}
		if(l==0) exit(0);
		c--;
	}
	if(l==0)
	{
		cout<<"\n\t You failed!!!";
	}
	else
	{
		cout<<"\n\t\t\t\tcongo YOU WON";
	}
}


