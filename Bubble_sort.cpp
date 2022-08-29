#include<stdio.h>

 void printArray(int *a, int n)
 {
 	for(int i = 0;i<n;i++)
 	{
 		printf("%d ",a[i]);
	 }
	 printf("\n");
 }


BubbleSort(int *a, int n)
{
	int temp;
	
	for(int i=0;i<n-1;i++)	// for passs
	{
		printf("Working on pass %d\n",i+1);
		for(int j=0;j<n-1-i;j++)	// for comp
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

 void BubbleSortAdaptive(int *a, int n)
{
	int temp;
	int isSorted=0;
	
	for(int i=0;i<n-1;i++)	// for passs
	{
		isSorted=1;
		printf("Working on pass %d\n",i+1);
		for(int j=0;j<n-1-i;j++)	// for comp
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(isSorted)
		{
			return;
		}
	}
}
int main()
{
	
	int a[]={2, 4, 12, 23, 43, 45, 123};
	int n=sizeof(a)/sizeof(a[0]);
	
	printArray(a, n);
	printf("The array after bubble sorting is \n");
//	BubbleSort(a, n);
	BubbleSortAdaptive(a,n);
	printArray(a,n);

	
	return 0;

}

