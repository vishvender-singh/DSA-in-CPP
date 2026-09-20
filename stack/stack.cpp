#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
class Stack
{
private:
	int stack[SIZE];
	int top;
	public:
	Stack()
	{
	top=-1;
	}
	void push()
	{
	int num;
	if(top==SIZE-1)
	{
	cout<<endl<<"overflow condition";
	}
	else
	{
	cout<<endl<<"enter a no";
	cin>>num;
	top++;
	stack[top]=num;
	cout<<endl<<"successfully inserted";
	}
	}
	void pop()
	{
	int num;
	if(top==-1)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	num=stack[top];
	cout<<endl<<"deleted item is "<<num;
	top--;
	} 
	}
	void peek()
	{
	if(top==-1)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"top most item is "<<stack[top];
	}
	}
	void search()
	{
	int num,i,flag=0;
	if(top==-1)
	{
	cout<<endl<<"underflow cndition";
	}
	else
	{
	cout<<endl<<"enter a number to search";
	cin>>num;
	for(i=0;i<=top;i++)
	{
	if(num==stack[i])
	{
	cout<<endl<<"successfully found at "<<i+1;
	flag=1;
	break;
	}
	}
	if(flag==0)
	{
	cout<<endl<<"No data found";
	}
	}
	}
	void traverse()
	{
	int i;
	if(top==-1)
	{
	cout<<endl<<"underflow condition";
	}
	else 
	{
	for(i=0;i<=top;i++)
	{
	cout<<endl<<stack[i];
	}
	}
	}
};
void main()
	{
	Stack s;
	int choice;
	clrscr();
	while(1)
	{
		cout<<endl<<"Stack Operations:";
		cout<<endl<<"1. push";
		cout<<endl<<"2. pop";
		cout<<endl<<"3. peek";
		cout<<endl<<"4. search";
		cout<<endl<<"5. traverse";
		cout<<endl<<"6. exit";
		cout<<endl<<"------------";
		cout<<endl<<"enter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				s.push();
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.peek();
				break;
			case 4:
				s.search();
				break;
			case 5:
				s.traverse();
				break;
			case 6:
				exit(1);
			default: 
				cout<<endl<<"invalid choice";
		}
	}
 getch();
}