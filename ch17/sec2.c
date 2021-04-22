#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(const char *s1, const char *s2);

int main(void)
{   
    char *s1 = "I love ";
    char *s2 = "you";

    printf("%s\n", concat(s1, s2));
    return 0;
}

char *concat(const char *s1, const char *s2) {

    int string_size1, string_size2;
    string_size1 = strlen(s1);
    string_size2 = strlen(s2);

    void *p = (char *) malloc(string_size1 + string_size2 + 1);

    strcpy(p, s1);
    strcpy(p + string_size1, s2);

    return p;
}
