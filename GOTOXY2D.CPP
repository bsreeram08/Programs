#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int r=3, c=5, A[2][2];
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			gotoxy(c,r);
			cin>>A[i][j];
			c+=4;
		}
		r++;
		c=5;
	}
	getch();
}