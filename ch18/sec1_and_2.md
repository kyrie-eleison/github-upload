# sec1. Declaration Syntax
- declarations furnish information to the compiler about the meaning of identifiers
- `declaration-specifiers declarators`
    - declaration specifiers: describe the properties of the items being declared
    - declarators: give the names of the items and may provide additional information about their properties

- declaration specifiers: 
    - Storage classes: `auto, static, extern, register`. at most one of these can appear, and  
    this appearance must be at the first position of a declaration
    - Type qualifiers: `const, volatile`. may appear one, both or neither
    - Type specifiers: `void, char, int, char, etc...`. Type names created using `typedef` are also type specifiers

- declarators: identifiers, which may be followed by `[], *, ()`. a variable can be followed by an initializer


# sec2. Storage Classes

## Properties of Variables
Each variable in a C program has three properties

- Storage duration: determines when memory is set aside for the variable / when that memory is released
    - __automatic storage duration__: storage is allocated when the surrounding block is executed.  
    storage is deallocated when the block terminates, causing the variable to lose its value
    - __static storage duration__: stays at the same storage location as long as the program is running

- Scope: the portion of the program text in which the variable can be referenced
    - __block scope__ / __file scope__

- Linkage: the extent to which a variable can be shared by different parts of a program
    - __external linkage__: shared by several files in a program
    - __internal linkage__: restricted to a single file
    - __no linkage__: belongs to a single function and can't be shared at all

The default storage duration, scope, and linkage of a variable depend on where it's declared

- inside a block(including a functino body): automatic storage duration / block scope / no linkage
- outside a block, at the outmost level of a program: static storage duration / file scope / external linkage

## The auto Storage Class
- legal only for variable that belong to a block
- an auto variable has automatic storage duration / block scope / no linkage
- almost never specified explcitly(since it's the default)

## The static Storage Class
- appliable to all variables
- outside a block: `static` specifies that a variable has internal linkage -> help implement _information hiding_
- inside a block: `static` changes the variable's duration from automatic to static

(remark)
- a `static` variable in a block is initialized only once, prior to program execution,  
    whereas an `auto` variable is initialized everytime it comes into existence
- for a recursive function, it gets a new set of `auto` variables. But if it has a `static`, this variable  
    is shared by all calls of the function
- a function could not return a pointer to an `auto` variable, but it is okay with `static`

## The extern Storage Class
- `extern int i`: this does not cause the compiler to allocate memory for i(not a definition of `i`)  
    -> it means that we need to get access to a variable defined elsewhere
- one exception: an `extern` declaration that initializes a variable serves as a definition of the variable

- a variable in an `extern` declaration always has static storage duration
- scope: inside a block -> block / o.w. -> file scope
- linkage: declared `static` before -> internal / o.w. -> external

## The register Storage Class
- __register__: a storage area located in a computer's CPU
- `register`: asks the compiler to store the variable in a register instead of keeping it in main memory
- this is a request, not a command

- the same storage duration, scope and linkage as an `auto` variable
- however, it has no address -> no pointer operation available
- suitable for cases in which a variable is accessed and updated frequently
- since C compilers have evolved so much sophisticated, we don't need that much nowadays

## The Storage Class of a Function
- only `static, extern`
- `extern`: for declaring that it could be shared by other files
- `static`: restrict linkage to internal. o.w., a function remains external by default
- function parameters: same as `auto`(automatic storage, block scope, and no linkage)
    - the only storage class that can be specified for parameters is `register`
