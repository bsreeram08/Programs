#include<stdio.h>
int main()
{
    int r,c,cnt=0;
    scanf("%d%d",&r,&c);
    int i,j,maxrow=r,maxcol=c,minrow=0,mincol=0;
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    cnt=r*c;
    int it=0;
    i=0;j=-1;
    int swap=1;
    while(it<=cnt)
    {
        if(swap==1)
        {
            for(j=j+1;j<maxcol;j++)
            {
                printf("%d ",a[i][j]);
                it++;
            }
            j--;
            minrow++;
            swap=2;
        }

        else if(swap==2)
        {
            for(i=i+1;i<maxrow;i++)
            {
                printf("%d ",a[i][j]);
                it++;
            }
            i--;
            maxcol--;
            swap=3;
        }
        else if(swap==3)
        {

            for(j=j-1;j>=mincol;j--)
            {
                printf("%d ",a[i][j]);
                it++;
            }
            maxrow--;
            j++;
            swap=4;
        }

        else if(swap==4)
        {
            for(i=i-1;i>=minrow;i--)
            {
                printf("%d ",a[i][j]);
                it++;
            }
            i++;
            mincol++;
            swap=1;
        }

    }
}
