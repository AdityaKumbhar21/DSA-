// Deletion in an Array

#include<stdio.h>

void display(int arr[], int n)
{
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int indDeletion(int arr[], int size, int index)
{
	for(int i=index;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}

}


int main()
{
	int arr[100]={7, 8, 12, 27, 88};
	int size=5, index=3;
	display(arr,size);
	indDeletion(arr, size, index);
	size -= 1;
	printf("The array after deletion is: \n");
	display(arr,size);
	return 0;
}
