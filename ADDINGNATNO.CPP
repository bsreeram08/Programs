#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, sum, n;
	cout<<"How many natural numbers ? \n";
	cin>>n;
	for(i=1, sum=0; i<=n; i++)
	{
		cout<<"\n"<<i;
		sum=sum+i;
	}
	cout<<"\n"<<"The sum of first "<<n
	    <<" natural numbers is : '"<<sum
	    <<"'\n";
	getch();
}
