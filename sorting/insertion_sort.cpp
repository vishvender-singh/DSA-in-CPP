//insertion sort:
#include<iostream.h>
#include<conio.h>
#define SIZE 10
void insertion_sort(int arr[])
{
int i,j,temp;
for(i=1;i<SIZE;i++)
{
temp=arr[i];
j=i-1;
while(j>=0 && arr[j]>temp)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
} void main()
{
int arr[10];
int i;
clrscr();
for(i=0;i<SIZE;i++)
{
cout<<endl<<"enter a no";
cin>>arr[i];
}
insertion_sort(arr);
cout<<endl<<"sorted array";
for(i=0;i<SIZE;i++)
{
cout<<endl<<arr[i];
}
getch();
}
