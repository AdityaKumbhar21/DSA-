// Binary search

#include<stdio.h>

int BinarySearch(int arr[],int size,int element)
{
	int low,mid,high;
	low=0;
	high=size-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]<element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}

int main()
{
	int arr[]={1,23,45,52,63,75,77,96,104};
	int size=sizeof(arr)/sizeof(int);
	int element=52;
	int searchIndex = BinarySearch(arr,size,element);
	//LinearSearch(arr,size,element);
	printf("The element %d was found at index %d \n",element, searchIndex);
	
	return 0;
}
