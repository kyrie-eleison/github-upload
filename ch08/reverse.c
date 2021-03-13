#include <stdio.h>

#define N 10

int main(void)
{
    int array[N], i, j;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    printf("In reverse order: ");
    for (j = N - 1; j >= 0; j--) {
        printf("%d\t", array[j]);
    }
    return 0;
}