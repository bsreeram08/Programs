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
class C : public B
{
	int c;
	public:
	C()
	{ cout<<"\nConstructor of C";
	}
	~C(){cout<<"Destructor of C";}
};
void main()
{clrscr();
C obj;
getch();
}
