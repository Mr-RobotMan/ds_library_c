#ifndef VECTOR_GEN_H

#define VECTOR_GEN_H

typedef struct
{
    void* arr;
    int size;
    int capacity;
    int elem_size;
}Vectorgen;


Vectorgen* createVectorgen(int elem_size);
void pushback(Vectorgen* v, void* val);
void get(Vectorgen* v, int idx, void* out);
void set(Vectorgen* v, int idx, void* val);
void popback(Vectorgen* v, void* out);
int size(Vectorgen* v);
int capacity(Vectorgen* v);
void freeVectorgen(Vectorgen* v);

#endif