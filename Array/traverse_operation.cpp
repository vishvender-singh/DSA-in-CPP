//eg of traversing:

#include<iostream.h>
#include<conio.h>
#define SIZE 10
int arr[SIZE];
void traverse(int[]);
void main()
	{
		int i;
		clrscr();
		for(i=0;i<SIZE;i++)
		{
			cout<<endl<<"enter a no";
			cin>>arr[i];
		}
	traverse(arr);
	getch();
	}

void traverse(int arr[])
{
	int i;
	for(i=0;i<SIZE;i++)
	{
	cout<<endl<<arr[i];
	}
}
