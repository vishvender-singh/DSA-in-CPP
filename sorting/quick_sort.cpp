//Quick sort
#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b)
	{
	 int temp;
	 temp=*a;
	 *a=*b;
	 *b=temp;
	}
int partition(int arr[],int start,int end)
	{
	 int index=start-1;
	 int pivot=arr[end];
	 int j;
		for(j=start;j<end;j++)
		{
		 if(arr[j]<=pivot)
			{
			  index++;
			  swap(&arr[j],&arr[index]);
			}
		}
		index++;
	 swap(&arr[end],&arr[index]);
	 return index;
	}
void quicksort(int arr[],int start,int end)
	{
		if(start<end)
		{
			int pivotindex=partition(arr,start,end);
			quicksort(arr,start,pivotindex-1);
			quicksort(arr,pivotindex+1,end);
		}
	}
void main()
	{
	 int arr[5];
	 int i;
	 clrscr();
	 for(i=0;i<=4;i++)
	 {
		cout<<endl<<"enter a no";
		cin>>arr[i];
	  }
	 quicksort(arr,0,4);
	 cout<<endl<<"sorted array";
	 for(i=0;i<=4;i++)
	 {
		cout<<endl<<arr[i];
	 }
getch();
}
