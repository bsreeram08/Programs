#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
void charlie();
void charlieno();
void charlieyes();
void charliethink();
void main()
{
clrscr();
textcolor(3);
cout<<"\t\t\t";
cprintf("CHARLIE CHARLIE");
cout<<"\n";
textcolor(7);
char choice;
cout<<"Enter 'p' to play the game, Enter 'e' to exit! \n";
cin>>choice;
switch(choice)
{
case 'p':
charlie();
break;
case 'e':
clrscr();
textcolor(4);
cout<<"\n\t\t\t";
cprintf("You chose to exit");
cout<<"\n";
cout<<"\n\t\t\t";
cprintf("BYE! Now charlie will HAUNT you!!");
textcolor(7);
sound(250);
delay(800);
nosound();
getch();
exit(0);
break;
default:
clrscr();
textcolor(4);
cout<<"\n\t";
cprintf("  You disturbed Charlie for No reason...Now he will haunt You");
textcolor(7);
cout<<"\n";
sound(200);
delay(800);
nosound();
getch();
exit(0);
}
getch();
}
void charlie()
{
	char cont,ques[50];
	for(int i=0;;i++)
		{
			clrscr();
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t";
			textcolor(2);
			cprintf("YES");
			textcolor(7);
			cout<<"\t\t|\t\t";
			textcolor(4);
			cprintf("NO");
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t";
			textcolor(4);
			cprintf("NO");
			textcolor(7);
			cout<<"\t\t|\t\t";
			textcolor(2);
			cprintf("YES");
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n";
			textcolor(6);
			cprintf("Ask Me a Yes or No Question");
			cout<<"\n";
			cout<<"\n";
			cprintf("You May Now Type the Question:");
			cout<<"\n";
			cprintf("CHARLIE CHARLIE ");
			textcolor(7);
			sound(1500);
			delay(50);
			sound(2000);
			delay(50);
			sound(2500);
			delay(50);
			sound(3000);
			delay(50);
			sound(3500);
			delay(50);
			sound(4000);
			delay(50);
			sound(4500);
			delay(50);
			nosound();
			gets(ques);
			randomize();
			int Ans;
			Ans=random(2);
			clrscr();
			if(Ans==0)
			{charlieno();
			}
			else if(Ans==1)
			{charlieyes();
			}
			clrscr();
			cout<<"\nDo you want to continue: Y or N ? \n";
			cin>>cont;
			if(cont!='Y'&& cont!='y')
				{clrscr();
				cout<<"\n\t\t\t\t";
				textcolor(9);
				sound(800);
				cprintf("  BYE !!!");
				delay(600);
				nosound();
				textcolor(7);
				cout<<"\n";
				getch();
				exit(0);
				}
		}
}
void charlieyes()
{
			charliethink();
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t";
			textcolor(2);
			cprintf("YES");
			textcolor(7);
			cout<<"\t\t|\t\t";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\t\t";
			textcolor(2);
			cprintf("YES");
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			sound(4500);
			delay(50);
			sound(5000);
			delay(50);
			sound(5500);
			delay(50);
			sound(6000);
			delay(50);
			sound(6500);
			delay(50);
			sound(7000);
			delay(50);
			sound(7500);
			delay(50);
			nosound();
			textcolor(7);
			getch();
}
void charlieno()
{                       charliethink();
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\t\t";
			textcolor(4);
			cprintf("NO");
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t";
			textcolor(4);
			cprintf("NO");
			textcolor(7);
			cout<<"\t\t|\t\t";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			sound(4500);
			delay(50);
			sound(5000);
			delay(50);
			sound(5500);
			delay(50);
			sound(6000);
			delay(50);
			sound(6500);
			delay(50);
			sound(7000);
			delay(50);
			sound(7500);
			delay(50);
			nosound();
			textcolor(7);
			getch();
}
void charliethink()
{
	int k;
	for(int j=0;j<10;j++)
	{
		if(j%2==0)
		{
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t";
			textcolor(2);
			cprintf("YES");
			textcolor(7);
			cout<<"\t\t|\t\t";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\t\t";
			textcolor(2);
			cprintf("YES");
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			delay(500);
			sound(4500);
			delay(50);
			nosound();
			clrscr();

		}
		else
		{
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\t\t";
			textcolor(4);
			cprintf("NO");
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t";
			textcolor(4);
			cprintf("NO");
			textcolor(7);
			cout<<" \t\t|\t\t";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			delay(500);
			sound(5000);
			delay(50);
			nosound();
			clrscr();
		}
	}
}