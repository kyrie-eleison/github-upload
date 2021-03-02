// section 2: assignment


// note that assignment in C is an "operator", not "statement"(notice this difference from Swift!)
// the result value of the operation v = e is the value of v after the assignment
// for example, i = 72.99f is 72
// as it is an operator, we can do like, i = j = k = 0;(right associative)

// how v = e exactly works?
// 1. evaluate e conforming to the type of v
// 2. copy the value of e into v

// lvalue?: The assignment operator requires the left operand to be lvalue
// lvalue: an object stored in computer memory, not a constant or the result of a computation


// section 3: increment and decrement operators

// increment(and decrement) operators has two main points to be warned

// 1. it has the side effect: modifies the values of the operand
// 2. prefix(modify the operand first) vs postfix(modify the operand later)

#include <stdio.h>

int main(void)
{
  int i = 0, j = 0;
  printf("%d\n", i++);
  printf("%d\n", i);

  printf("%d\n", ++j);
  printf("%d\n", j);

  return 0;
}

// section 5: expression statements

// in C, any expressino can be used as a statement
// for example, ++i;
// But the value is discard(of no use) -> meaningless unless the operator has the side-effect
