#include <iostream>
using namespace std;

int main()
{
    int t,n,i,a[100],b[100],num,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n-1;i++)
        {
            cin>>a[i];
        }
        b[0]=a[0];
        for(i=1;i=n;i++)
        {
            b[i]=b[i]+1;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i]&&a[i]!=n-1)
            {
                num=b[i];
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(a[0]==1)
            {
                cout<<a[n-1]+1;
            }
            else 
            {
                cout<<a[0]-1;
            }
        }
        else
        {
            cout<<num;
        }
    }
		return 0;
}