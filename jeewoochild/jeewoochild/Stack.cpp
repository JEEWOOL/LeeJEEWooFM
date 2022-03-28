#include "Stack.h"

#include <stdlib.h>

struct tagStack
{
	int	Container[10];
	int Top = -1;
	int Size = 0;
};

Stack* CreateStack()
{
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	
	return stack;
}

void DeleteStack(Stack* stack)
{
	free(stack);

	stack = NULL;
}

void Push(Stack* const stack, int data)
{
	stack->Container[++stack->Top] = data;
}

int Pop(Stack* const stack)
{
	return stack->Container[stack->Top--];
}