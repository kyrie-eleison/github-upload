// sec1. Pointer Arithmetic

// through the pointer arithmetic(= address arithmetic) we can get access to other elements of an array
// 1) adding or substracting an integer to a pointer: if p -> a[i], p + j -> a[i + j], provided a[i + j] exists
// 2) subtracting one pointer from another: if p -> a[i] and q -> a[j], p - q = i - j
// remark) performing arithmetic on a pointer must be done when it points to an array element
//         also, subtracting one pointer from another requires that both pointers point to elements of the same array
// 3) comparing pointers: we need to make sure that two pointers point to the same array elements

// sec2. Using pointers for array processing

#include <stdio.h>

#define N 10

int main(void) {
    int sum, *p;
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sum = 0;
    for (p = &a[0]; p < &a[N]; p++) {
        sum += *p;
    }
    // remark) it is perfectly legal to use the expression like &a[N]
    printf("%d", sum);
    
    return 0;
}

