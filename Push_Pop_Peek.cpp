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
		ptr->arr[ptr->top]=val;
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
	int arrayInd=sp->top -i + 1;
	if(arrayInd <  0)
	{
		printf("Invalid position \n");
		return -1;
	}
	else{
		return sp->arr[arrayInd];
	}
}

int StackTop(struct stack *ptr)
{
	return 	ptr->arr[ptr->top];
}
int StackBottom(struct stack *ptr)
{
	return 	ptr->arr[0];
}
int main()
{
	struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=5;
	sp->top=-1;
	sp->arr=(int *)malloc(sp->size*sizeof(int));
	push(sp, 6);
	push(sp, 3);
	push(sp, 4);
	push(sp, 12);
	push(sp, 45);
	

printf("Successfully created a stack \n");

	printf("After pushing Full : %d \n",isFull(sp));
	printf("After pushing Empty : %d \n",isEmpty(sp));
	
	printf("Popped %d from stack\n",pop(sp));
	
	printf("The values after popping\n");
	for(int j=1;j<=sp->top+1;j++)
	{
		printf("The value at position %d is %d\n",j,peek(sp, j));
	}

	printf("The top value of stack is %d\n",StackTop(sp));
	printf("The Bottom value of stack is %d\n",StackBottom(sp));
	return 0;
}
