#include <stdio.h> // include: preprocessor. #(directive) comes before it.
// <stdio.h>: header(including information about a standard library)


int main(void) { // only codes in the main function is executable
    printf("To C, or not to C: that is the question. \n"); 
    // printf function is from stdio.h
    return 0;
}

// functions - function + library function(built-in functions provided by C)
// main function is mandatory, called automatically when the program is executed.
// int main(void) -> the main function returns an int value with no argument
// return 0; -> main function returns 0 + causing main function to terminate
// each statement must end with ;

/* 
preprocessing(adding, modifying) -> compiling(source code -> object code)
 -> linking(preprocessing + compliled object code) 
 */

 /* 
 To complie with gcc(Linux compiler): gcc -o(this is for change 
 the name of our complied executable file from the source code) pun pun.c 

 For execution, do ./pun
 */

