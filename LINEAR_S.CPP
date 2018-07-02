#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int mat, phy, chem, comp, eng, sum;
	float per;
	cout<<"Enter marks of maths out of 100 -";
	cin>>mat;
	cout<<"Enter marks of physics out of 100 -";
	cin>>phy;
	cout<<"Enter marks of chemistry out of 100 -";
	cin>>chem;
	cout<<"Enter marks of computer out of 100 -";
	cin>>comp;
	cout<<"Enter marks of english out of 100 -";
	cin>>eng;
	sum=mat+phy+chem+comp+eng;
	cout<<"the sum of all marks out of 500 is "<<sum;
	per= (float)(sum*100)/500;
	cout.setf(ios::fixed);
	cout<<"The percentge of marks obtained is"<<setprecision(1)<<per;
	getch();
}
