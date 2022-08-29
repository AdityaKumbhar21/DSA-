#include<stdio.h>

void printArray(int *a, int n)
 {
 	for(int i = 0;i<n;i++)
 	{
 		printf("%d ",a[i]);
	 }
	 printf("\n");
 }
 
 void SelectionSort(int *a, int n)
 {
 	printf("After Selection Sort :\n");
 	int IndexOfmin, temp;
 	
 	for(int i=0; i<n-1;i++)
 	{
 		IndexOfmin = i;
 		
 		for(int j=i+1;j<n;j++)
 		{
 			if(a[j]<a[IndexOfmin])
 			{
 				IndexOfmin=j;
			}
		 }
		 temp=a[i];
		 a[i]=a[IndexOfmin];
		 a[IndexOfmin]=temp;
	}
 }
 
 int main()
 {
 	int a[]={2,7,5,12,10};
 	int n=sizeof(a)/sizeof(a[0]);
 	printArray(a,n);
 	SelectionSort(a,n);
 	printArray(a,n);
 	return 0;
 }
