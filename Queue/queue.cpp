//eg of simple queue:
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5

class Queue
{
private:
    int queue[MAXSIZE];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void insertion()
    {
        int num;
        if(rear == MAXSIZE - 1)
        {
            cout << endl << "Overflow Condition";
        }
        else
        {
            cout << endl << "enter a no";
            cin >> num;
            if(rear == -1 || front == -1)
            {
                front++;
                rear++;
                queue[rear] = num;
            }
            else
            {
                rear++;
                queue[rear] = num;
            }
            cout << endl << "successfully inserted";
        }
    }

    void deletion()
    {
        int num;
        if(front == -1)
        {
            cout << endl << "underflow condition";
        }
        else
        {
            num = queue[front];
            cout << endl << "deleted item is " << num;
            if(front == rear)
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

    void traversing()
    {
        int i;
        if(front == -1 || rear == -1)
        {
            cout << endl << "Underflow Condition";
        }
        else
        {
            for(i = front; i <= rear; i++)
            {
                cout << endl << queue[i];
            }
        }
    }

    void searching()
    {
        int num, i;
        if(front == -1)
        {
            cout << endl << "underflow condition";
        }
        else
        {
            cout << endl << "enter data to be searched";
            cin >> num;
            for(i = front; i <= rear; i++)
            {
                if(queue[i] == num)
                {
                    cout << endl << "successfully found at " << i;
                    break;
                }
            }
            if(i > rear)
            {
                cout << endl << "No data found";
            }
        }
    }
};

void main()
{
    Queue obj;
    int choice;
    clrscr();
    while(1)
    {
        cout << endl << "Simple Queue Operations:";
        cout << endl << "1. insertion";
        cout << endl << "2. deletion";
        cout << endl << "3. traversing";
        cout << endl << "4. searching";
        cout << endl << "5. exit";
        cout << endl << "----------------";
        cout << endl << "enter your choice";
        cin >> choice;

        switch(choice)
        {
        case 1:
            obj.insertion();
            clrscr();
            break;
        case 2:
            obj.deletion();
            break;
        case 3:
            obj.traversing();
            break;
        case 4:
            obj.searching();
            break;
        case 5:
            exit(1);
        default:
            cout << endl << "Invalid choice";
        }
    }
    getch();
}
