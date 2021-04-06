// sec5. Using the C String Library
// in C, we cannot copy or compare strings using operators -> instead, we have <string.h>

// any char * could be treated as arguments, but you should be aware of those parameters not declared const,
// which may mutate strings(so we may not use string literals for those parameters)

// 1. strcpy: char *strcpy(char *s1, const char *s2)
// copies the array pointed by s2 to the one pointed by s1, up to s2's \0
// with this function we can 'assign' a string to a string variable
// be aware of unexpected behavior if the length of s2 is greater than s1 -> use strncpy

// 2. strlen: size_t strlen(const, char *s)
// size_t: typedef name that represents one of C's unsigned integer types
// sizeof(s) != strlen(s) (strlen measures the length of the string, not the array)

// 3. strcat: char *strcat(char *s1, const char *s2)
// s2 is appended to s1
// but it must be that the number of empty elements of s1 > strlen(s2) -> use strncat

// 4. strcmp: int strcmp(const char *s1, const char *s2)
// compares s1 and s2 based on the lexicographic ordering

