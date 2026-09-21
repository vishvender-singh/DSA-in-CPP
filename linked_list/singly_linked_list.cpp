//eg of singly linked list:
#include<iostream.h>
#include<conio.h>
#include<process.h>
#define NULL 0
class Node
	{
	private:
	int data;
	Node *next;
	public:
	void create();
	void traverse();
	void insert_beg();
	void insert_mid();
	void insert_end();
	void delete_beg();
	void delete_mid();
	void delete_end();
	void search(); 
	};
Node *head=NULL;
void Node::create()
 {
	int num;
	Node *temp;
	cout<<endl<<"enter a no (type 0 to end)";
	cin>>num;
	while(num!=0)
	{
	if(head==NULL)
	{
	head=new Node;
	head->data=num;
	head->next=NULL;
	temp=head;
	}
	else
	{
	 temp->next=new Node;
	 temp=temp->next;
	 temp->data=num;
 	temp->next=NULL;
	}
	cin>>num;
        }
 }
void Node::traverse()
 {
	Node *p;
	if(head==NULL)
	{
	cout<<endl<<"Underflow condition";
	}
	else
	{
	p=head;
	while(p!=NULL)
	{
	cout<<"\t----->"<<p->data;
	p=p->next;
	}
	}
}
void Node::insert_beg()
 {
	int num;
	Node *temp;
	if(head==NULL)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"enter a no";
	cin>>num;
	temp=new Node;
	temp->data=num;
	temp->next=head;
	head=temp;
	cout<<endl<<"successfully inserted...";
 	}
}
void Node::insert_mid()
 {
	int num,num2;
	Node *temp,*p;
	if(head==NULL)
 	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"enter a no";
	cin>>num;
	cout<<endl<<"enter no after that you want to insert";
	cin>>num2;
	temp=new Node;
	temp->data=num;
	p=head;
	while(p!=NULL)
	{
	if(p->data==num2)
	{
	break;
	}
	p=p->next;
	}
	temp->next=p->next;
	p->next=temp;
	cout<<endl<<"successfully inserted....";
        }
}
void Node::insert_end()
{
	 int num;
	 Node *temp,*p;
	if(head==NULL)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	 cout<<endl<<"enter a no";
	 cin>>num;
	 p=head;
	 while(p->next!=NULL)
	 {
	p=p->next;
	 }
	 temp=new Node;
	 temp->data=num;
	 temp->next=NULL;
	 p->next=temp;
	 cout<<endl<<"successfully inserted....";
	}
}
void Node::delete_beg()
 {
	Node *temp;
	int num;
	if(head==NULL)
	{
	cout<<endl<<"undeflow condition";
	}
	else
	{
	temp=head;
	head=temp->next;
	cout<<endl<<"deleted node is "<<temp->data;
	delete temp;
	}
}
void Node:: delete_mid()
 {
	Node *temp,*p;
	int num;
	if(head==NULL)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"enter a number to delete ";
	cin>>num;
	p=head;
	temp=head;
	while(temp->data!=num)
	{
	p=temp;
	temp=temp->next;
	}
	p->next=temp->next;
	cout<<endl<<"deleted node is "<<temp->data;
	delete temp;
	}
}
void Node:: delete_end()
{
	Node *temp,*p;
	int num;
	if(head==NULL)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	p=head;
	temp=head;
	while(temp->next!=NULL)
	{
	p=temp;
	temp=temp->next;
	}
	p->next=NULL;
	cout<<endl<<"deleted node is "<<temp->data;
	delete temp;
	}
}
void Node::search()
 {
	int num,count=0;
	Node *temp;
	if(head==NULL)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"enter a number to search";
	cin>>num;
	temp=head;
	while(temp!=NULL)
	{
	count++;
	if(temp->data==num)
	{
	cout<<endl<<"successfully found at "<<count;
	break;
	}
	temp=temp->next;
	}
	if(temp==NULL)
	{
	cout<<endl<<"No data Found";
	}
	}
}
void main()
{
	clrscr();
	Node obj;
	int choice;
	while(1)
	{
	cout<<endl<<"Welcome to Singly Linked List Operations:";
	cout<<endl<<"----------------------------------------";
	cout<<endl<<"1. Create";
	cout<<endl<<"2. Traverse";
	cout<<endl<<"3. Insert At Begining";
	cout<<endl<<"4. Insert At Mid";
	cout<<endl<<"5. Insert At End";
	cout<<endl<<"6. Delete At Begining";
	cout<<endl<<"7. Delete At Mid";
	cout<<endl<<"8. Delete At End";
	cout<<endl<<"9. Search";
	cout<<endl<<"10. Exit";
	cout<<endl<<"====================";
	cout<<endl<<"enter your choice";
	cin>>choice;
	switch(choice)
	{
	case 1:
		getch();
		clrscr();
		break;
	case 2:
		obj.traverse();
		getch();
		clrscr();
		break;
	case 3:
		obj.insert_beg();
		getch();
		clrscr();
		break;
	case 4:
		obj.insert_mid();
		getch();
		clrscr();
		break;
	case 5:
		obj.insert_end();
		getch();
		clrscr();
		break;
	case 6:
		obj.delete_beg();
		getch();
		clrscr();
		break;
	case 7:
		obj.delete_mid();
		getch();
		clrscr();
		break;
	case 8:
		obj.delete_end();
		getch();
		clrscr();
		break;
	case 9:
		obj.search();
		getch();
		clrscr();
		break;
	case 10:
		exit(1);
	default:
		cout<<endl<<"Invalid choice";
	}
}
getch();
}