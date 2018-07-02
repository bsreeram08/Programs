#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int A[2][2],B[2][2], C[2][2];
	for(int i=0; i<2;++i)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"A["<<i<<"]["<<j<<"]";
			cin>>A[i][j];
			cin>>B[i][j];
		}
	}
	for(int j=0; j<2; j++)
	{
		C[2][2]=A[i][j]+B[i][j];
		cout<<C[i][j]<<"\n";
	}
	getch();
}