#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char str[50];
	int i,count=0;
	cout<<"Enter any string(max 30)\n";
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='\0')
		{
			count++;
		}
		else
		{
			count=0;
		}
	}
	cout<<"The length of entered string is :"<<count;
	getch();
}