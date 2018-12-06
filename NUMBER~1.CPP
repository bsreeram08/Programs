#include<iostream.h>
#include<conio.h>
#include <stdio.h>
#include<string.h>
void main()
{
	clrscr();
	int choice;
	cout<<"Enter \n1) for number palindrome,\n2) for string palindrome\n";
	cin>>choice;
	if(choice==1)
	{
		int num, orig, rev=0,r;
		cout<<"Enter the number:"<<endl;
		cin>>num;
		orig=num;
		while(num>0)
		{
			r=num%10;
			rev=rev*10+r;
			num=num/10;
		}
		if(orig==rev)
		{
			cout<<"NUmber Palindrome"<<endl;
		}
		else
		{
			cout<<"Not a Number Palindrome"<<endl;
		}
	}
	else if(choice==2)
	{
		char text[100];
		int begin, middle, end, length = 0;
		cout<<"Enter a string:";
		gets(text);
		while (text[length] != '\0')
		length++;
		end = length - 1;
		middle = length/2;
		for (begin = 0; begin < middle; begin++)
		{
			if(text[begin] != text[end])
			{
				cout<<"Not a string palindrome.\n";
				break;
			}
			end--;
		}
		if (begin == middle)
		cout<<"It is Palindrome.\n";
	}
	else
	{
	cout<<"INVALID INPUT";
	}
	getch();
}