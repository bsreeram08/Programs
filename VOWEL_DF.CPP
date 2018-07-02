#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
	clrscr();
	int count1,count2,count3,count4,count5;
	char string[100],vovel1,vovel2,vovel3,vovel4,vovel5,vovelc1,vovelc2,vovelc3,vovelc4,vovelc5;
	ofstream outfile("count.txt");
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
	vovel1="a";
	vovel2="e";
	vovel3="i";
	vovel4="o";
	vovel5="u";
	vovelc1="A";
	vovelc2="E";
	vovelc3="I";
	vovelc4="O";
	vovelc5="U";
	ifstream infile("count.txt",ios::in);
	infile.seekg(0);
	char word2[10];
	count1=0;
	count2=0;
	count3=0;
	count4=0;
	count5=0;
	while(!infile.eof())
	{
		infile>>word2;
		if(strcmp(vovel5,word2)==0)
		count5++;
		if(strcmp(vovelc5,word2)==0)
		count5++;
	}
	while(!infile.eof())
	{
		infile>>word2;
		if(strcmp(vovel2,word2)==0)
		count1++;
		if(strcmp(vovelc2,word2)==0)
		count1++;
	}while(!infile.eof())
	{
		infile>>word2;
		if(strcmp(vovel3,word2)==0)
		count2++;
		if(strcmp(vovelc3,word2)==0)
		count2++;
	}while(!infile.eof())
	{
		infile>>word2;
		if(strcmp(vovel4,word2)==0)
		count3++;
		if(strcmp(vovelc4,word2)==0)
		count3++;
	}while(!infile.eof())
	{
		infile>>word2;
		if(strcmp(vovel5,word2)==0)
		count4++;
		if(strcmp(vovelc5,word2)==0)
		count4++;
	}while(!infile.eof())
	{
		infile>>word2;
		if(strcmp(vovel1,word2)==0)
		count1++;
		if(strcmp(vovelc1,word2)==0)
		count1++;
	}
	infile.close();
	getch();
}