#include<iostream.h>
#include<conio.h>
#define SIZE 10
void bubble_sort(int arr[])
{
int i,j,temp;
for(i=0;i<SIZE-1;i++)
{
for(j=0;j<SIZE-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
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
bubble_sort(arr);
cout<<endl<<"sorted array";
for(i=0;i<SIZE;i++)
{
cout<<endl<<arr[i];
}
getch();
}
