#includeexit<iostream.h>
#include<conio.h>
void binary(int);
void main(void)
{
	clrscr();
	int number;

	cout << "Please enter a positive integer: ";
	cin >> number;
	if (number < 0)
		cout << "That is not a positive integer.\n";
	else {
		cout << number << " converted to binary is: ";
		binary(number);
		cout << endl;
	}
	getch();
}

void binary(int number) {
	int remainder;

	if(number <= 1)
	{
		cout << number;
		return;
	}

	remainder = number%2;
	binary(number >> 1);
	cout << remainder;
	getch();
}