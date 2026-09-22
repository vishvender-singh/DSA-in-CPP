//eg of cicular queue
#include<iostream.h>
#include<conio.h>
#include<process.h>
#define MAX 5

class CQueue
{
private:
    int front;
public:
    int rear;
    int cqueue[MAX];

    CQueue()
    {
        front = -1;
        rear = -1;
    }

    void insertion()
    {
        int num;
        // Check for overflow
        if(((rear+1)%MAX)==front)
        {
            cout<<endl<<"overflow condition";
        }
        else
        {
            cout<<endl<<"enter a no";
            cin>>num;
            
            if(rear==-1)
            {
                front = 0;
                rear = 0;
                cqueue[rear]=num;
            }
            else
            {
                rear=(rear+1)%MAX;
                cqueue[rear]=num;
            }
            cout<<endl<<"successfully inserted...";
        }
    }

    void deletion()
    {
        int num;
        // Check for underflow
        if(front==-1)
        {
            cout<<endl<<"underflow";
        }
        else
        {
            num=cqueue[front];
            cout<<endl<<"deleted item is "<<num;
            
            if(front==rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front=(front+1)%MAX;
            }
        }
    }

    void traverse()
    {
        int i;
        if(front == -1)
        {
            cout<<endl<<"underflow";
        }
        else
        {
            i=front;
            while(1)
            {
                cout<<endl<<cqueue[i];
                if(i==rear)
                {
                    break;
                }
                i=(i+1)%MAX;
            }
        }
    }
};

void main()
{
    CQueue obj;
    int choice;
    clrscr();
    
    while(1)
    {
        cout<<endl<<"Circular Operation:";
        cout<<endl<<"1. insertion";
        cout<<endl<<"2. deletion";
        cout<<endl<<"3. traverse";
        cout<<endl<<"4. exit";
        cout<<endl<<"--------------------";
        cout<<endl<<"enter your choice";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
                obj.insertion();
                getch();
                clrscr();
                break;
            case 2:
                obj.deletion();
                getch();
                clrscr();
                break;
            case 3:
                obj.traverse();
                getch();
                clrscr();
                break;
            case 4:
                exit(1);
            default:
                cout<<endl<<"Invalid choice";
        }
    }
    getch();
}
