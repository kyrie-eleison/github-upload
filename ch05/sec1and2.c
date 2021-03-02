// sec1. Logical Expressions

// In C, there is no Boolean: only true(1) or false(0)
// Remark: we have _Bool type, to which we can only assign 0 or 1
// Remark: we also have <stdbool.h> header


// logical operators(and, or, not): works also in the case of nonzero values
// "short circuit": in the case of || and &&

// sec2. The If Statement

// if (condition) {
//  statements  
// } else if {
//  statements
// } else { }

// Conditional Operator: (condition) ? expr1 : expr2

#include <stdio.h>

int main(void)
{
    int test1 = 0, test2 = 1, test3 = 2;
    int total = 0;

    total = (test1 < test2) + (test2 < test3);

    printf("%d", total);
    
    return 0;
}

