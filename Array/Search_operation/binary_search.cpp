#include<iostream.h>
#include<conio.h>
#define SIZE 10
int arr[SIZE];
void binary_search(int[],int);
void sort(int[]);
void main()
{
	int value,i;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		cout<<endl<<"enter a no";
		cin>>arr[i];
	}
	cout<<endl<<"enter value to search";
	cin>>value;
	sort(arr);
	cout<<endl<<"sorted array: ";
	for(i=0;i<SIZE;i++)
	{
		cout<<endl<<arr[i];
	}
	binary_search(arr,value);
	getch();
} 
void sort(int arr[])
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
}
void binary_search(int arr[],int value)
{
	int low,high,mid;
	low=0;
	high=SIZE-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==value)
		{
			cout<<endl<<"successfully data found at "<<mid+1;
			break;
		}
		else if(value<arr[mid])
		{
			high=mid-1;
		}
		else if(value>arr[mid])
		{
			low=mid+1;
		}
	}
	if(low>high)
	{
		cout<<endl<<"No data found";
	}
}