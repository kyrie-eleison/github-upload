// macro definition: define a variable with a suitable name(convention: uppercase)

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheight, celcius;

    scanf("%f", &fahrenheight);
    celcius = (fahrenheight - FREEZING_PT)*SCALE_FACTOR;

    printf("%.1f\n", celcius);
    printf("\a");
    return 0;

}

// names for variables, functions, macros, etc -> called "identifiers"

// simple memos about scanf:
/*

- don't forget to put down &
- ignores white-space characters
- if formatting type does not match with the input, it defers to read until the next
scan
- final newline command(\n) is left to be read by the next scanf
- ordinary characters in format strings -> white space chars never minds; but 
other characters must match with the input in order

*/