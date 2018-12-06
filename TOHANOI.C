#include<stdio.h>
#include<conio.h>
int src[5]={1,2,3,4,5},aux[5]={-1,-1,-1,-1,-1},dest[5]={-1,-1,-1,-1,-1};
int main()
{
	int srci=0,auxi=4,desti=4;
	clrscr();
	while(dest[0]!=-1)
	{
		if(dest[desti]==-1)
		{
		  if(desti!=4&&dest[desti+1]<src[srci])
		  {
			if(aux[auxi]!=4&&aux[auxi]<src[srci])
			{
				aux[++auxi]=dest[desti];
				desti--;
				dest[++desti]=src[srci];
				src[srci]=0;
				srci--;
			}
			else
			{
				aux[auxi]=src[srci];
				auxi--;
				src[srci]=0;
				srci++;
			}
		  }
		  else
		  {
			dest[desti]=src[srci];
			desti--;
			src[srci]=0;
			srci++;
		  }

		}

	}
	getch();
	return 0;

}