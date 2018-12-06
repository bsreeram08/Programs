#include <iostream.h>
#include<conio.h>
int main()

{
clrscr();
    int month,date;
    cout<<" Enter your birth month:";
    cin>>month;
    cout<<" Enter your birth date:";
    cin>>date;

    if (( month == 1 && date >= 20) || ( month == 2 && date <=18))
    {
	 cout<<" Your zodiac sign is AQUARIUS\n";

    }
    else if (( month == 2 && date >= 19) || ( month == 3 && date <= 20))
    {
	 cout<<" Your zodiac sign is PISCES\n";
    }
    else if (( month == 3 && date >= 21) || ( month == 4 && date <= 19))
    {
	 cout<<" Your zodiac sign is ARIES\n";
    }
    else if (( month == 4 && date >= 20) || ( month == 5 && date <= 20))
    {
	 cout<<" Your zodiac sign is TAURUS\n";
    }
    else if (( month == 5 && date >= 21 ) || ( month == 6 && date <= 20 ))
    {
	 cout<<" Your zodiac sign is GEMINI\n";
    }
    else if (( month == 6 && date >= 21 ) || ( month == 7 && date <= 22 ))
    {
	 cout<<" Your zodiac sign is CANCER\n";
    }
    else if (( month == 7 && date <= 23 ) || ( month == 8 && date <= 22))
    {
	 cout<<" Your zodiac sign is LEO\n";
    }
    else if (( month == 8 && date >= 23 ) || ( month == 9 && date <= 22 ))
    {
	 cout<<" Your zodiac sign is VIRGO\n";
    }
    else if (( month == 9 && date >= 23 ) || ( month == 10 && date <= 22))
    {
	 cout<<" Your zodiac sign is LIBRA\n";
    }
    else if (( month == 10 && date >= 23 ) || ( month == 11 && date <= 21))
    {
	 cout<<" Your zodiac sign is SCORPIO\n";
    }
    else if (( month == 11 && date >= 22 ) || ( month == 12 && date <= 21))
    {
	 cout<<" Your zodiac sign is SAGUITTARIUS\n";
    }
    else if (( month == 12 && date >= 22 ) || ( month == 1 && date <= 19 ))
    {
	 cout<<" Your zodiac sign is CAPRICORN\n";
    }
    else
    {
	cout<<" INVALID INPUT";
    }
	 getch();
}