// sec5: Type Definitions

// rather than #define BOOL int, we may do the type definition: typedef int Bool; -> why do we use it?
// 1) codes are easy to understand 
// 2) kind of variable: easy to modify
// 3) for portability: for different compilers(C libraries are using it! as size_t, for example)

#include <stdio.h>

int main(void)
{
    typedef int Dragon;

    Dragon sisu = 5;
    Dragon raya = 2;

    printf("Sisu has her members of %d, and raya has her members of %d\n", sisu, raya);
    return 0;
}