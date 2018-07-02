#include <iostream.h>
#include<conio.h>

int main() {
	   clrscr();
	int t,n,R[100],L[100],mul[100],max,count,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    count=0;
	    for(i=0;i<n;i++)
	    {
		cin>>L[i];
	    }
	    for(i=0;i<n;i++)
	    {
		cin>>R[i];
	    }
	    for(i=0;i<n;i++)
	    {
		    mul[i]=L[i]*R[i];
	    }
	    max=mul[0];
	    for(i=0;i<n;i++)
	    {
		if(max<mul[i])
		{
		    max=mul[i];
		}
	    }
	    for(i=0;i<n;i++)
	    {
		if(max==mul[i])
		{
		    count++;
		}
	    }
	    if(count>1)
	    {
		max=R[0];
		count=0;
		for(i=1;i<n;i++)
		{
		if(max<R[i])
	    {
		max=R[i];
	    }
		}
		for(i=0;i<n;i++)
		{
		    if(max==R[i])
		    {
			count++;
		    }
		}
		if(count>1)
		{
		    for(i=0;i<n;i++)
		    {
			if(max==R[i])
			{
			    cout<<i+1;
			    break;
			}
		    }
		}

	    }
	    else
	    {
		for(i=0;i<n;i++)
		{
		    if(max==mul[i])
		    {
			cout<<i+1;
		    }
		}
	    }

	}
	getch();

	return 0;

}