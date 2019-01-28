#include<stdio.h>
void main()
{
    int val=4,i,j;
    int matrix[val][val];
    for(i=0;i<val;i++)
        {
            for(j=0;j<val;j++)
            {
                matrix[i][j]=0;
            }
        }
    matrix[0][0]=-1;
    matrix[2][2]=-1;
    for(i=0;i<val;i++)
        {
            for(j=0;j<val;j++)
            {
                if(matrix[i][j]!=-1)
                {
                    if (matrix[i-1][j-1]==-1&&i-1>=0&&j-1>=0)
                        matrix[i][j]++;
                    if (matrix[i-1][j]==-1&&i-1>=0)
                        matrix[i][j]++;
                    if(matrix[i-1][j+1]==-1&&i-1>=0&&j+1<val)
                        matrix[i][j]++;
                    if(matrix[i][j-1]==-1&&j-1>=0)
                        matrix[i][j]++;
                    if(matrix[i][j+1]==-1&&j+1<val)
                        matrix[i][j]++;
                    if(matrix[i+1][j-1]==-1&&i+1<val&&j-1>=0)
                        matrix[i][j]++;
                    if(matrix[i+1][j]==-1&&i+1<val)
                        matrix[i][j]++;
                    if(matrix[i+1][j+1]==-1&&i+1<val&&j+1<val)
                        matrix[i][j]++;
                }
            }
        }
    for(i=0;i<val;i++)
        {
            for(j=0;j<val;j++)
            {
                printf("%d ",matrix[i][j]);
            }

            printf("\n");
        }
}
