#include <stdio.h>

int main(void)
{   
    int entry_number = 0, n;
    printf("Enter the number of entries in tables: ");
    scanf("%d", &entry_number);

    // while loop
    // int n = 1;
    // while (n <= entry_number) {
    //     printf("%10d%10d\n", n, n*n);
    //     n += 1;
    // }

    // for loop
    // don't forget to initialize i(or n in this case) when making a loop


    for (n = 1; n <= entry_number; n++) {
        printf("%10d%10d\n", n, n*n);
    }
    return 0;
}