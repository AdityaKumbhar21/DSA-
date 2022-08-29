#include<stdio.h>
#include<stdlib.h>


struct stack{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack *ptr)
{
	if(ptr->top==-1)
	{
		printf("The stack is empty ");
		return 1;
	}
	else
	{
	 printf("The stack is not empty");
	 return 0;
	}
}

int main()
{
	struct	stack *s;
	s->size=6;
	s->top=-1;
	s->arr=(int *)malloc(s->size*sizeof(int));

	isEmpty(s);
	return 0;
}

