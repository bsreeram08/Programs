#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int maxc=0,maxr=0,mr,mc,flag=0,i,j,r,c,cols=1,rows=1,sum=0;
        cin>>r>>c;
        mr=r-2;
        mc=c-2;
        int ar[r],ac[c];
        for(i=0;i<r-1;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+r-1);
        for(i=0;i<c-1;i++)
        {
            cin>>ac[i];
        }
        sort(ac,ac+c-1);
        while(cols<r&&rows<c)
        {
            cout<<rows<<" "<<cols<<endl;
            maxc=ac[mc];
            maxr=ar[mr];
            if(maxr>=maxc)
            {
                sum=sum+maxr*rows;
                cout<<maxr<<"*"<<rows<<"="<<maxr*rows;
                mr--;
                cols++;
                cout<<" row update  "<<rows<<endl;
            }
            else
            {
                sum=sum+maxc*cols;
                cout<<maxc<<"*"<<cols<<"="<<maxc*cols;
                mc--;
                rows++;
                cout<<" col update  "<<cols<<endl;
            }
        }
        if(maxc>0)
        {
           sum=sum+maxc*cols;
                cout<<maxc<<"*"<<cols<<"="<<maxc*cols;
                mc--;
                rows++;
                cout<<" col update  "<<cols<<endl;
        }
        else if(maxr>0)
        {
            sum=sum+maxr*rows;
                cout<<maxr<<"*"<<rows<<"="<<maxr*rows;
                mr--;
                cols++;
                cout<<" row update  "<<rows<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}