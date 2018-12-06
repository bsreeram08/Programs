#include <iostream.h>
#include<conio.h>
class A
{
	int a;
	char name[10];
	public:
	A()
	{
		cout<<"\nConstructor of A";
	}
	~A(){cout<<"Destructor of A";}
};
class B : public A
{
	int b;
	public:
	B()
	{ cout<<"\nConstructor of B";
	}
	~B(){cout<<"Destructor of B";}
};
void main()
{clrscr();
B obj;
getch();
}
