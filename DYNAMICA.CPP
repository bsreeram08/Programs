#include <iostream.h>
#include<conio.h>
int *rollno;
float *marks;
void main()
{
	clrscr();
	int size;
	cout<<"Enter no of array in the elements: ";
	cin>>size;
	rollno=new int(size);
	marks=new float(size);
	if((!rollno)||(!marks))
	{
		cout<<"LACK OF MEMORY......\nAbording....";
	}
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the rollno and marks of the student"<<(i+1)<<":";
		cin>>rollno[i]>>marks[i];
	}
	cout<<"\tRollNo\tMarks\n:";
	for(i=0;i<size;i++)
	{
		cout<<"\t"<<rollno[i]<<"\t\t"<<marks[i]<<"\n";
	}
	delete[]rollno;
	delete[]marks;
	getch();
}
