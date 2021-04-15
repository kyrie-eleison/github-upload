# sec1. Source Files
- a program may be divided among any number of _source files_
- source fines have the extention ```.c```, and contains part of the program(definitions of functions and variables)
- one source program must contain a function named ```main``` - which serves as the starting point for the program

- advantages
    - grouping helps clarify the structure of a program
    - each source file can be compile separately, which is a great time-saver if the program is large and must be changed often
    - good for reuse in the future

# sec2. Header Files
- how can a source file import functions and variables from another file?
- how can several files share the same macro definitions or type definitions? 
  -> ```#include``` makes it possible to share information(function prototypes, macro definitions, type definitions, etc.) among the source files

- how? ```#include``` tells the preprocessor to open a specified file and insert its contents into the current file  
  - thus, if several source files want to share the same information, we put that information in a fiole and then use ```#include```
  to braing the file's contents into each of the source files
  - we call this included file as _header file_, which has the extension of .h

  (remark)by convention, normally the terminology _source file_ refers to both .c and .h(written by programmers)

## The #include Directive
- ```#include <filename>```: for including header files from C's own library -> searches system header files
- ```#include "filename"```: for including other header files -> searches the current directoy, then search system header files
- although we can include directory information in the place of _filename_, but it is not recommended for portability
- ```#include preprocessing_tokens```: this is an alternative way. we can use not-hardcoded filenames

## Sharing Macro Definitions and Type Definitions
- we don't have to copy the definitions into the source files
- the program becomes easier to modify
- we don't have to worry about inconsistencies caused by source files containing different definitions of the same macro or type

## Sharing Function Prototypes
- when calling a function defined in another file, without making the compiler see the prototype of the function beforehand may cause unexpected behavior
- however, putting the prototype into each of the source file makes another maintenance nuisance
- solution: write the function's prototype in a header file!
    - first, make the header file _foo.h_, and put the function's prototype in it
    - include it also in _foo.c_ enabling the compiler to che k that the function's prototype in _foo.h_ matches its definitions in _foo.c_
    - the function from _foo.c_ to be shared in the program should be declared in _foo.h_
    - however, functions that are used only inside _foo.c_ must not be declared in _foo.h_

## Sharing Variable Declarations 
- in the case of sharing functions, we put definitions in one source file, and then put declarations in its corresponding header file
- sharing variables is almost the same

- declare vs define a variable
    - declare&define: ```int a``` -> causing the compiler to set aside space for ```a```
    - only declare: ```extern int a``` -> tells the compiler that ```a``` is defined somewhere else in the program(no need to allocate space for this)
    - when declaring arrays, we may omit the length of them: ```extern int a[]```

- we have a problem of checking the consistency between declarations and definitions of variables in a program
- declarations of shared variables are usually put in header files
- but this practice has some undesirable features so that nowadays we implement different design patterns

## Nested Includes
- we may include other header files in a header file -> it is more common in C++ to use nested includes

## Protecting Header Files
- if a source file includes the same header file twice, compilation errors may occur
    - common problem when header files include other header files
    - not always: when the file contains a type definition, it gets errors

- how to protect all header files against multiple inclusion?
    - we'll enclose the contents in an ```#ifndef - #endif``` pair in a header file

## #error Directives in Header Files
- this could be used to protect files against inclusion of undesirable header files
