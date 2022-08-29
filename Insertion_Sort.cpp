#include<stdio.h>

void printArray(int *A, int n)
 {
 	for(int i = 0;i<n;i++)
 	{
 		printf("%d ",A[i]);
	 }
	 printf("\n");
 }
 
  void InsertionSort(int *A, int n)
  {
  	int key;
  	int j;
  	for(int i=1;i<=n-1;i++)
  	{
  		key=A[i];
  		j=i-1;
  		
  		while(j>=0 && A[j]>key)
  		{
  			A[j+1]=A[j];
  			j--;
		}
		  A[j+1]=key;
	  }
  }
 
int main()
{
	int a[]={34,89,76,16,12};
	int n=sizeof(a)/sizeof(a[0]);
	printArray(a,n);
	InsertionSort(a, n);
	printf("Array after Insertion Sort is : \n");
	printArray(a, n);
	
	return 0;

}

