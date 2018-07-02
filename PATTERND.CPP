#include <iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,space,rows,k;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;++i)
    {
	for(space=1;space<=rows-i;++space)
	{
	   cout<<"  ";
	}
	while(k!=2*i-1)
	{
	   cout<<"* ";
	   ++k;
	}
	k=0;
	cout<<"\n";
    }
    getch();
}