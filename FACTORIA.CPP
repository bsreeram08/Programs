#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int fact(long int);
	long int num, output;
	cout<<"ENTER NUMBER";
	cin>>num;
	output=fact(num);
	cout<<output;
	getch();
}
long int fact(long int x)
{
	long int total=1;
	for (long int i=1; i<=x; i++)
	{
		total =total*i;
	}
	return total;
}