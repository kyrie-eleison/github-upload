// sec3. Switch Statement

// for the condition and constant expression parts, only data type that can be converted to integer is available
// for example: int, char, etc. (not float, double)

// several case labels may precede the same group of statements
// no way of specifying a range of values for a label
// no need to specify default(simply passing onto the next statement after the switch)
// dont' forget to add break for eadch case

#include <stdio.h>

int main(void)
{
    int good = 2;

    switch (good) {
        case 3: printf("good\n");
        case 2: case 1: printf("nooo\n");
                        break;
        default: printf("yeaaa\n");
                break;
    }

    return 0;
}