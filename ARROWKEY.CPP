#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
		clrscr();
		intgraph();
		int i=250,j=250,x=0,y=-1,ch,gd=DETECT,gm;
		intgraph(&gd,&gm,"c:\turboc3\bgi");
		while(1)                                                               //infinite loop
		{
				circle(i,j,30);
				outtextxy(400,400,"Press Esc to Exit....."	);
				if(kbhit())                                            //check if a key is pressed
				{
						ch=getch();
						if(ch==72)                           //move upward
						{
								x=0;
								y=-1;
						}

						if(ch==75)                           //move left
						{
								x=-1;
								y=0;

						}

						if(ch==77)                           //move right
						{
								x=1;
								y=0;
						}

						if(ch==80)                           //move downward
						{
								x=0;
								y=1;
						}

						if(ch==27)                           //exit when esc pressed
								exit(0);
				}
				i=i+x;
				j=j+y;

				delay(50);
				cleardevice();
				getch();
		}
}