#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

// wanted to give the dynamic implementation a try
#define Initial_val 4;

Stack* createStack()
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = Initial_val;
    stack->top =-1;
    stack->arr =(int*)malloc(stack->capacity*sizeof(int));
    return stack;
}

void push(Stack* stack, int val)
{
    if(stack->top+1==stack->capacity)
    {
        stack->capacity=stack->capacity*2;
        stack->arr = (int*)realloc(stack->arr,stack->capacity*sizeof(int));
    }
    stack->arr[++stack->top]=val;
}
int pop(Stack* stack)
{
    if(stack->top==-1)
    {
        printf("UNDERFLOW");
        return -1;
    }
    return stack->arr[stack->top--];
}
int peek(Stack* stack)
{
    if(stack->top==-1)
    {
        printf("EMPTY");
        return -1;
    }
    return stack->arr[stack->top];
}
int isEmpty(Stack* stack)
{
    if(stack->top==-1)
        return -1;
    else
        return 0;
}
void freeStack(Stack* stack)
{
    free(stack->arr);
    free(stack);        
}

// the array implementation
// void push(int val)
// {
//     if(top==max)
//     {
//         printf("OVERFLOW");
//         return;
//     }
//     stack[++top]=val;

// }
// int pop()
// {
//     if(top==1)
//     {
//         printf("UNDERFLOW");
//         return -1;
//     }
//     return stack[top];

// }
// int peek()
// {
//     if(top==-1)
//     {
//         printf("STACK EMPTY");
//         return -1;
//     }
//     return stack[top];
// }
// int isEmpty()
// {
//     return top==-1;
// }