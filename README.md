# DS_Library_C

**DS_Library_C** is a collection of commonly used data structures implemented in C. The goal of this repository is to provide a simple, reusable library of data structures like Stack, Queue, Vector, and many more to make future projects more efficient by reducing redundant code. 

By using this library, you can focus on building applications while leveraging the underlying implementations for common data structures.

## Data Structures

The following data structures are implemented in this library:

### 1. Stack

A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. The implemented stack supports the following operations:

- `push(value)`: Adds an element to the stack.
- `pop()`: Removes and returns the top element of the stack.
- `peek()`: Returns the top element without removing it.
- `isEmpty()`: Checks if the stack is empty.
- `freeStack()`: Frees the memory used by the stack.

### 2. Queue

A queue is a linear data structure that follows the First In, First Out (FIFO) principle. The implemented queue supports the following operations:

- `enqueue(value)`: Adds an element to the end of the queue.
- `dequeue()`: Removes and returns the front element of the queue.
- `peek()`: Returns the front element without removing it.
- `isEmpty()`: Checks if the queue is empty.
- `isFull()`: Checks if the queue is full.
- `freeQueue()`: Frees the memory used by the queue.

### 3. Vector (Dynamic Array)

A vector is a dynamic array that automatically resizes as elements are added. The implemented vector supports the following operations:

- `pushback(value)`: Adds an element to the end of the vector, resizing if necessary.
- `popback()`: Removes and returns the last element of the vector.
- `get(index)`: Retrieves the element at a specific index.
- `set(index, value)`: Sets the value at a specific index.
- `size()`: Returns the number of elements in the vector.
- `capacity()`: Returns the capacity of the vector.
- `freeVector()`: Frees the memory used by the vector.

 ### 4. Vector Generalised (Dynamic Array for Any Data Type)

`vector_generalised` is a generic implementation of a dynamic array using `void*` pointers. This allows the storage of any data type (e.g., int, float, structs, etc.) by specifying the element size during initialization.

Supported operations:
- `createVectorgen(elem_size)`: Creates a new generalised vector.
- `pushback(vectorgen, val)`: Adds an element to the end.
- `popback(vectorgen, out)`: Removes and optionally returns the last element.
- `get(vectorgen, index, out)`: Retrieves an element by index.
- `set(vectorgen, index, val)`: Sets the value at a specific index.
- `size(vectorgen)`: Returns the current number of elements.
- `capacity(vectorgen)`: Returns the current capacity.
- `freeVectorgen(vectorgen)`: Frees the memory used by the vector.

## Why This Library?

This library was created with the aim of saving time on common data structure implementations and providing a foundation for future work. By making these data structures modular and reusable, it becomes easier to integrate them into different projects. 

You don't need to implement basic data structures from scratch every time. Just use this library and focus on solving higher-level problems!

## How to Use

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/DS_Library_C.git
