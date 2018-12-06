#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        //printf("%d-i\n",i);
        for(j=i;j<n;j+=i+1)
        {
            //printf("%d-j\n",i);
            if(arr[j]==0)
            {
                //printf("%d-j-1\n",i);
                arr[j]=1;
            }
            else
            {
               // printf("%d-j-0\n",i);
                arr[j]=0;
            }
        }
    }
    int open=0,close=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            close++;
        }
        else
        {
            open++;
        }
    }
    printf("open=%d\nclose=%d",open,close);
}
