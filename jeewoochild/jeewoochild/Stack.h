#pragma once

struct tagStack;
typedef struct tagStack Stack;

Stack* CreateStack();
void DeleteStack(Stack* stack);
void Push(Stack* const stack, int data);
int Pop(Stack* const stack);