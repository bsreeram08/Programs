#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
int a[3][3];
int i,j,s=0,sum=0;

cout<<"Enter 9 elements of 3*3 Matrix \n";
for(i=0;i<3;i++)
for(j=0;j<3;j++)
cin>>a[i][j];

cout<<"Matrix Entered By you is \n";
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
  cout<<a[i][j]<<" ";
   cout<<endl;
}

for(i=0;i<3;i++)
{for(j=0;j<3;j++)
  s=s+a[i][j];
 cout<<"sum of"<<i+1<<" Row is"<<s;
  s=0;
  cout<<endl;
}
 cout<<endl;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
  s=s+a[j][i];
 cout<<"sum of"<<i+1<<" Column is"<<s;
  s=0;
  cout<<endl;
}

 cout<<endl;

for(i=0;i<3;i++)
sum=sum+a[i][i];
 cout<<"Sum of Diagnols Elements is \n"<<sum;

getch();
}