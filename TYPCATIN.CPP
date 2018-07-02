#include <iostream.h>
#include<conio.h>
long int power(int,int);
long int fact(int);
void main()
{
	clrscr();
	int terms ,x,counter=1;
	float sum= 0.0;
	long int t1, t2;
	cout<<"Enter no of terms and value of x ";
	cin>>terms>>x;
	for(int i=1; i<=terms; i++)
	{
		t1=power (x,counter);
		t2=fact (counter);
		counter+=2;
		sum=sum+ (float) t1/t2;
	}
	cout<<"answer is "<<sum;
	getch();
}
long int  power (int a, int b)
{
	int p=1;
	for (int i=1; i<=b; i++)
	{
		p=p*a;
	}
	return p;
}
long int fact(int c)
{
	int f=1;
	for (int i=1;i<=c;i++)
	{
		f=f*i;
	}
	return f;
}