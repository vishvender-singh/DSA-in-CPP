#include<iostream.h>
#include<conio.h>

void array_deletion(int[], int);

void main()
{
    int arr[10];
    int i, value;
    clrscr();
    
    for(i=0; i<=9; i++)
    {
        cout<<endl<<"enter a no";
        cin>>arr[i];
    }
    
    cout<<endl<<"enter value to deletion";
    cin>>value;
    
    array_deletion(arr, value);
    getch();
}

void array_deletion(int arr[], int value)
{
    int i, pos=-1;
    
    for(i=0; i<=9; i++)
    {
        if(arr[i] == value)
        {
            pos = i;
            break;
        }
    }
    
    if(pos == -1)
    {
        cout<<endl<<"No data found";
    }
    else
    {
        for(i=pos; i<=8; i++)
        {
            arr[i] = arr[i+1];
        }
        
        cout<<endl<<"Array after deletion";
        for(i=0; i<=8; i++)
        {
            cout<<endl<<arr[i];
        }
    }
}
