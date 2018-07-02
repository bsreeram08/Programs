#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
	int i,A[5],num,flag=0;


	cout<<"enter the number";
	for(i=0;i<5;i++)
	{
		cin>>A[i];
	}
	cout<<"enter num";
	cin>>num;
	for(i=0;i<5;i++)
	{
	if(A[i]==num)
	{ flag=1;
	cout<<"found";
	break;
	}
	}
	if(flag==0)
	{
	cout<<"not found";
	}
	getch();

}

