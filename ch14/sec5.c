#include <stdio.h>

int main(void) {

    #if IT_MAX < 100000
    #error maaaaa
    #endif

    return 0;
}