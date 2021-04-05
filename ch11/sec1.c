// sec1. Pointer Variables

// main memory is divided into bytes(= 8 bits), each of which has a unique address
// each variable occupies one or more bytes of memory, and we consider the first bytes' address as the address of a variable
// since those address would be much complicated than a mere sequence of integers, we store them in pointer variables
// so, in a nutshell, pointer is a concept of referencing adresses of variables, and a pointer variable references that addresses

// declaration: int *p; -> p is a pointer variable capable of pointing to objects of type int

// sec2. The Address and Indirection Operators

// &: address operator. &(variable) returns the variable's address
// *: indirection operator. *(pointer variable) returns the object to which p currently points
// if we set p = &i, it means *p == i -> assigning a new value to *p changes i as well
// never apply the indirection operator to an uninitialized pointer variable(this could be dangerous)

// sec4. pointers as arguments

// why do we use pointer? -> modify the values(we can get the references to the variables through the pointers)
// however, for some reason of efficiency, we might not want to change the value of the variable -> use the keyword 'const'

// sec5. pointers as return values

// we may return pointers as values: int *max(int *a, int *b)

#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);
void max_min(int a[], int n, int *max, int *min);

int main(void) {
    double x = 10.345;
    long int_part;
    double frac_part;

    decompose(x, &int_part, &frac_part);
    printf("%ld\n", int_part);
    printf("%f\n", frac_part);

    int max, min;
    int a[10] = {-1, 3, 24, 3, 5, 42, -57, 5, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    max_min(a, n, &max, &min);
    printf("%d%d", max, min);

    return 0;
}

void decompose(double x, long *int_part, double *frac_part) {
    *int_part = (long) x;
    *frac_part = x - *int_part;
}
void max_min(int a[], int n, int *max, int *min) {
    int i;
    *max = 0;
    *min = 100000;
    for (i = 0; i < n; i++){
        if (a[i] < *min) {
            *min = a[i];
        } else if (a[i] > *max) {
            *max = a[i];
        }
    }
}