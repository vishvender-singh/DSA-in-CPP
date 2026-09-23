#include<iostream.h>
#include<conio.h>

void array_merging(int[], int[]);

void main()
{
    int arr1[5], arr2[5];
    int i;
    clrscr();
    
    cout<<endl<<"Enter the data into first array";
    for(i=0; i<=4; i++)
    {
        cout<<endl<<"enter a no";
        cin>>arr1[i];
    }
    
    cout<<endl<<"Enter the data in second array";
    for(i=0; i<=4; i++)
    {
        cout<<endl<<"enter a no";
        cin>>arr2[i];
    }
    
    array_merging(arr1, arr2);
    getch();
}

void array_merging(int arr1[], int arr2[])
{
    int arr3[10];
    int i;
    
    for(i=0; i<=9; i++)
    {
        if(i<=4)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i-5];
        }
    }
    
    cout<<endl<<"Array after merging";
    for(i=0; i<=9; i++)
    {
        cout<<endl<<arr3[i];
    }
}
