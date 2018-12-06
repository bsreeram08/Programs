#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int count1=0,count2=0;
	ofstream outfile("diary.txt");
	if(!outfile)
	{
		cout<<"Cannot open the file!";
		exit(0);
	}
	outfile.close();
	ifstream infile("dairy.txt",ios::in);
	infile.seekg(0);
	char word3[10];
	count1=0;
	count2=0;
	while(!infile.eof())
	{
		infile>>word3;
		if(strcmp("his",word3)==0)
		count1++;
	}
	while(!infile.eof())
	{
		infile>>word3;
		if(strcmp("her",word3)==0)
		count2++;
	}
	cout<<"\nThe count for his: "<<count1<<"\n The count for her: "<<count2;
	infile.close();
	getch();
}