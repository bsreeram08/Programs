#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
clrscr();
int len,i,j;
char str[10],pas[10];
cout<<"Enter password(10 character long): \n";
for(int a=0;a<6;a++)
{
	str[a]=getch();
	cout<<"*";
}
clrscr();
cout<<"\n\nThe password is:";
for(i=0;i<6;i++)
{
cout<<str[i];
}
puts(pas);
getch();
}
