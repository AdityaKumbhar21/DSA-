// Parenthesis Matching problem

#include<stdio.h>
#include<stdlib.h>


struct stack{
	int size;
	int top;
	char *arr;
};

int isEmpty(struct stack *ptr)
{
	if(ptr->top==-1)
	{
		//printf("The stack is empty ");
		return 1;
	}
	else
	{
	 //printf("The stack is not empty");
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

void push(struct stack *ptr,char val)
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

char pop(struct stack * ptr)
{
	if(isEmpty(ptr))
	{
		printf("Stack underflow! cannot pop ");
		return -1;
	}
	else
	{
		char val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}

int match(char a, char b)
{
	if(a == '(' && b ==')')
	{
		return 1;
	}
		if(a == '{' && b =='}')
	{
		return 1;
	}
		if(a == '[' && b ==']')
	{
		return 1;
	}
	return 0;
}

int parentheisMatch(char * exp)
{
	struct stack * sp;
	sp->size=100;
	sp->top=-1;
	sp->arr=(char *)malloc(sp->size*sizeof(char));
	char popped_ch;
	
	for(int i=0;exp[i]!='\0';i++)
	{
		if(exp[i] =='(' || exp[i] =='{' || exp[i] =='[' )
		{
			push(sp,exp[i]);
		}
		else if(exp[i] ==')' || exp[i] =='}' || exp[i] ==']')
		{
			if(isEmpty(sp))
			{
			return 0;
			}
			
			popped_ch = pop(sp);
			if(!match(popped_ch, exp[i]))
			return 0;
		}
	}
	if(isEmpty(sp))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()

{
	char * exp= "[3*(23)]}";
	if(parentheisMatch(exp))
	{
	printf("The parenthesis are balanced \n");
	}
else
{
	printf("The prenthesis are unbalanaced\n");
}
	return 0;
}

