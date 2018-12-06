#include <iostream.h>
#include<conio.h>
void calc(int&,int&,char&);
void main()
{
	clrscr();
	int a,b;
	char ch;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"Enter an arthemation operator to operate the numbers";
	cin>>ch;
	calc(a,b,ch);
	}
void calc(int&x, int&y, char&z)
{
	switch(z)
	{
		case'+':cout<<x+y;
		break;
		case'-':cout<<x-y;
		break;
		case'*':cout<<x*y;
		break;
		case'/':if(x<y)
			{
				cout<<"first number must be grater than second number";
				break;
			}
			else
			{
				cout<<x/y;
				break;
			}
		case'%':if(x<y)
			{
				cout<<"first no must be grater than second number";
				break;
			}
			else
			{
				cout<<x%y;
				break;
			}
		}
		getch();
		return;
	}
