#ifndef VECTOR_GEN_H

#define VECTOR_GEN_H

typedef struct
{
    void* arr;  // void pointer to hold address of any type, gpp(genral purpose pointer)
    int size;   // no of elements currently stored
    int capacity;   //total allocated slots
    int elem_size;  //size of each elements, helping in the pointer arth 
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