#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	char ch = 'A';
	int num=ch;
	cout<<"The ASCII code for "<<ch<<" is "<<num<<"\n";
	cout<<"Adding 1 to the charecter code. \n";
	ch=ch+1;
	num=ch;
	cout<<"The ASCII code for "<<ch<<" is "<<num<<"\n";
	getch();
	return 0;
}