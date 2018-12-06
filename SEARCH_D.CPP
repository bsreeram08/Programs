#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
	clrscr();
	int count=0,i;
	char string[100],word[10];
	ofstream outfile("sample.txt",ios::app);
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
	cout<<"\n\nEnter a word to search in the file 'sample.txt':";
	cin>>word;
	ifstream infile("sample.txt",ios::in);
	infile.seekg(0);
	char word2[10];
	count=0;
	while(!infile.eof())
	{
		infile>>word2;
		if(strcmp(word,word2)==0)
		count++;
	}
	cout<<"\nThe frequency of the word "<<word<<" in 'sample.txt' is:"<<count;
	infile.close();
	getch();
}