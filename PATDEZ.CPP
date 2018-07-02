#include<stdio.h>
#include<conio.h>
#include<iostream.h>
 
void main()
{
   clrscr();
   int row, c, n, temp;
   printf("Enter the number of rows in pyramid of stars you wish to see ");
   scanf("%d",&n);
 
   temp = n;
 
   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c < temp ; c++ )
         printf(" ");
 
      temp--;
 
      for ( c = 1 ; c <= 2*row - 1 ; c++ )
         printf("*");
 
      printf("\n");
   }
 
   getch();
}