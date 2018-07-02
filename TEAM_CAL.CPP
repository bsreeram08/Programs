#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int no_of_players, no_of_teams, leftovers ;
	cout<<"enter no of players";
	cin>>no_of_players;
	no_of_teams=no_of_players/11;
	leftovers=no_of_players%11;
	cout<<"there will be "<<no_of_teams
	    <<" teams with "<<leftovers<<" left overs\n";
	getch();
}