#include<stdio.h>
#include<conio.h>
struct date
{
int day;
int month;
int year;
int date;
}start,end;
int isleap(int year)
{
	if(year%4==0)
	{
		if(year%100==0)
		{
			 if(year%400==0)
			 {
			     return 1;
			 }
			 else
			 return 0;
		}
		else
		return 1;
	}
	return 0;
}
int main()
{
	long int year[]={0,31,28,31,30,31,30,31,31,30,31,30,31},totday,remdays=0,remdaye=0,bwdays=0,i;
	clrscr();
	start.date=1;
	start.month=1;
	start.year=1900;
	start.day=1;
	printf("Enter the date to Calculate DAY (DATE DAY YEAR):");
	scanf("%d%d%d",&end.date,&end.month,&end.year);
	for(i=start.month;i<=12;i++)
	{
		remdays=remdays+year[i];
	}
	remdays=remdays-start.date+1;
	if(start.month<2)
	{
	remdays=remdays+isleap(start.year);
	}
	for(i=1;i<end.month;i++)
	{
		remdaye=remdaye+year[i];
	}
	remdaye=remdaye+end.date;
	if(end.date>2)
	{
		remdaye=remdaye+isleap(end.year);
	}
	for(i=start.year+1;i<end.year;i++)
	{

		bwdays=bwdays+365+isleap(i);
	}
	totday=remdays+remdaye+bwdays;
	printf("\nThe No Of Days is: %ld",totday);
	printf("\nThe day is:");
	end.day=totday%7;
	switch (end.day)
	{
		case 0:printf("SUNDAY");
		break;
		case 1:printf("MONDAY");
		break;
		case 2:printf("TUESDAY");
		break;
		case 3:printf("WEDNESDAY");
		break;
		case 4:printf("THURSDAY");
		break;
		case 5:printf("FRIDAY");
		break;
		case 6:printf("SATURDAY");
		break;
	}

	getch();
	return 0;
}