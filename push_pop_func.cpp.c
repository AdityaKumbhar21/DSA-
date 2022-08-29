#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack * ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(struct stack *ptr)
{
	if(ptr->top == ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(struct stack *ptr,int val)
{
	if(isFull(ptr))
	{
		printf("Stack overflow! cannot push %d\n",val);
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top]==val;
	}
	
}

int pop(struct stack * ptr)
{
	if(isEmpty(ptr))
	{
		printf("Stack underflow! cannot pop ");
		return -1;
	}
	else
	{
		int val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}

int peek(struct stack *sp,int i)
{
	int arrayInd=sp->top-i+1;
	if(arrayInd<0)
	{
		printf("Invalid position \n");
	}
	else{
		sp->arr[arrayInd];
	}
}

int main()
{
	struct stack *sp=(int *)malloc(sizeof(int));
	sp->size=3;
	sp->top=-1;
	sp->arr=(int *)malloc(sp->size*sizeof(int));
	push(sp,4);
	push(sp,5);
	push(sp,6);
//	printf("Pushed %d in the stack \n",push(sp,6));

	printf("After pushing Full : %d \n",isFull(sp));
	printf("After pushing Empty : %d \n",isEmpty(sp));
	
	for(int j=1;j<=sp->top+1;j++)
	{
		printf("The value at position %d is %d",j,peek(sp, j));
	}

	
	return 0;
}
