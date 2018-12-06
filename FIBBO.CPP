#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int fibbo(int,int,int);
	int prev, next, n;
	cout<<"Enter previous, next and no of terms";
	cin>>prev>>next>>n;
	fibbo(prev, next, n);
	getch();
}
int fibbo(int p, int c, int t)
{
	int curr;
	cout<<p<<"\t"<<c;
	for(int i=0; i<=t; i++)
	{
		curr=p+c;
		cout<<curr<<"\t";
		p=c;
		c=curr;
	}
	return c;
}
