#ifndef VECTOR_H
#define VECTOR_H

typedef struct
{
    int* arr;
    int size;
    int capacity;
}Vector;

Vector* createVector();
void pushback(Vector* v, int val);
int get(Vector* v, int idx);
void set(Vector* v, int idx, int val);
int popback(Vector* v);
int size(Vector* v );
int capacity(Vector* v);
void freeVector(Vector* v);

#endif