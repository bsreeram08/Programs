#include<iostream.h>
#include<conio.h>
#include<process.h>
int push(int[],int&,int);
void display(int[],int);
int pop(int[],int&);
constint size=25;
void main()
{	int stack[size],top=-1,item,res;
	charch;
	while(ch!=4)
	{	cout<<" linear stack menu";
		cout<<"1. insert \n";
		cout<<"2. delete \n";
		cout<<"3. display \n";
		cout<<"4. exit \n";
		cout<<" enter your choice" ;
		cin>>ch;
		switch(ch)
		{	case '1': cout<<" enter item for insertion" ;
			cin>>item;
			res=push(stack,top,item);
			if(res==-1)
			{cout<<" overflow!!!!!!" ;exit(1);}
			cout<<" the stack now is : " ;
			display(stack,top);
			break;
		case '2': res=pop(stack,top);
			if(res==-1)
			{ cout<<"underflow!!!";exit(1);}
				else
				{ cout<<"element deleted is:"<<res<<endl;
				cout<<"the stack now is:";
display(stack,top);
				   }
				break;

		case '3' : display(stack,top);
			break;
case '4': exit(1);
			break;

					
		default: cout<<"wrong choice";
}}}

int push(int stack[],int&top,intele)
{ if(top==size-1) return-1;
	else
	{top++;stack[top]=ele;}
	return 0;
}
int pop(int stack[],int& top)
 {	int ret;
	if(top==-1)
	return -1;
	else
	 {ret=stack[top];top--; }
	return ret;
 }
void display(int stack[],int top)
 {	if(top==-1)
	return;
	for(int i=top;i>=0;i--)
		cout<<stack[i]<<endl;
 }


