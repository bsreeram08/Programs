#include<iostream.h>
#include<conio.h>
int main()
{
	const double e = 2.71828;
	double result, y;
	cout<< "enter value of y:";
	cin>>y;
	result= 2 - y * exp (2 * y) + pow (4 , y) ;
	cout<<" the result of the given expression is :" << result;
	return 0;
}