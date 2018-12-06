#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, j, bin[50], i=0, r;
	cout<<"Enter number to be converted : ";
	cin>>num;
	while (num>0)
	{
		r=num%2;
		bin [i]=r;
		i++;
		num=num/2;
	}
	for(j=i-1; j>=0; j--)
	cout<< bin[j];
	getch();
}