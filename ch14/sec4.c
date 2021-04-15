#include <stdio.h>

#define DEBUG 0
#define DEBUG2 1

int main(void) {

    #if DEBUG
    printf("%s\n", "OMG");
    #elif DEBUG2
    printf("%s\n", "splendid!");
    #else
    printf("%s\n", "yeahhh");
    #endif

    return 0;
}