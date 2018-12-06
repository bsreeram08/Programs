#include<iostream.h>
#include<conio.h>
long int power(int,int);
long int fact(int);
void main()
{
	clrscr();
	long int terms, x, counter,i;
	float sum1=0.0, sum2=0.0;
	long int t1, t2, t3, t4;
	cout<<"Enter no of terms and x ";
	cin>>terms>>x;
	for(i=1; i<=terms; i++)
	{
		if(i%2==0)
		{
			t1=power(x,i);
			t2=fact(i);
			sum1=sum1+(float)t1/t2;
		}
		else
		{
			t3=power(x,i);
			t4=fact(i);
			sum1=sum2+(float)t3/t4;
		}
	}
	cout<<sum1-sum2<<endl;
	cout<<terms<<" "<<x<<" "<<i<<" "<<counter<<" "<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<endl;
	cout<<sum1<<" "<<sum2<<" ";
	getch();
}
long int power (int a, int b)
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
	for(int i=0; i<=c; i++)
	{
		f=f*i;
	}
	return f;
}
