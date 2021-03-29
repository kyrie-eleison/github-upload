// sec3. Arguments

// parameters -> function definition | arguments -> when you actually call a function
// in C, arugments are passed by value

// Argument Conversions -> whether or not the compiler encounters a prototype or not
// but from C99, you must provide prototype always!

// Array Arguments
// as an argument, array's length could be left unspecified
// but instead, we have to specify its length -> that's why we may need to use variable length arrays(VLA)
// unlike other values, arrays are passed by reference
// compound literal

// sec5. Program Termination

// <stdlib.h> 's exit function
// 0: normal termination -> exit(0); or exit(EXIT_SUCCESS)
// 1: failure -> exit(1); or eixt(EXIT_FAILURE);
// exit vs return? exit: terminates the program anyhow | return: terminates the program only if it is used in the main function

#include <stdio.h>

int sum_two_dim_array(int n, int m, int a[m][n]);
int sum_one_dim_array(int k, int b[k]);

int main(void) {

    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[5] = {1, 2, 3, 4, 5};

    printf("%d, %d", sum_two_dim_array(2, 3, a), sum_one_dim_array(5, b));

    
    return 0;

}

int sum_two_dim_array(int n, int m, int a[m][n]) {
        int total = 0;
        int i, j;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                total += a[i][j];
            }
        }
        return total;
    }

    int sum_one_dim_array(int k, int b[k]) {
        int total = 0;
        int i;
        for (i = 0; i < k; i++) {
            total += b[i];
        }
        return total;
    }