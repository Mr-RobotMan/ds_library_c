#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include"vector_gen.h"

#define Initial_cap 2

Vectorgen* createVectorgen(int elem_size)
{
    Vectorgen* v = (Vectorgen*)malloc(sizeof(Vectorgen));
    v->capacity= Initial_cap;
    v->size=0;
    v->elem_size=elem_size;
    v->arr= malloc(v->capacity* elem_size);
    return v;

}


void pushback(Vectorgen* v, void* val)
{
    if(v->size==v->capacity)
    {
        v->capacity*=2;
        v->arr = realloc(v->arr,v->capacity*v->elem_size);
    }
    void* tar = (char*)v->arr+(v->size*v->elem_size);
    memcpy(tar, val, v->elem_size);
    v->size++;
}

void get(Vectorgen* v, int idx, void* out)
{
    if(idx<0|| idx >= v->size) return;
    void* src = (char*)v->arr+(idx*v->elem_size);
    memcpy(out, src, v->elem_size);

}

void set(Vectorgen* v, int idx, void* val)
{
    if(idx<0|| idx >= v->size) return;
    void* dest = (char*)v->arr+(idx*v->elem_size);
    memcpy(dest,val , v->elem_size);
    
}

void popback(Vectorgen* v, void* out)
{
    if(v->size==0)  return;
    if(out!=NULL)
    {   
        void* src = (char*)v->arr+ ((v->size-1)*v->elem_size);
        memcpy(out, src, v->elem_size);
    }
    v->size--;
}

int size(Vectorgen* v)
{
    return v->size;
}

int capacity(Vectorgen* v)
{
    return v->capacity;
}

void freeVectorgen(Vectorgen* v)
{
    free(v->arr);
    free(v);
}