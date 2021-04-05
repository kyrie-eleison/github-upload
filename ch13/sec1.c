// sec1. String Literals

// a string literal?: "a string literal"
// continuing a string literal: use '\' (like Ruby, Shell Script) -> but there is a detour(joining two literals with only a whitespace between them)

// how string literals are stored?
// if there is a literal of length n, a C compiler sets aside n + 1 bytes of memory for the string(with the "null character" to mark 
// the end of the string, which is represented by the \0 -> a byte whose bits are all zero)
// since a literal is stored as an array, the compiler treats it as a pointer of type char*

// operations on string literals
// we may treat it with a char* pointer
// we may subscript string literals

// string literals vs character constants
// "a" -> represented by a pointer to a memory location that contains the character a, followed by a null character
// 'a' -> represented by an integer

// sec2. String Variables

// an array of characters can only be treated as a string as long as it is terminated by \0
// we need to be careful of this null character whenever we deal with a string
// if we set char str[STR_LEN + 1], it does not mean that the str variable is of length STR_LEN

// initializing a string variable
// just do: char date1[8] = "June 14"; -> in this case, "June 14" is not a string literal(the compiler views this as
// an abbreviation for an array initializer)
// if char date2[9] = "June 14"; -> when an array initializer is shorter than the array itself, the remaining elements are initialized to zero
// if the length of str is shorter than the initializer, \0 is not stored so that str is not treated as a string
// we may omit the length of the array -> str[](compiler computes it, with \0)

// character arrays vs character pointers
// array -> elements can be modified / if a pointer is assigned a string literal, it cannot be changed
// (this may be because when a pointer merely points to a literal, the literal already has its place in the memory)
// array -> other arrays cannot be assigned / pointer -> other pointer value could be assigned
// in a nutshell, both string as an array and a string literal are 'char array's, buy a string literal has its own place beforehand
// -> that's why it cannot be mutated