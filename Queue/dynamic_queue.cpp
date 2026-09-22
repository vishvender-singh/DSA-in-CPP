#include <iostream.h>
#include <conio.h>
#include <process.h>
#define NULL 0

class Queue
{
private:
    Queue *next;
    int data;
public:
    void insertion();
    void deletion();
    void traversing();
    void searching();
};

Queue *front=NULL;
Queue *rear=NULL;
Queue *head=NULL;

void Queue::insertion()
{
    int num;
    Queue *temp;
    cout <<endl <<"Enter a number:";
    cin >> num;
    temp= new Queue;
    temp-> data=num;
    temp->next=NULL;
    if(rear==NULL)
    {
        head=temp;
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear = rear->next; 
    }
    cout <<endl <<"Successfully inserted";
}

void Queue::deletion()
{
    Queue *temp;
    if(rear==NULL)
    {
        cout <<endl <<"Underflow condition";
    }
    else
    {
        if(front==rear)
        {
            temp=front;
            front=NULL;
            rear=NULL;
            head=NULL;
        }
        else
        {
            temp=front;
            front = front->next;
            head=front;
        }
        cout <<endl <<"Deleted node: "<< temp->data;
        delete temp;
    }
}

void Queue::traversing()
{
    Queue *temp;
    if(front==NULL)
    {
        cout <<endl <<"Underflow condition";
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            cout <<endl <<temp->data;
            temp=temp-> next;
        }
    }
}

void Queue::searching()
{
    int value, count = 0; 
    Queue *temp;
    if(front==NULL)
    {
        cout <<endl <<"Underflow condition";
    }
    else
    {
        cout <<endl <<"Enter value to search";
        cin >>value;
        temp=front;
        while(temp!=NULL)
        {
            count++;
            if(temp->data ==value)
            {
                cout <<endl <<"Succesfully found at " <<count;
                break;
            }
            temp=temp-> next;
        }
        if(temp == NULL || temp->next == NULL) 
        {
            cout <<endl <<"No data found";
        }
    }
}

void main()
{
    clrscr();
    int ch;
    Queue q;
    while(1)
    {
        clrscr();
        cout<<endl<<"QUEUE WITH LINKED LIST: ";
        cout<<endl<<"-----------------------";
        cout<<endl<<"1. INSERTION";
        cout<<endl<<"2. DELETION";
        cout<<endl<<"3. TRAVERSING";
        cout<<endl<<"4. SEARCHING";
        cout<<endl<<"5. EXIT";
        cout<<endl<<"-----------------------";
        cout<<endl<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                q.insertion();
                break;
            case 2:
                q.deletion();
                break;
            case 3:
                q.traversing();
                break;
            case 4:
                q.searching();
                break;
            case 5:
                exit(1);
            default:
                cout<<endl<<"Enter a valid choice!";
        }
        getch();
    }
}
