// sec1. One-Dimensional Arrays

// array: a data structure containing a number of data values, 
// all of which have the same type

// declare: type-name array-name[array-size] (eg. int a[10])
// an array is supposed to have single one type.
// for example: a[0] = 1 requires a[3] is int

// initialization: type-name array-name[array-size] = {elements}
// if the number of elements < array-size, the remaining elements are assigned as 0(or ' ' in the case of char, 0.00 in the case of float)
// not allowed: empty array, the number of elements > array-size
// allowed: array-size may be omitted

// length of array: sizeof(array) / sizeof(array[0])
// the sizeof() function may give you a value of type size_t(unsigned) -> you may put (int) in front of this expression

#include <stdio.h>

int main(void)
{
    char a[10] = {'a', 'b'};
    int b[10] = {1, 2};
    float c[10] = {1.0, 2.0};

    printf("%f\n", c[5]);
    return 0;
}
