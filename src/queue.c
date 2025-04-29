#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

#define Initial_cap 2

Queue* createQueue()
{
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->capacity = Initial_cap;
    q->front =-1;
    q->rear =-1;
    q->arr = (int*)malloc(q->capacity*sizeof(int));
    return q;
}
void enqueue(Queue* q, int val)
{
    if(isFull(q))
    {
        q->capacity *=2;
        q->arr =(int*)realloc(q->arr,q->capacity*sizeof(int));
    }
    if(q->front==-1)
    {    q->front=q->rear=0;}
    else
    {   q->rear++;}


    q->arr[q->rear]=val;

}
int dequeue(Queue* q)
{
    if(isEmpty(q))
    {
        printf("Underflow\n");
        return -1;
    }

    int item = q->arr[q->front];
    q->front++;

    if(q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front = (q->front+1)%q->capacity;
    }
    return item;

}
int peek(Queue* q)
{
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->arr[q->front];
}
int isEmpty(Queue* q)
{
    if( q->front ==-1)
        return 1;
    else 
        return 0;
}
int isFull(Queue* q)
{
    if( (q->rear +1)%q->capacity ==q->front)
        return 1;
    else 
        return 0;
}
void freeQueue(Queue* q)
{
    free(q->arr);
    free(q);
}

