// sec7. Array of Strings

// We want an array of strings. However, setting the array as 2-dimensional may result in a waste of memory,
// since every string has different length so that some short strings end up with \0s in their left places for elements
// That's why we need a ragged array: a two-dimensional array whos rows can have different lengths

// instead of declaring char strings[][COL_NUMBER], we declare an array of pointers to strings: char *strings[COL_NUMBER]

// Command-Line Arguments
// we want our C program takes an argument from the command line

int main(int argc, char *argv[])
// argc: the number of command-line arguments
// argv: ('argument vector')an array of pointers to the command-line arguments.
// argv[0] -> the name of the program
// argv[1] ~ argv[argc-1] -> the remaining command-line arguments
// argv[arc] = a null pointer(NULL)

// accessing each arguments:

// char **p;
// for (p = &argv[1]; *p != NULL; p++) {
//     printf("%s\n", *p);
// }

