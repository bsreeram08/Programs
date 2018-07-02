#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[30][30],b[30][30],c[30][30],i,j,n,m;
	cout<<"Enter number of rows and columns for matrix 'A' \n";
	cin>>m>>n;
	cout<<"Enter the elements of matrix 'A' for positions as follows \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"For position ["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
			cout<<"\n";
		}

	}
	cout<<"Enter number of rows and columns for matrix 'B' \n";
	int q,r;
	cin>>q>>r;
	for(i=0;i<q;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<"For position ["<<i<<"]["<<j<<"]:";
			cin>>b[i][j];
			cout<<"\n";
		}

	}
	cout<<"The elements of matrix 'A' is: \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"The elements of matrix 'B' is: \n";
	for(i=0;i<q;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	if(q==n)
	{
		cout<<"The multiplipication of the matrix 'A' and 'B' is as follows";
		int k;
		for(i=0;i<m;i++)
		{
			cout<<"\n";
			for(j-0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			cout<<c[i][j];
			}
		}
	}
	else
	{
		cout<<"The matrix cannot be multiplied";
	}
	getch();
}