#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char *weekdays[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	/*
	cout<<*weekdays;
	cout<<endl<<*(weekdays+2);
	cout<<endl<<*weekdays+2;
	for(int i=0;i<7;i++)
	{
		cout<<*(weekdays+i);
	}
	*/
	cout<<weekdays+1;
	getch();
}
