#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int A[50][50], j, i, r[50], c[50], row, col;
	cout<<"enter no of rows and columns :- \n";
	cin>>row>>col;
	cout<<"enter the elements in the matrix \n";
	for(i=0; i<row; ++i)
	{
		for(j=0; j<col; ++j)
		{
			cin>>A[i][j];
		}
		cout<<"\n";
	}
	cout<<"The entered elements in matrix are \n";
	for(i=0; i<row; ++i)
	{
		for(j=0; j<col; ++j)
		{
			cout<<A[i][j];
		}
		cout<<"\n";
	}
	for(i=0; i<row; ++i)
	{
		r[i]+=A[i][j];
	}
	for(j=0; j<col; ++j)
	{
		c[j]+=A[i][j];
	}
	for(i=0; i<row; ++i)
	{
		cout<<"sum of rows is "<<i+1<<"is :"<<r[i]<<endl;
	}
	for(j=0; j<col; ++j)
	{
		cout<<"sum of columns is "<<i+1<<"is :"<<c[j]<<endl;
	}
	getch();
}
