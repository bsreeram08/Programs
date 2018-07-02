#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int fibbo(int);
	cout<<"Enter the no of terms in fibonacci series: ";
	int n;
	cin>>n;
	cout<<"0"<<"\t";
	for(int i=0;i<n;i++)
	{
		cout<<fibbo(i)<<"\t";
	}
	getch();
}
int fibbo(int x)
{
	if(x<=1)
		return 1;
	else
		return(fibbo(x-1)+fibbo(x-2));
}