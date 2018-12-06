#include<iostream.h>

#include<conio.h>
#include<dos.h>
int ar[5][5];
void u()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i>=j)
			{
				textcolor(j);
				cprintf("%d",ar[i][j]);
				cout<<" ";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
void l()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(j<i)
			{
				cout<<" ";
			}
			else
			{
				textcolor(j);
				cprintf("%d",ar[i][j]);
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}

void main()
{
	clrscr();
	cout<<"Enter the elements for the 2d matrix below(its a 5x5 matrix):-\n";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"Enter the element for the position ["<<i<<"] ["<<j<<"]is:";
			cin>>ar[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n Look around 4 your bae within 4 seconds and press enter";
	sleep(4);
	cout<<"\n u got excited and now the 2d array is\n";
	for(int x=0;x<10;x++)
	{
		gotoxy(7,7);
		u();
		l();
		delay(200);
	}
	cout<<"\n\n Enough of bull shit now bye";
	getch();

}
