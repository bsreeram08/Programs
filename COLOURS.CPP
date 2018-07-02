#include <stdio.h>
#include<iostream.h>
#include <stdlib.h>
#include<conio.h>

int main()
{   clrscr();
    textcolor(3);
    cprintf("Welcome to the color changing application!\n");
    printf("Press any key to change the background color!\n");
    getch();
    system("colour 6");
    cprintf("Now the background color is Yellow and Text Color is light Red\n");
    printf("Press any key to exit...");
    getch();
    return 0;
}