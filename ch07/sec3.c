// sec3: Charactor Types

// char type only allows '', not ""
// C treats characters as small integers

// ctype header and toupper function
// scanf, printf
// getchar(read), putchar(write) -> fast for reading and writing characters
// getchar actually read and returns Int

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char ch;

    do {
        ch = getchar();
        count++;
    } while (ch != '\n');

    printf("%d", count);

    return 0;
}