#include<iostream.h>
#include<conio.h>
#include<math.h>
struct complex
{
	int real;
	int img;
}com1,com2;
void main()
{       clrscr();
	cout<<"\nEnter the Real and Imaginary Part of the First Complex Number: \n";
	cin>>com1.real>>com1.img;
	cout<<"\nEnter the Real and Imaginary Part of the Second Complex Number: \n";
	cin>>com2.real>>com2.img;
	cout<<"\nEnter Your Choice: \n";
	cout<<"\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n";
	int choice;
	cout<<"\nChoice is: \n";
	cin>>choice;
	float ans1,ans2;
	switch(choice)
	{
		case 1:
		{ans1=com1.real+com2.real;
		 ans2=com1.img+com2.img;
		 if(ans2<0)
		 {cout<<"\nAnswer is \n"<<ans1<<ans2<<"i";
		 }
		 else
		 {cout<<"\nAnswer is \n"<<ans1<<"+"<<ans2<<"i";
		 }
		 break;
		}
	case 2:
	{
		ans1=com1.real-com2.real;
		ans2=com1.img-com2.img;
		cout<<"\nAnswer is \n";
		if(ans2<0)
		{
		cout<<ans1<<ans2<<"i";
		}
		else
		{
		cout<<ans1<<"+"<<ans2<<"i";
		}
		break;
	}
	case 3:
	{ 	ans1=(com1.real*com2.real)-(com1.img*com2.img);
		ans2=(com1.img*com2.real)+(com1.real*com2.img);
		cout<<"\nAnswer is \n";
		if(ans2<0)
		{
		cout<<ans1<<ans2<<"i";
		}
		else
		{
		cout<<ans1<<"+"<<ans2<<"i";
		}
		break;
	}
	case 4:
	{
		ans1=((com1.real*com2.real)+(com1.img*com2.img))/((pow(com2.real,2)+pow(com2.img,2)));
		ans2=((com1.img*com2.real)-(com1.real*com2.img))/((pow(com2.real,2)+pow(com2.img,2)));
		cout<<"\nAnswer is \n";
		if(ans2<0)
		{
		cout<<ans1<<ans2<<"i";
		}
		else
		{
		cout<<ans1<<"+"<<ans2<<"i";
		}
		break;
	}
	default:
	{
		cout<<"\nWrong Choice\n";
		break;
	}
}
 getch();
}
