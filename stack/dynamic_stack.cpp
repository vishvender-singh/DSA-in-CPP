#include<iostream.h>
#include<conio.h>
#include<process.h>
#define NULL 0
class Stack
{
private:
int data;
Stack *next;
public:
void push();
void pop();
void peek(); DYNAMIC STACK • DATA STRUCTURES
void traverse();
void search();
};
Stack *head=NULL;
Stack *top=NULL;
void Stack:: push()
{
int num;
Stack *temp;
cout<<"enter a no";
cin>>num;
temp=new Stack;
temp->data=num;
temp->next=NULL;
if(head==NULL)
{
head=temp;
top=temp;
}
else
{
top->next=temp;
top=top->next;
}
cout<<endl<<"successfully inserted";
}
void Stack:: pop()
{
Stack *temp,*p;
if(head==NULL)
{
cout<<endl<<"underflow ";
}
else
{
if(head==top)
{
temp=head;
cout<<endl<<"deleted node is :"<<temp->data;
delete temp;
head=NULL;
top=NULL;
}
else
{
p=head;
while(p->next!=top) DYNAMIC STACK • DATA STRUCTURES
{
p=p->next;
}
temp=top;
p->next=NULL;
top=p;
cout<<endl<<"deleted node is :"<<temp->data;
}
 }
}
void Stack:: traverse()
{
Stack *temp;
if(head==NULL)
{
cout<<endl<<"underflow condition";
}
else
{
temp=head;
while(temp!=NULL)
{
cout<<endl<<temp->data;
temp=temp->next;
}
}
}
void Stack::peek()
{
Stack *temp;
if(head==NULL)
{
cout<<endl<<"underflow";
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
cout<<endl<<"value of top is :"<<temp->data;
}
}
void Stack::search() DYNAMIC STACK • DATA STRUCTURES
{
Stack *temp;
int num,count=0;
if(head==NULL)
{
cout<<endl<<"underflow condtion";
}
else
{
cout<<endl<<"enter no";
cin>>num;
temp=head;
while(temp!=top)
{
count++;
if(num=temp->data)
{
cout<<endl<<"data found at :"<<count+1;
break;
}
temp=temp->next;
}
if(temp==NULL)
{
cout<<endl<<"data not found";
}
}
}
void main()
{
clrscr();
int choice;
Stack obj;
while(1)
{
cout<<endl<<"welcome to dynamic stack operation";
cout<<endl<<"enter 1 for push";
cout<<endl<<"enter 2 for pop";
cout<<endl<<"enter 3 for peek";
cout<<endl<<"enter 4 for traverse";
cout<<endl<<"enter 5 for search";
cout<<endl<<"enter 6 for exit";
cout<<endl<<"------------------------";
cout<<endl<<"enter your choice";
cin>>choice; DYNAMIC STACK • DATA STRUCTURES
switch(choice)
{
case 1:
obj.push();
getch();
clrscr();
break;
case 2:
obj.pop();
getch();
clrscr();
break;
case 3:
obj.peek();
getch();
clrscr();
break;
case 4:
obj.traverse();
getch();
clrscr();
break;
case 5:
obj.search();
getch();
clrscr();
break;
case 6:
exit(1);
default:
cout<<endl<<"invalid choice";
}
}
getch();
}
