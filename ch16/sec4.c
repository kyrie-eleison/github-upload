// sec4. Unions

// a union may consist of one or more members, which may be of different types
// the compiler may allocate only enough space for the largest of the members in a union
// hence, the members may overlay each other within this space, 
// so that assigning a new value to one member alters the values of all the other members as well

// different from structures, a union allocates the same address for every member of it
// hence, we have to think that a union only stores a single member

// similar to struct, a union can be declared via unio tags and union types
// a union can be copied using '=' operator
// however, for initialization, only the first member of a union can be initialized

#include <stdio.h>

union {
    int i;
    double d;
} example;

int main(void) 
{
    example.i = 3;
    example.d = 4.0;

    printf("%d\n", example.i);

    example.i = 2;
    
    printf("%.lf\n", example.d);

    return 0;
}

