# sec6. Pointers to Pointers
- when we need a pointer to an array of pointers
- when we want a variable to be changed which is passed as a function argument

# sec7. Pointer to Functions
- functions occupy memory locations, hence we also have pointers to functions

## Function Pointers as Arguments
- we may use function pointers when we want a function to be passed to another function
`` double integrate(double (*f)(double), double a, double b); ``
(``()`` around ``*f`` indicate that ``f`` is a pointer to a function, not a function that returns a pointer)

- when a function is passed without `()` after its name, the compiler produces a pointer to the function instead of
generating code for a function call
- within the body of the function that our function is passed to, we call the function like this: `*f(x)`

## The qsort Function
- an example of a function which requires a function pointer as an argument

## Other Uses of Function Pointers
- pointers to functions can be treated just like other pointers
- declare: `void (*pf)(int)` -> can point to any function with an `int` argument and a `void` return

## Tabulating the Trigonometric Functions
