//eg of DQueue queue:
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5

class DQueue
{
private:
    int dqueue[MAXSIZE];
    int front;
    int rear;
public:
    DQueue()
    {
        front = -1;
        rear = -1;
    }

    void insertion_rear()
    {
        int num;
        if(rear==MAXSIZE-1)
        {
            cout<<endl<<"Overflow Condition";
        }
        else
        {
            cout<<endl<<"enter a no";
            cin>>num;
            if(rear==-1 || front==-1)
            {
                front++;
                rear++;
                dqueue[rear]=num;
            }
            else
            {
                rear++;
                dqueue[rear]=num;
            }
            cout<<endl<<"successfully inserted";
        }
    }

    void deletion_front()
    {
        int num;
        if(front==-1)
        {
            cout<<endl<<"underflow condition";
        }
        else
        {
            num=dqueue[front];
            cout<<endl<<"deleted item is "<<num;
            if(front==rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
        }
    }

    void insertion_front()
    {
        int num;
        if(front==0)
        {
            cout<<endl<<"overflow condition";
        }
        else
        {
            cout<<endl<<"enter a no";
            cin>>num;
            if(front==-1)
            {
                front++;
                rear++;
                dqueue[front]=num;
            }
            else
            {
                front--;
                dqueue[front]=num;
            }
            cout<<endl<<"successfully inserted...";
        }
    }

    void deletion_rear()
    {
        int num;
        if(rear==-1)
        {
            cout<<endl<<"underflow condition";
        }
        else
        {
            num=dqueue[rear];
            cout<<endl<<"deleted item is "<<num;
            if(front==rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                rear--;
            }
        }
    }

    void traversing()
    {
        int i;
        if(front==-1 || rear==-1)
        {
            cout<<endl<<"Underflow Condition";
        }
        else
        {
            for(i=front;i<=rear;i++)
            {
                cout<<endl<<dqueue[i];
            }
        }
    }

    void searching()
    {
        int num,i;
        if(front==-1)
        {
            cout<<endl<<"underflow condition";
        }
        else
        {
            cout<<endl<<"enter data to be searched";
            cin>>num;
            for(i=front;i<=rear;i++)
            {
                if(dqueue[i]==num)
                {
                    cout<<endl<<"successfully found at "<<i;
                    break;
                }
            }
            if(i>rear)
            {
                cout<<endl<<"No data found";
            }
        }
    }
};

void main()
{
    DQueue obj;
    int choice;
    clrscr();
    while(1)
    {
        cout<<endl<<"Simple Queue Operations:";
        cout<<endl<<"1. insertion at rear";
        cout<<endl<<"2. insertion at front";
        cout<<endl<<"3. deletion at front";
        cout<<endl<<"4. deletion at rear";
        cout<<endl<<"5. traversing";
        cout<<endl<<"6. searching";
        cout<<endl<<"7. exit";
        cout<<endl<<"----------";
        cout<<endl<<"enter your choice";
        cin>>choice;
        switch(choice)
        {
            case 1:
                obj.insertion_rear();
                clrscr();
                break;
            case 2:
                obj.insertion_front();
                break;
            case 3:
                obj.deletion_front();
                break;
            case 4:
                obj.deletion_rear();
                break;
            case 5:
                obj.traversing();
                break;
            case 6:
                obj.searching();
                break;
            case 7:
                exit(1);
            default:
                cout<<endl<<"Invalid choice";
        }
    }
    getch();
}
