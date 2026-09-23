//example of linear searching:
#include<iostream.h>
#include<conio.h>
#define SIZE 10
int arr[SIZE];
void linear_searching(int[],int);
void main()
{
	int arr[SIZE];
	int i,value;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		cout<<endl<<"enter a no";
		cin>>arr[i];
	}
	cout<<endl<<"enter a value to search";
	cin>>value;
	linear_searching(arr,value);
	getch();
}
void linear_searching(int arr[],int value)
{
	int i,pos=-1;
	for(i=0;i<SIZE;i++)
	{
	if(arr[i]==value)
	{ 
	pos=i+1;
	break;
	}
	}
	if(pos==-1)
	{
		cout<<endl<<"No data found";
	}
	else
	{
		cout<<endl<<"successfully found at "<<pos;
	}
	}