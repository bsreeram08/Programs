#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int num1,num2,remainder,revnum1=0,revnum2=0,f1=0,f2=0;
    scanf("%lld\n%lld",&num1,&num2);
    if(num1%10==0)
    {
        f1=1;
     num1=num1+9;
    }
    if(num2%10==0)
    {
        f2=1;
        num2=num2+9;
    }
    while(num1 != 0)
    {
        remainder = num1%10;
        revnum1 = revnum1*10 + remainder;
        num1 /= 10;
    }
    while(num2 != 0)
    {
        remainder = num2%10;
        revnum2 = revnum2*10 + remainder;
        num2 /= 10;
    }
    int val=0;
    while(revnum1>0&&revnum2>0)
    {
        val=val+revnum1%10+revnum2%10;
        revnum1/=10;
        revnum2/=10;
        if(val>=10)
        {
            //printf("\n%d\n",val);
            printf("%d",val%10);
            val/=10;
        }
        else
        {
            printf("%d",val);
            val=0;
        }
        if(revnum1<10&&f1==1)
        {
            revnum1=0;
        }
        if(revnum2<10&&f2==1)
        {
            revnum2=0;
        }
    }
    while(revnum1>0)
    {
        val=val+revnum1%10;
        revnum1/=10;
        if(val>=10)
        {
            printf("%d",val%10);
            val/=10;
        }
        else
        {
            printf("%d",val);
            val=0;
        }
        if(revnum1<10&&f1==1)
        {
            revnum1=0;
        }
    }
    while(revnum2>0)
    {
        val=val+revnum2%10;
        printf("%d",val);
        revnum1/=10;
        if(val>=10)
        {
            printf("%d",val%10);
            val/=10;
        }
        else
        {
            printf("%d",val);
            val=0;
        }
        if(revnum1<10&&f1==1)
        {
            revnum1=0;
        }
    }
    if(val>0)
    {
        printf("%d",val);
    }
    return 0;
}
