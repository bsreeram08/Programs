#include <iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
	clrscr();
	ofstream outf("text.txt",ios::app);
	char line[80];
	cin.getline(line,70);
	if(!outf)
	{
	       cout<<"cannot open";
		exit(0);
	}
	outf<<line;
	outf.close();
	getch();
}