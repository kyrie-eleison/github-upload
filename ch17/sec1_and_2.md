# sec1. Dynamic Storage Allocation
- Since an array has its size fixed, we cannot handle it if there are demands for extra storage
- dynamic storage allocation: the ability to allocate storage during program execution
- strings, arrays, and structures

## Memory Allocated Functions
in <stdlib.h>:
- ``malloc``: allocates a block of memory, but doesn't initialize it
- ``calloc``: allocates a block of memory and clears it
- ``realloc``: resizes a previously allocated block of memory
- mostly used one is ``malloc`` and it is the most efficient one

- since the function does not know what type of data we're planning to store in the block, it cannot return an ordinary  
``int`` or ``char`` pointer
- hence, the function returns a value of type ``void*``: a 'generic' pointer(just a memory address)

## Null Pointers
- when we call a memory allocation function, there is always a possibility that it won't be able to locate a block of memory  
large enough to satisfy our request
- in this case, the function will return a __null pointer__: a specail value indicating that it points to nothing 
- after we've stored the return value in a pointer variable ``p``, we must test ``p`` to see if it's a null pointer
- the null pointer is represented by a macro named ``NULL``

# sec2. Dynamically Allocated Strings

## Using malloc to Allocate Memory for a String
- prototype: ``void *malloc(size_t size);``
- ``malloc`` allocates a block of ``size`` bytes, and returns a pointer to it
- ``size`` has type ``size_t``, an unsigned integer type defined in the C library
- we write as the following to allocate space for a string of ``n`` characters:

```
p = malloc(n+1);
```

- ``void*`` turns to ``char*`` when the actual assignment is performed
- but we may explicitly typecast: ``p = (char *) malloc(n+1);``

## Using Dynamic Storage Allocation in String Functions
- writing functions that return a pointer to a "new" string -  a string that didn't exist before the function was called
- example: concatenating two strings

## Arrays of Dynamically Allocated Strings
- example: remind2.c
