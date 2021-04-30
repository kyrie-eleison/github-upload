# sec3. Type Qualifiers
- `const`, `volatile`
- `const`: to declare objects to be read-only
    - a sort of documentation for other people that this var would not be changed
    - the compiler checks that this var will not inadvertently mutated
    - for a program written for certain type of applications, the compiler identifies this data to be stored in ROM(read-only memory)

- `#define` vs `const`

| `#define` | `const` |
| --- | --- |
| numerical, character, or string constant | any type |
| file scope | same scope rules as variables |
| cannot be viewed in a debugger | can be viewed in a debugger |
| can be used in constant expressions(like setting the length of an array) | setting an array's length is possible when it has automatic storage duration |
| has no address | has address so it can use `&` operator |

    - use `#define` for numbers or characters

# sec4. Declarators
- an array need not have its length specified when: used as a parameter, it has an initializer, or its storage class is `extern`
- about more of array declaration, see __ch9's sec3__

- `int *a[10]` vs `int (*a)[10]` : an array of pointers vs a pointer to an array
- `int *func(int a)` vs `int (*func)(int a)`: a function returning pointer vs a pointer to a function

## Declaring Complex Declarators
- always read declarators from the inside(= the identifier) out
- when there's a choice, always favor [], () over *

- note: functions cannot return arrays, functions / also, arrays of functions are not possible
    - but we can use pointers always

## Using Type Definitions to Simplify Declarations
- use `typedef`!

# sec5. Initializers
- to initialize a var: `(declarator) = (initializer)`
* remember: initialization is different from declaration 

- if the types don't match, C converts the initializer using the same rules as for assignments
- the initializer for a pointer variable must be a pointer expression of the same type as the variable or of type `void*`
- the initializer for an array, structure or union is a series of values enclosed in braces

- other rules:
    - an initializer for a var with static storage duration must be constant
    - if a var has automatic storage duration, its initializer need not be constant
    - the initializer for an  automatic structure or union can be another structure or union

## Uninitialized Variables
- the initial value of a variable depends on its storage duration
    - automatic storage duration: has no default init value
    - static storage duration: has `0` by default, but this `0` comply with the type of the var


# sec6. Inline Functions
- overhead: the cumulative work required to call a function and later return from it / this may give burdens to a program
- inline function: the compiler replaces each call of the function by the machine instructions for the function
- this avoids the usual overhead of a function call, but instead may cause a minor increase in the size of the compiled program
- but it is upto the compiler to choose to follow this inline keyword instruction

## Inline Definitions
- inline keywords make a function to have an external linkage: to avoid, we need the `static` keyword or define it in a header file

## Restrictions on Inline Functions
- be aware of static, external, etc.

## Using Inline Functions with GCC
- it has no problem with using GCC when it comes to `inline`