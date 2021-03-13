// do ... while ...
// no difference between while and do... while...

#include <stdio.h>

int main(void) 
{
    int n;
    int digit = 0;
    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digit += 1;
    } while (n > 0);

    printf("%d\n", digit);

    return 0;
}