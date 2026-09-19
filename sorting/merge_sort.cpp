//merge sort:
#include<iostream.h>
#include<conio.h>
#define N1 5
#define N2 5 #define N3 10
void merge(int arr1[],int arr2[],int arr3[])
{
int i;
for(i=0;i<N3;i++)
{
if(i<N1)
{
arr3[i]=arr1[i];
}
else
{
arr3[i]=arr2[i-N1];
}
}
}
void sort(int arr[])
{
int i,j,temp;
for(i=0;i<N3-1;i++)
{
for(j=i+1;j<N3;j++)
{ if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
}
void main()
{
int arr1[N1];
int arr2[N2];
int arr3[N3];
int i;
clrscr();
cout<<endl<<"enter elements in first array";
for(i=0;i<N1;i++)
{
cout<<endl<<"enter a no";
cin>>arr1[i];
} cout<<endl<<"enter elements in second array";
for(i=0;i<N2;i++)
{
cout<<endl<<"enter a no";
cin>>arr2[i];
}
merge(arr1,arr2,arr3);
sort(arr3);
cout<<endl<<"sorted array";
for(i=0;i<N3;i++)
{
cout<<endl<<arr3[i];
}
getch();
}
