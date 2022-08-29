// Linear search

#include<stdio.h>

int LinearSearch(int arr[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
				return i;
		}
	
	}
	return -1;
}

int main()
{
	int arr[]={1,23,45,2,13,45,67,76,54};
	int size=sizeof(arr)/sizeof(int);
	int element=2;
	int searchIndex = LinearSearch(arr,size,element);
	//LinearSearch(arr,size,element);
	printf("The element %d was found at index %d \n",element, searchIndex);
	
	return 0;
}
