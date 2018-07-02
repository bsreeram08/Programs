#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<process.h>
int lsearch(int[],int,int);
void main()
{
	clrscr();
	cout<<"Enter the no of elements(max=50)";
	int n,ar[50],item;
	cin>>n;
	cout<<"\n Enter the elements of array:-\n";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		if(n==0)
		{
			for(int c=0;c<40;c++)
			{
			textcolor(1+c);
			cprintf("Underflow!!!!!!");
			delay(300);
			clrscr();
			}
			textcolor(7);
			getch();
			exit(1);
		}
		else
		{
			int index;
			cout<<"Enter the element to be deleted";
			cin>>item;
			index=lsearch(ar,n,item);
			if(index==-1)
			{
			cout<<"element not found ! ";
			exit(1);
			}
			for(int i=index;i<=n-1;i++)
			{
				ar[i]=ar[i+1];
			}
			n=n-1;
		}
		cout<<"\n Do you Want to continue??(Y/N):";
		cin>>ch;
	}
	cout<<"\n The array is:- \n";
	for(int j=0;j<n;j++)
	{
		cout<<ar[j];
		cout<<endl;
	}
	getch();
}
int lsearch(int z[],int a,int b)
{
	for(int j=0;j<a;j++)
	{
		if(z[j]==b)
		return j;
	}
	return -1;
}