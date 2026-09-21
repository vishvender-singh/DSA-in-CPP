#include<iostream.h>
#include<conio.h>
#include<process.h>
#define null 0
class Node
 {
	private:
	int data;
	Node *next;
	Node *prev;
	public:
	void creation();
	void traverse();
	void insertion_beg();
	void insertion_mid();
	void insertion_end();
	void deletion_beg();
	void deletion_mid();
	void deletion_end();
	void search();
};
Node * head=null ;
void Node::creation()
 {
	int num;
	Node *temp;
	cout<<endl<<"enter no (enter 0 for end)";
	cin>>num;
	while(num!=0)
	{
 	if(head==null)
	{
	 head=new Node;
	 head->prev=null;
	 head->data=num;
	 head->next=null; 
	 temp=head;
	}
	else
	{
	 temp->next=new Node;
	 temp->next->prev=temp;
	 temp=temp->next;
	 temp->data=num;
	 temp->next=null;
	}
	cin>>num;
	}
}
void Node:: traverse()
 {
	Node *p;
	if(head==null)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	p=head;
	while(p!=null)
	{
	cout<<endl<<"------>"<<p->data;
	p=p->next;
	}
	}
}
void Node ::insertion_beg()
 {
	Node *temp;
	int num;
	if(head==null)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"enter no";
	cin>>num;
	temp=new Node;
	temp->prev=null;
	temp->data=num;
	temp->next=head;
	head->prev=temp;
	head=temp;
	cout<<endl<<"successfuly inserted";
	}
}
void Node ::insertion_mid()
 {
	Node *temp,*p;
	int num,num2;
	if(head==null)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"enter no";
	cin>>num;
	cout<<endl<<"enter a no after that you want to insert ";
	cin>>num2;
	p=head;
	 while(p!=null)
	 {
		if(p->data==num)
		{
		temp=new Node;
		temp->prev=p;
		temp->data=num;
		temp->next=p->next;
		p->next=temp;
		temp->next->prev=temp;
		cout<<endl<<"successfully inserted";
		break;
		}
		p=p->next;
	 } 
	}
} 
void Node::insertion_end()
{
	Node *temp;
	Node *p;
	int num;
	if(head==null)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"enter no";
	cin>>num;
	temp=new Node;
	temp->data=num;
	temp->next=null;
	p=head;
	while(p->next!=null)
	 {
	 p=p->next;
	 }
	temp->prev=p;
	p->next=temp;
	 }
}
void Node::deletion_beg()
{
	Node *temp;
	if(head==null)
	{
	cout<<endl<<"underflow ";
	}
	else
	{
	temp=head;
	head=head->next;
	head->prev=null;
	cout<<endl<<"deleted successfully";
	delete temp;
	}
} 
void Node::deletion_mid()
{
	Node *temp;
	int num;
	if(head==null)
	{
	cout<<endl<<"underflow";
	}
	else
	{
	cout<<"enter no";
	cin>>num;
	temp=head;
	while(temp!=null)
	{
	if(temp->data==num)
	{
	break;
	}
	temp=temp->next;
	}
	if(temp==null)
	{
	cout<<endl<<"data not found";
	}
	else
	{
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	cout<<endl<<"deleted node is"<<temp->data;
	delete temp;
	}
	}
}
void Node::deletion_end()
{
	Node *temp;
	if(head==null)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	temp=head;
	while(temp->next!=null)
	{
	temp=temp->next;
	}
	temp->prev->next=null;
	cout<<endl<<"deleted node is :"<<temp->data;
	delete temp;
	}
}
void Node::search()
{
	Node *p;
	int num,count=0;
	if(head==null)
	{
	cout<<endl<<"underflow condition";
	}
	else
	{
	cout<<endl<<"enter no ";
	cin>>num;
	p=head;
	while(p!=null)
	{
	count++;
	if(p->data==num)
	{
	cout<<endl<<"Successfully found att:"<<count;
	break;
	}
	p=p->next;
	}
	if(p==null)
	{
	cout<<endl<<"data not found";
	}
	} 
}
void main()
{
	clrscr();
	int choice;
	Node obj;
	while(1)
	{
	 Cout<<endl<<”Welcome to Doubly Linked List Operations:”;
	 cout<<endl<<"1. Creation";
 	 cout<<endl<<"2. Traverse";
	 cout<<endl<<"3. Insertion at Begining";
	 cout<<endl<<"4. Insertion at Mid";
	 cout<<endl<<"5. Insertion at End";
  	 cout<<endl<<"6. Deletion at Begining";
	 cout<<endl<<"7. Deletion at Mid";
	 cout<<endl<<"8. Deletion at End";
	 cout<<endl<<"9. Searching";
	 cout<<endl<<"10. Exit";
 	 cout<<endl<<"-----------------------------------------------------------";
	 cout<<endl<<"enter your choice";
 	 cin>>choice;
	 switch(choice)
	 {
		case 1:
			obj.creation();
			getch();
			clrscr();
			break;
		case 2:
			obj.traverse();
			getch();
			clrscr();
			break;
		case 3:
			obj.insertion_beg() ;
			getch();
			clrscr();
			break;
		case 4:
			obj.insertion_mid();
			getch();
			clrscr(); 
			break;
		case 5:
			obj.insertion_end();
			getch();
			clrscr();
			break;
		case 6:
			obj.deletion_beg();
			getch();
			clrscr();
			break;
		case 7:
			obj.deletion_mid();
			getch();
			clrscr();
			break;
		case 8:
			obj.deletion_end();
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