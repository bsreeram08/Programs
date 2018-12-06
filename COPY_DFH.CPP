#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
void main()
{
	clrscr();
	ofstream outf("copy.txt",ios::app);
	ifstream inf("test.txt",ios::in);
	char line[80];
	inf.getline(line,70,',');
	outf<<line;
	inf.close();
	outf.close();
	getch();
}