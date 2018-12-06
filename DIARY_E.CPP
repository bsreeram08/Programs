#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
	clrscr();
	char string[100],word[10];
	ofstream outfile("diary.txt",ios::app);
	if(!outfile)
	{
		cout<<"Cannot open the file!";
		exit(0);
	}
	cout<<"\nEnter a STRING (maximum of 100 charecters):\n";
	cin.getline(string,100);
	outfile<<string;
	fflush(stdin);
	outfile.close();
	getch();
}