#include<stdio.h>
#include<conio.h>
#include<bios.h>
#include<dos.h>
#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25
#define DIM 7
#define WIDTH 5
#define HEIGHT 1
#define VL 179
#define HL 196
#define LT 218
#define RT 191
#define LB 192
#define RB 217
#define TT 194
#define BT 193
#define LST 195
#define RST 180
#define CROSS 197
#define BS 8
#define SP 32
#define UP 18432
#define DOWN 20480
#define RIGHT 19712
#define LEFT 19200
#define ESC 283
#define HOME 18176
#define END 20224
struct date_calc
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
	else
	return 0;
}
void daycalc()
{
	long int year[]={0,31,28,31,30,31,30,31,31,30,31,30,31},totday,remdays=0,remdaye=0,bwdays=0,i,print,brow,bcol,row,col;
	for(i=start.month;i<=12;i++)
	{
		remdays=remdays+year[i]+((isleap(end.year)&&end.month==2)?1:0);
	}
	remdays=remdays-start.date+1;
	for(i=1;i<end.month;i++)
	{
		remdaye=remdaye+year[i]+((isleap(end.year)&&end.month==2)?1:0);
	}
	remdaye=remdaye+end.date;
	for(i=start.year+1;i<end.year;i++)
	{

		bwdays=bwdays+365+isleap(i);
	}
	totday=remdays+remdaye+bwdays;
	end.day=(totday)%7;
	brow=(25-((HEIGHT*7)+DIM+1))/2;
	bcol=(80-((WIDTH*7)+DIM+1))/2;
	bcol=bcol+3;
	row=brow+3;
	i=end.day;
	if(isleap(end.year)&&end.month>=2)
	{
		i++;
	}
	if(i==7)
	{
		i=0;
	}
	for(print=1;print<=year[end.month]+((isleap(end.year)&&end.month==2)?1:0);print++)
	{
		if(i==7)
		{
		i=0;
		row+=2;
		col=bcol+3;
		}
		textcolor(15);
		if(i==0||i==6)
		{
			textcolor(5);
		}
		col=bcol+(i*6);
		gotoxy(col,row);
		cprintf("%d",print);
		i++;

	}
}
void drawbox()
{
	int brow,bcol,row,col,ctr,ctr1,ctr2,eday;
	clrscr();
	textcolor(3);
	row=(SCREEN_HEIGHT-((HEIGHT*7)+DIM+1))/2;
	col=(SCREEN_WIDTH-((WIDTH*7)+DIM+1))/2;
	gotoxy(col,row);
	cprintf("%c",LT);
	for(ctr=0;ctr<DIM;ctr++)
	{       for(ctr2=0;ctr2<WIDTH;ctr2++)
		cprintf("%c",HL);
		cprintf("%c",TT);
	}
	printf("%c%c",BS,RT);
	//end of first line
	gotoxy(col,++row);
	for(ctr=0;ctr<DIM;ctr++)
	{
		for(ctr1=0;ctr1<DIM+1;ctr1++)
		{
			cprintf("%c",VL);
			for(ctr2=0;ctr2<WIDTH;ctr2++)
			cprintf("%c",SP);
		}
		gotoxy(col,++row);
		cprintf("%c",LST);
		for(ctr2=0;ctr2<DIM;ctr2++)
		{
			for(ctr1=0;ctr1<WIDTH;ctr1++)
			cprintf("%c",HL);
			cprintf("%c",CROSS);
		}
		cprintf("%c%c",BS,RST);
		gotoxy(col,++row);

	}
	//end of middle
	row--;
	gotoxy(col,row);
	printf("%c",LB);
	for(ctr=0;ctr<DIM;ctr++)
	{
		for(ctr1=0;ctr1<WIDTH;ctr1++)
		printf("%c",HL);
		printf("%c",BT);
	}
	printf("%c%c",BS,RB);
	//end of last line
	brow=(SCREEN_HEIGHT-((HEIGHT*7)+DIM+1))/2;
	bcol=(SCREEN_WIDTH-((WIDTH*7)+DIM+1))/2;
	row=brow+1;
	col=bcol+2;
	gotoxy(col,row);
	textcolor(4);
	cprintf("SUN");
	col=bcol+DIM+1;
	textcolor(2);
	gotoxy(col,row);
	cprintf("MON");
	col=col+6;
	gotoxy(col,row);
	cprintf("TUE");
	col=col+6;
	gotoxy(col,row);
	cprintf("WED");
	col=col+6;
	gotoxy(col,row);
	cprintf("THU");
	col=col+6;
	gotoxy(col,row);
	cprintf("FRI");
	textcolor(4);
	col=col+6;
	gotoxy(col,row);
	cprintf("SAT");
}
int main()
{
	int ch;
	start.date=1;
	start.month=1;
	start.year=1900;
	start.day=1;
	end.date=1;
	end.month=1;
	end.year=2018;
	drawbox();
	daycalc();
	gotoxy(21,4);
	textcolor(14);
	cprintf("%d,%d",end.month,end.year);
	do
	{
		while(bioskey(1)==0);
		ch=bioskey(0);
		switch(ch)
		{
			case UP:end.year--;
				break;
			case DOWN:end.year++;
				break;
			case LEFT:end.month--;
				if(end.month==0)
				{
					end.month=12;
					end.year--;
				}
				break;
			case RIGHT:end.month++;
				if(end.month==13)
				{
					end.month=1;
					end.year++;
				}
				break;

			case ESC:return 0;
		}
		drawbox();
		daycalc();
		gotoxy(21,4);
		textcolor(14);
		cprintf("%d,%d",end.month,end.year);
	}while(ch!=ESC);
	textcolor(LIGHTGRAY);
	getch();
	return 0;
}
