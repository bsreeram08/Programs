#include<iostream>
#include<string.h>
using namespace std;
/*void substring(char s[100],int length)
{
    int flag,countvar=0;
    for(int i=length-1;i>=0;i--)
    {
        for(int j=0;j<length;j++)
        {
            flag=1;
            for(int k=j;k<=i;k++)
            {
                flag=0;
                cout<<s[k];
            }
            if(flag==0)
            {
                countvar++;
                cout<<endl;
            }
        }
    }
    cout<<countvar;
}*/
void substring(string s,int length)
{
    for(int i=0;i<length;i++)
    {
        for(int len=1;len<=length-i;len++)
        {
            cout<<s.substr(i,len)<<endl;
        }
    }
    //cout<<countvar;
}
int main()
{
    string strings;
    cin>>strings;
    substring(strings,strlen(strings));
    return 0;
}
/*void sstr(char s[100],int length)
{
    static int n[length];
    for(int i=0;i<length;i++)
    {

    }
}*/
