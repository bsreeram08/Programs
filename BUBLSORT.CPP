#include<iostream.h>
#include<conio.h>
void bubsort(int[],int);
void main()
{
	clrscr();
	int a[50],n;
	cout<<"Enter the no of elements :";
	cin>>n;
	cout<<"Enter the elements of the array :\n";
	for(int k=0;k<n;k++)
	{
		cin>>a[k];
	}
	bubsort(a,n);
	cout<<"\nThe array after bubble sort is: ";
	for(int j=0;j<n;j++)
	cout<<a[j]<<" ";
	getch();
}
void bubsort(int a[],int d)
{
	 int temp;
	 for(int i=0;i<d;i++)
	{
		for(int j=0;j<d-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

		for(int k=0;k<d;k++)
			cout<<a[k]<<" ";
		cout<<endl;
		}

	}
}





