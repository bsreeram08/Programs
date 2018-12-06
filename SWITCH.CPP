#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=2, b=4, c=3, d=5, e=6, ch=1;
	cout<<"Enter choise:-  \n 1-ADD \n 2-SUBTRACT \n 3-MULTIPLY \n 4-DIVIDE\n ";
	switch (ch)
	{
		case 1:
		cout<<a+b+c+d+e;
		break;
		case 2:
		cout<<a-b-c-d-e;
		break;
		case 3:
		cout<<a*b*c*d*e;
		break;
		case 4:
		cout<<a/b/c/d/e;
		break;
		}
	getch();
}