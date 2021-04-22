# sec3. Dynamically Allocated Arrays

## Using malloc to Allocate Storage for an Array
- unlike string, the lements of an arbitrary array will not necessarily be one byte long:  
  we need to use the ``sizeof`` to calculate the amount of space required for each element

```
// example: an array of integers

int *a; // first declare a pointer variable

a = malloc(n * sizeof(int)); // call malloc to allocate space for the array
```

## The calloc Function
- prototype: ``void *calloc(size_t n, size_t size);``
    - allocates space for an array with ``n`` elements, each of which is ``size`` bytes long
    - returns a null pointer if the requested space is not available
    - after locating the memory, calloc initializes it by setting all bits to 0

## The realloc Function
- resizes the array
- prototype: ``void *realloc(void *ptr, size_t size);``
    - ``ptr`` must point to a memory block obtained by a previous call of ``malloc, calloc`` or ``realloc``
    - ``size``: the new size of the block

- a few behaviors of ``realloc``
  - it does not initialize the bytes that are added to the block
  - if ``realloc`` cannot enlarge the memory block as requested, it returns a null pointer  
    (the data ijn the old memory block is unchanged)
  - if ``realloc`` is called with a null pointer as its first argument, it behaves like ``malloc``
  - if ``realloc`` is called with ``0`` as its second argument, it frees the memory block
  - when asked to shrink, it shrinks the block 'in place' without moving the data stored in the block
  - when asked to expand, it attemps to do it in place, but if not possible,   
  it will allocate a new block elsewhere, and copy the contents of the old block into the new one  
  => once ``realloc`` has returned, be sure to update all pointers to the memory block  
    (it's possible that ``realloc`` has moved the block elsewhere)

# sec4. Deallocating Storage
- ``malloc and the other memory allocation functions obtain memory blocks from a storage pool known as the __heap__
- requiring large blocks of memory may exhaust the heap, causing the functions to return a null pointer
- a block of memory that's no longer accessibile to a program is said to be __garbage__
- we say a program has a __memory leak__ if it leaves garbage behind
- C does not have a __garbage collector__:   
each C program is responsible for recycling its own garbage by calling the ``free`` function to release unneeded memory

## The free Function
- prototype(in ``<stdlib.h>``): ``void free(void *ptr);``

```
p = malloc(...);
q = malloc(...);
free(p);
p = q;
```

- calling ``free`` releases the block of memory that ``p`` points to. This block returns to the heap
- the argument to ``free`` must be a pointer that was previously returned by a memory allocation function  
  (other pointer variable as arguments may cause unexpected behavior)

## The "Dangling Pointer" Problem
- the call `free(p)` deallocates the memory block that `p` points to , but does not change `p` itself
- assigning a new value to `p` may cause a serious error -> our program no longer has control of that memory
