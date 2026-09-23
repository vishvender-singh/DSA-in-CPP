#include<iostream.h>
#include<conio.h>

void array_insertion(int[], int, int);

void main()
{
    int arr[11];
    int i, value, pos;
    clrscr();
    
    for(i=0; i<=9; i++)
    {
        cout<<endl<<"enter a no";
        cin>>arr[i];
    }
    
    cout<<endl<<"enter new element";
    cin>>value;
    
    cout<<endl<<"enter position";
    cin>>pos;
    
    array_insertion(arr, value, pos);
    getch();
}

void array_insertion(int arr[], int value, int pos)
{
    int i;
    for(i=9; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    cout<<endl<<"Array after insertion";
    for(i=0; i<=10; i++)
    {
        cout<<endl<<arr[i];
    }
}
