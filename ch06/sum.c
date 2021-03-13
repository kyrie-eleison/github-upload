#include <stdio.h>

int main(void)
{   
    int n, sum = 0;
    while (n != 0){
        printf("Enter integers (0 to terminate) : ");
        scanf("%d", &n);
        sum += n;
    }

    printf("%d\n", sum);
    return 0;
}