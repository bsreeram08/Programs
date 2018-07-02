#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int i,j,k,row,val=1;
	cout<<"Enter the number of rows to displaypascal's triangle:";
	cin>>row;
	cout<<"The pascal's triangle is as follow:-\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<row-i;j++)
		{
			cout<<" ";
		}
		for(k=0;k<=i;k++)
		{
			if(k==0||i==0)
			{
				val=1;
			}
			else
			{
				val=val*(i-k+1)/k;
			}
			cout<<val<<" ";
		}
		cout<<endl;
	}
	getch();
}
