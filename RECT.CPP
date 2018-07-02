#include<graphics.h>
#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   rectangle(100,100,200,200);

   getch();
   closegraph();
   getch();
}