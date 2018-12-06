#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ar[50],n,small,pos;
	cout<<"Enter total no of elements in the array[max 50]";
	cin>>n;
	cout<<"\n Enter the elements of array:- \n";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"Sorting the array in ascending order";
	for(i=0;i<n-1;++i)
	{
		small=ar[i];
		pos=i;
		for(int j=i+1;j<n;++j)
		{
			if(ar[j]<small)
			{
				small=ar[j];
				pos=j;
			}
		}
		ar[pos]=ar[i];
		ar[i]=small;
	}
	cout<<"\nThe sorted array is :-\n";
	for(int l=0;l<n;l++)
	{
		cout<<ar[l]<<" ";
	}
	getch();
}


