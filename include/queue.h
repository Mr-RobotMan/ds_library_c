#ifndef QUEUE_H
#define QUEUE_H

typedef struct 
{
    int *arr;
    int front;
    int rear;
    int capacity;

}Queue;


Queue* createQueue();
void enqueue(Queue* q, int val);
int dequeue(Queue* q);
int peek(Queue* q);
int isEmpty(Queue* q);
int isFull(Queue* q);
void freeQueue(Queue* q);

#endif