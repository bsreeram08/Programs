#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char name[10];
	void upper (char []);
	cout<<"enter a name in lower case :- \n";
	cin>>name;
	upper (name);
	cout<<name;
	getch();
}
void upper(char x[])
{
	for(int i=0; x[i]!='\0'; i++)
	{
		x[i]=x[i]-32;
	}
}