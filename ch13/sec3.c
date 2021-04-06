// sec.3 Reading, Writing Strings

// Writing Strings Using printf and puts 
// printf("%s", str) -> it writes the characters in a string one by one until it hits \0
// puts(str) -> the same as Ruby's puts

// Reading Strings Using scanf and gets
// for string, scanf acts as the same: scanf("%s", str); -> skips whitespace at the beginning, and it reads characters and stores them in str until it encounters a white space character. 
// It always stores a null character at the end of the string
// as seen, scanf cannot read ' ', '    ' (whitespace, tap) -> we use gets() in this case
// gets does not skip whitespace, and it only stops at '\n', with replacing it with \0

// in real cases, however, gets() is dangerous in that it may overflow the array's length
// C programmers usually have their own function for this


// sec4. Accessing the Characters in a String
// by doing array[i], or array as a pointer(pointer arithmetic)

#include <stdio.h>

#define ARRAY_LENGTH 1000

int read_line(char str[], int n);

int main(void) {
    char string[ARRAY_LENGTH];

    read_line(string, ARRAY_LENGTH);
    printf("%s", string);

    return 0;

}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}