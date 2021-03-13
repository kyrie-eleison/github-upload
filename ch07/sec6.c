// sec6. The sizeof Operator

// how much does a type require for a computer to assign its value to the memory?
// sizeof (type-name) -> returns unsigned long(lu);

#include <stdio.h>

int main(void)
{
    int a = 1;
    char b = 'b';
    float c = 0.0;

    printf("%lu %lu %lu\n", sizeof(a), sizeof(b), sizeof(c));

    return 0;
}