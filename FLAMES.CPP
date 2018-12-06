#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,j,count=0,l1,l2,sum,lv=1,lvc=6,tot;
	char name1[30],name2[30];
	cout<<"Enter the name of Person 1:";
	gets(name1);
	cout<<"\nEnter the name of Person 2:";
	gets(name2);
	l1=strlen(name1);
	l2=strlen(name2);
	sum=l1+l2;
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(name1[i]==name2[j])
			{
				count++;
				name2[j]='\0';
				break;
			}
		}
	}
	count=count*2;
	sum=sum-count;
	cout<<"The flame count is: "<<sum<<endl;
	char flames[7];
	flames[1]='F';
	flames[2]='L';
	flames[3]='A';
	flames[4]='M';
	flames[5]='E';
	flames[6]='S';
	flames[0]='\0';
	tot=sum*5;
	for(i=1;i<=tot;i++)
	{
		if(flames[lv]=='\0')
		{
			lv++;
		}
		if(i%sum==0)
		{
			flames[lv]='\0';
			lv++;
		}
		if(lv>=lvc)
		{
			lv=1;
		}
		else
		{
			lv++;
		}
	}
	cout<<"\nThe output of the 'FLAMES' is :"<<flames[0];
	cout<<"\nThe output of the 'FLAMES' is :"<<flames[1];
	cout<<"\nThe output of the 'FLAMES' is :"<<flames[2];
	cout<<"\nThe output of the 'FLAMES' is :"<<flames[3];
	cout<<"\nThe output of the 'FLAMES' is :"<<flames[4];
	cout<<"\nThe output of the 'FLAMES' is :"<<flames[5];
	cout<<"\nThe output of the 'FLAMES' is :"<<flames[6];
	getch();
}