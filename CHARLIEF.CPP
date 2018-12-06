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
textcolor(7);
cout<<"\t\t\t ";
cprintf("CHARLIE CHARLIE");
cout<<" \n";
char choice;
cprintf("Enter 'p' to play the game, Enter 'e' to exit!");
cout<<" \n";
textcolor(7);
cin.get(choice);
clrscr();
switch(choice)
{
case 'p':
charlie();
break;
case 'e':
cout<<"\n you chose to exit \n";
cout<<"\n\t\t\t BYE! Now charlie will HAUNT you!!";
getch();
exit(0);
break;
default:
cout<<"\n Wrong Choice \n";
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
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n\t\t\t";
			textcolor(2);
			cprintf("YES");
			cout<<"\t\t|\t\t";
			textcolor(4);
			cprintf("NO");
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n\t\t\t ";
			cprintf("NO");
			cout<<"\t\t|\t\t";
			textcolor(2);
			cprintf("YES");
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\nAsk Me a Yes or No Question\n";
			cout<<"\nYou May Now Type the Question:\nCHARLIE CHARLIE ";
			gets(ques);
			charliethink();
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
			clrscr();
			if(cont!='Y'&& cont!='y')
				{clrscr();
				cout<<"\n\t\t\t\t\tBYE !!!\n";
				getch();
				exit(0);
				}
		}
}
void charlieyes()
{
			sound(5000);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n\t\t\t";
			textcolor(2);
			cprintf("YES");
			cout<<"\t\t|\t\t";
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n\t\t\t";
			textcolor(2);
			cout<<"\t\t|\t\t";
			cprintf("YES");
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			sleep(2);
			nosound();
			getch();
}
void charlieno()
{
			textcolor(7);
			sound(100);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n\t\t\t";
			cout<<"   \t\t|\t\t";
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
			sleep(2);
			nosound();
			getch();
}
void charliethink()
{
	clrscr();
	int think;
	for(think=0;think<25;think++)
	{
		sound(200);
		if(think%2==0)
		{
			textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\tYES\t\t|\t\t";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\t\tYES";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			delay(100);
			nosound();
			clrscr();
		}
		else
		{       textcolor(7);
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\t\tNO";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|\n";
			cout<<"================================================================================";
			cout<<"\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\tNO \t\t|\t\t";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			cout<<"\n\t\t\t   \t\t|";
			delay(100);
			nosound();
			clrscr();
		}
	}
}