#include <stdio.h>

int main(void) {
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    // but we can also initialize: int height = 8, length = 12, width = 10
    volume = height * length * width;
    weight = (volume + 165)/166; // in C, / means // in Python(only returns quotient values)

    printf("%dx%dx%d\n", length, width, height);
    printf("%d\n", volume);
    // but we may just do: printf("%d\n", height * length * width)
    printf("%d\n", weight);
    
    return 0;
}



// varibles

// Variable Declaration: type + variableName
// Before value assignment, a variable must be declared previously
// float: float floatVar = 4.32f -> add f at the end

// String interpolation in prinf: printf("Height: %d\n", height);

// 