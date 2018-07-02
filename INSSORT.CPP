#include<limits.h>
#include<iostream.h>
#include<conio.h>
void sorting(int[],int);
void main()
{
	clrscr();
	int ar[50],n;
	cout<<"Enter the no of  elements in the array [max:49] :";
	cin>>n;
	cout<<"\nEnter the elements of the array:-";
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter the element ARRAY ["<<i<<"]";
		cin>>ar[i];
	}
	sorting(ar,n);
	cout<<"The sorted array is:-\n";
	for(i=1;i<=n;i++)
	{
		cout<<ar[i]<<"        ";
	}
	getch();
}
void sorting(int a[],int x)
{

	int temp,j;
	a[0]=INT_MIN;
	for(int i=1;i<=x;i++)
	{
		temp=a[i];
		j=i-1;

		while(temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		cout<<"The array after sorting "<<i<<" times is:";
		for(int k=1;k<=x;k++)
		{
			cout<<a[k]<<"  ";
		}
		cout<<"\n";
	}
}
