#include<iostream.h>
#include<process.h>
#include<conio.h>
int findpos(int [],int,int);
void main()
{
	clrscr();
	int ar[50],item,n,index;
	cout<<"How many elements do U want to create array with?(max. 50).....";
	cin>>n;
	cout<<"\n Enter Array elements(must be sorted in Asc. order)\n";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
		char ch='y';
		while(ch=='y'||ch=='Y')
		{
			cout<<"\n Enter the Element to be inserted";
			cin>>item;
			if(n>=50)
			{
				cout<<"Overload";
				exit(1);
			}
			index=findpos(ar,n,item);

			for(i=n;i>index;i--)
			{
				ar[i]=ar[i-1];
			}
			ar[index]=item;
			n+=1;
			cout<<"\n Want to insert more elements? (y/n)...";
			cin>>ch;

		}
		cout<<"the array now is shown below";
		for(i=0;i<n;i++)
		{
			cout<<ar[i]<<"  "<<endl;
		}
		getch();
}
int findpos(int AR[],int size,int a)
{
	int pos;
	if(a<AR[0])
	pos=0;
	else
	{
		for(int i=0;i<size-1;i++)
		{
			if(AR[i]<=a&&a<AR[i+1])
			{	pos=i+1;
				break;
			}
		}
		if(i==size-1)
		pos=size;
	}
	return pos;
}