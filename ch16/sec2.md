# sec2. Structure Types
- no type for structures?
    - have to declare as a literal form all the time -> bad for maintenance
    - each declaration gives the different 'types' to structure variables
    - since we don't have types for variables, those variables cannot be passed to functions as arguments

## Declaring a Structure Tag
- a name used to identify a particular kind of structure
- ``;`` must follow the end of the declaration
- once created with a tag, we can declare as many variables as possible, but have to put ``struct`` at the very first of declaration
- first initialization of a variable must go with ``struct tag variable_name = initial_value``

## Defining a Structure Type
- the name of the type must come at the end
- but it is mandatory to use the tag way when it is to be used in a linked list

## Structures as Arguments and Return Values
```
void func(struct test test1) {
    // ...
}

struct test make_test(int one, int two, char[10] three) {
    struct test test1;

    test1.one = 1;
    test1.two = 2;
    strcpy(test1.three, "love");

    return test1;
}
```

- everytime a stucture is passed to a function, it is copied, which may be burdensome to a program
- hence, we may pass around pointers of structures

## Compound Literals
- a compound literal can also be used to create a structure "on the fly"(put directly into a function as an argument)
```
make_test((struct test) {.one = 1, .two = 2, .three = "love"})
```
