#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int A[2][45],r=5,c=6;
	int i, j;
	for(i=1; i<78; i++)
	{
		for(j=1; j<67; j++)
		{
			gotoxy(c,r);
			cin>>A[i][j];
			c+=78;
		}
		r++;
		c=79;
	}
	getch();
}