#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int A[10], i , k;
	cout<<" enter 10 values";
	for(i=0; i<10; ++i)
	{
		cin>>A[i];
	}
	cout<<"enter no to be founded ";
	cin>>k;
	for(i=0; i<10; i++)
	{
	if(k==A[i])
	{
		cout<<"The number found and it is "<<k;
	}
	else
	{
	cout<<"The entered value not found";
	getch();
	}
	}
}
