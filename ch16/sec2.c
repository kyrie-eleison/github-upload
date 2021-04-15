#include <stdio.h>
#include <string.h>

struct test {
    int one;
    int two;
    char three[10];
};

struct test test_maker(int one, int two, char three[10]);

int main(void) 
{
    struct test test1 = test_maker(1, 2, "love");
    printf("test1.one: %d, test1.two: %d, and test1.three: %s\n", test1.one, test1.two, test1.three);
    return 0;
}

struct test test_maker(int one, int two, char *three) {
    struct test test1;

    test1.one = one;
    test1.two = two;
    strcpy(test1.three, three);

    return test1;
}