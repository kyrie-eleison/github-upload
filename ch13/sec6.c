// sec6. String Idioms

#include <string.h>

size_t my_strlen(const char *s);
char *my_strcat(char *s1, const char *s2);

int main(void) {

    return 0;
}

// Searching for the end of a string
size_t my_strlen(const char *s) {
    
    const char *p = s;

    while(*s) {
        s++;
    }

    return s - p;
}

// copying a string
char *my_strcat(char *s1, const char *s2) {

    char *p = s1;
    while(*p) {
        p++;
    }

    while (*p++ = *s2++){
        ;
    } // this terminates when *s2 = '\0'
    return s1;
}