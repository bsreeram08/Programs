#include <iostream.h>
#include<conio.h>
#include<string.h>
void toggle(char[]);
void main()
{
	clrscr();
	char word [50];
	cout<<"Enter a word ";
	cin>>word;
	cout<<"Your string is '"<<word<<"'";
	toggle(word);
	cout<<"\n The change in string is : "<<word;
	getch();
}
void toggle(char x[])
{
	for(int i=0; i<=strlen(x); i++)
	{
		cout<<"\n"<<x[i];
		if (x[i]>=65 && x[i]<=90)
		{
			x[i]=x[i]+32;
		}
		else if (x[i]>=97 && x[i]<=122)
		{
			x[i]=x[i]-32;
		}
	}
}