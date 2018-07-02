#include<stdio.h>
#include<conio.h>
struct date
{
int day;
int month;
int year;
}start,end;
int isleap(int year)
{
	if(year%4==0)
	{
		if(year%100==0)
		{
			 if(year%400=0)
			 {
			     return 1;
			 }
			 else
			 return 0;
		}
		else
		return 1;
	}
	return 1;
}
int main()
{
	clrscr();
	int year[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	start.day=8;
	start.month=6;
	start.year=1999;
	end.day=22;
	end.month=1;
	end.year=2018;
	int remdays=0,i,remdaye=0,bwdays=0;
	for(i=6;i<=12;i++)
	{
		remdays=remdays+year[i];
	}
	remdays=remdays-start.day;
	for(i=1;i<end.month;i++)
	{
		remdaye=remdaye+year[i];
	}
	remdaye=remday+end.day;
	for(i=start.year+1;i<end.year;i++)
	{
		bwdays=bwdays+365+isleap[i];
	}
	int totday;
	totday=remdays+remdaye+bwdays;
	printf("\nThe No Of Days is: %d",totday);
	getch();
	return 0;
}