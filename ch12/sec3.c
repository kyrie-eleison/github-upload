// sec3: Using an Array Name as a Pointer
// the name of an array can be used as a pointer to the first element in the array
// for example, if we declare int a[], a = &a[0]
// but beware that you cannot assign other pointer values to a -> use another variable p

// when an array name is passed to a function, it is treated as a pointer(so the value of the pointer is copied)
// remark) declaring a parameter to be an array is the same as declaring it to be a pointer, the same is not true
//         for a variable(if you declare a pointer variable and assign to it a value with indirect operator, it throws an error)
//         however, as long as a pointer variable is assinged an array value, we can treat it as an array

// in a nutshell, an array is a special pointer which is constant, and is related to the succeeding pointer values
// and declaring an array in a function is equivalent to declaring a pointer

// sec4. Pointers and Multidimensional Arrays
// multidimensional arrays are treated in row-major order -> but modern compilers do not make difference in using two loops and treating as one-dimensional arrays
// when dealing with columns, use int (*p)[NUM_COLS](pointer to an integer array of length NUM_COLS)

// Using the Name of a Multi-dim Array as a Pointer?: consider this int a[NUM_ROWS][NUM_COLS] -> a points to a[0], not a[0][0]
// (so it's a pointer to an array). So when used as a pointer, a has type int (*)[NUM_COLS](pointer to an integer array of length NUM_COLS)
// a[0] and a point to the same element a[0][0], but they have the different types

// sec5. Pointers and VLA
// the declaration of a variably modifed type (such as int[n], p* s.t. p = a) must be inside the body of a function or in a function prototype


#include <stdio.h>

#define N 10

int main(void) {
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    printf("In reverse order: ");
    for (p = a + N - 1; p >= a ; p--) {
        printf("%d ", *p);
    }

    return 0;
}