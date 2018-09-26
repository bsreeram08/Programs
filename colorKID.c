#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d\n",&n,&m);
    char arr[n][m];
    int i,j;
    printf("%d--%d\n",n,m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
	    {
	        scanf("%c ",&arr[i][j]);
	    }
	    scanf("\n");
    }
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==arr[i+1][j]&&i+1<n)
            {
                printf("NO");
                return 0;
            }
            if(arr[i][j]==arr[i][j+1]&&j+1<m)
            {
                printf("NO");
                return 0;
            }
            if(arr[i][j]==arr[i-1][j]&&i-1>=0)
            {
                printf("NO");
                return 0;
            }
            if(arr[i][j]==arr[i][j-1]&&j-1>=0)
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}
