// Parenthesis Matching problem

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


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

int StackTop(struct stack *ptr)
{
	return 	ptr->arr[ptr->top];
}

int precedance(char ch)
{
	if(ch=='*' || ch=='/')
	{
		return 3;
	}
	else if(ch=='+' || ch=='-')
	{
		return 2;
	}
	else 
	{
	return 1;
	}
}

int isoperator(char ch)
{
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

char * infixtopostfix(char * infix)
{
	struct stack * sp= (struct stack *)malloc(sizeof(struct stack));
	sp->size=100;
	sp->top=-1;
	sp->arr=(char * )malloc(sp->size * sizeof(char));
	char * postfix= (char*)malloc((strlen(infix)+1)*sizeof(char));
	int i=0;
	int j=0;
	
	while(infix[i]!='\0')
	{
		if(!isoperator(infix[i]))
	{
		postfix[j]=infix[i];
		j++;
		i++;
	}
	else
	{
		if(precedance(infix[i])> precedance(StackTop(sp)))
		{
			push(sp,infix[i]);
			i++;
		}
		else
		{
			postfix[j] = pop(sp);
			j++;
			
		}
	}
}

	while(!isEmpty(sp))
	{
		postfix[j]=pop(sp);
		j++;
	}
	postfix[j]= '\0';
	return postfix;
}


int main()

{
	char * exp = "x-y/z-k*d";
	printf(" Postfix : %s ",infixtopostfix(exp));
	return 0;
}

