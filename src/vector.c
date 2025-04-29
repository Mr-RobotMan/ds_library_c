#include<stdio.h>
#include<stdlib.h>
#include"vector.h"


#define Initial_cap 2

Vector* createVector()
{
    Vector* v = (Vector*)malloc(sizeof(Vector));
    v->capacity=Initial_cap;
    v->size=0;
    v->arr=(int*)malloc(v->capacity*sizeof(int));
    return v;
}

void pushback(Vector* v, int val)
{
    if(v->capacity==v->size)
    {
        v->capacity*=2;
        v->arr = (int*)realloc(v->arr, v->capacity*sizeof(int));
    }
    v->arr[v->size++]=val;
}
int get(Vector* v, int idx);
void set(Vector* v, int idx, int val);
int popback(Vector* v)
{
    if (v->size == 0) {
        printf("Vector is empty\n");
        return -1; 
    }
    int val = v->arr[v->size - 1];
    v->size--;
    return val;
}

int size(Vector* v );
int capacity(Vector* v);
void freeVector(Vector* v);
