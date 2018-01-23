#include <stdio.h>
int main(void) 
{
    int a[6]={10,20,30,40,50,60},num,insnum,poi,noe,i=0,j=0;
    noe=sizeof(a)/sizeof(a[0]);
    printf("Enter the no of elements you want to insert:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the %dth element:",i+1);
        scanf("%d",&insnum);
        for(poi=0;a[poi]<insnum&&poi!=noe-1;poi++);
        if(poi==noe-1)
        {
            a[poi]=insnum;
        }
        else
        {
            for(j=noe;j>poi;j--)
            {
                a[j]=a[j-1];
            }
            a[poi]=insnum;
        }
        for(j=0;j<noe;j++)
        {
            printf("%d\t",a[j]);
        }
        
    }
    return 0;
}