#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char str[30];
	int i,count=0;
	cout<<"Enter any string :-\n";
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	cout<<"The no of spaces in entered string is: "<<count<<endl;
	cout<<str;
	getch();
}
