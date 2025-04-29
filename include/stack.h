#ifndef STACK_H
#define STACK_H

typedef struct
{
    int* arr;
    int top;
    int capacity;
}Stack;

Stack* createStack();
void push(Stack* stack, int val);
int pop(Stack* stack);
int peek(Stack* stack);
int isEmpty(Stack* stack);
void freeStack(Stack* stack);

#endif