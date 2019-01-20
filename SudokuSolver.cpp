#include<iostream>
using namespace std;
int  mat[9][9]={{3,0,6,5,0,8,4,0,0},{5,2,0,0,0,0,0,0,0},{0,8,7,0,0,0,0,3,1},{0,0,3,0,1,0,0,8,0},{9,0,0,8,6,3,0,0,5},{0,5,0,0,9,0,6,0,0},{1,3,0,0,0,0,2,5,0},{0,0,0,0,0,0,0,7,4},{0,0,5,2,0,6,3,0,0}};
//int  mat[9][9];
bool isnrow(int grid[9][9],int r,int c,int n)
{
    cout<<"Here in in row!\n";
    for(int i=0;i<9;i++)
    {
        cout<<r<<"--"<<i<<"--"<<n<<"=="<<c<<endl;
        if(grid[r][i]==n)
        {
            cout<<"in row!\n";
            return false;
        }
    }
    cout<<"Not in row!\n";
    return true;
}
bool isncol(int grid[9][9],int r,int c,int n)
{
    cout<<"Here in in col!\n";
    for(int i=0;i<9;i++)
    {
        if(grid[i][c]==n)
        {
            cout<<"in col!\n";
            return false;
        }
    }
    cout<<"Not in col!\n";
    return true;
}
bool isnbox(int grid[9][9],int r,int c,int number)
{
    cout<<"Here in inbox !\n";
    int i,j;
    for(i=8;i>=-1;i-=3)
    {
        for(j=8;j>=-1;j-=3)
        {
            if(r>i&&c>j)
            {
                goto x;
            }
        }
    }
    x:
    i++;j++;
    for(int m=i;m<i+3;m++)
    {
        for(int n=j;n<j+3;n++)
        {
            if(grid[m][n]==number&&m!=r&&n!=c)
            {
                cout<<"in box!\n";
                return false;
            }
        }
    }
    cout<<"Not in box!\n";
    return true;
}
bool issafe(int grid[9][9],int r,int c,int n)
{
    cout<<"Here in is safe!\n";
    return isnrow(grid,r,c,n)&&isncol(grid,r,c,n)&&isnbox(grid,r,c,n)&&mat[r][c]==0;
}
void printmatrix(int grid[9][9])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool findunassignedsolutions(int grid[9][9],int &r,int &c)
{
    cout<<"Here in find unassigned solutions!\n";
    for(r=0;r<9;r++)
    {
        for(c=0;c<9;c++)
        {
            if(grid[r][c]==0)
            {
                return true;
            }
        }
    }
    return false;
}
bool findsolution(int grid[9][9])
{
    int r,c;
    cout<<"Here in Find solution!\n";
    //cout<<r<<"=="<<c<<endl;
    if(!findunassignedsolutions(grid,r,c))
    {
        return true;
    }
    for(int val=1;val<=9;val++)
    {
        if(issafe(grid,r,c,val))
        {
            cout<<val<<endl;
            grid[r][c]=val;
            if(findsolution(grid))
            {
                return true;
            }
            grid[r][c]=0;
        }
    }
    printmatrix(grid);
    cout<<"RETURN FALSE\n";
    return false;
}
void getmatrix()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            //mat[i][j]=0;
            //cin>>mat[i][j];
            //cout<<mat[i][j]<<" ";
        }
        //cout<<endl;
    }
}
int main()
{
    getmatrix();
    if(findsolution(mat)==true)
    {
        cout<<"Solution Exist\n";
        printmatrix(mat);
    }
    else
    {
        printmatrix(mat);
        cout<<"Solution  Does not Exist!";
    }
    return 0;
}
