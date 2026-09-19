//selection sort:
#include<iostream.h>
#include<conio.h>
#define SIZE 10
void selection_sort(int arr[])
{
int i,j,temp;
for(i=0;i<SIZE-1;i++)
{
for(j=i+1;j<SIZE;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
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
selection_sort(arr);
cout<<endl<<"sorted array";
for(i=0;i<SIZE;i++)
{
cout<<endl<<arr[i];
}
getch();
}
