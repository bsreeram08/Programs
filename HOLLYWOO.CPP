
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int l,i,chance,flag=0,n,r=1;
  char s1[30],s2[30],s3[2],s4[30];
  clrscr();
  while(r==1)
  {
  chance=9;
  clrscr();
  printf("Enter a word without spaces:\n");
  scanf("%s",&s1);
  strlwr(s1);
  l=strlen(s1);
  for(i=0;i<l;i++)
  {
  s2[i]='_';
  }
  s2[i]='\0';
  for(i=0;i<l;i++)
  {
  printf("%c  ",s2[i]);
  }
  clrscr();
  printf("\nNow player 1 enter a letter:");
  scanf("%s",&s3[0]);
  strlwr(s3);
  clrscr();
  for(i=0;i<l;i++)
  {
  if(s3[0]==s1[i])
  {
  s2[i]=s3[0];
  }
  }
  for(i=0;i<l;i++)
  printf("%c  ",s2[i]);

  while(chance!=0)
  {
  flag=0;
  printf("\nChances left:%d\n",chance);
  printf("Enter a letter:\n");
  scanf("%s",&s3[0]);
  strlwr(s3);
  clrscr();
  for(i=0;i<l;i++)
  {
  if(s3[0]==s2[i])
  {
   printf("Already entered.....\n");
   chance--;
   break;
   }
   }
  for(i=0;i<l;i++)
  {

    if(s3[0]==s1[i])
    {
    flag=1;
    s2[i]=s3[0];
    }
  }
  if(flag==0)
  {
  printf("Ur chance is Deducted\n");
  chance--;
  }
  for(i=0;i<l;i++)
  printf("%c  ",s2[i]);
  n=strcmp(s1,s2);
  if(n==0)
  {
  printf("\nCONGRATS YOU WON THE GAME!!!\n");
  break;
  }
  else if(chance==0)
  {
  printf("\nYOU LOST THE GAME!!!\n");
  printf("The correct answer is %s!!!\n",strupr(s1));
  }
   }
   printf("1.PLAY AGAIN\n2.EXIT\n");
   scanf("%d",&r);
   if(r==1)
   continue;
   else if(r==2)
   break;
   }
  printf("Thank u.......\n");
  getch();
  }