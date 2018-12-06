#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,j,n,k;
    cout<<"\Enter the number of lines to be printed: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i;j++)
       {
   cout<<"*";
       }
       for(k=0;k<(2*n-2*j);k++)
       {
    cout<<" ";
       }
 for(j=0;j<n-i;j++)
       {
    cout<<"*";
       }
       cout<<endl;
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<=i;j++)
       {
     cout<<"*";
       }
       for(k=2*n-2*j;k>0;k--)
       {
     cout<<" ";
       }
 for(j=0;j<=i;j++)
       {
    cout<<"*";
       }
       cout<<endl;
    }
    getch();
}
