#include<stdio.h>
#include<graphics.h>
void main()
{
int gd = DETECT, gm = DETECT,i;
initgraph(&gd,&gm,"");
for(i=0;i<600;i++)
{
if(i%2==0)
{
circle(45+i,310,15);
setcolor(RED);
}
else
{
circle(60+i,395,15);
i=i+70;
}
delay(400);
cleardevice();
if(kbhit())
{
break;
}
}
getch();
}
