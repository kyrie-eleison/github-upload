# sec4. Building a Multiple-File Program
- the basic steps for building a large program
    - compiling: each source file in the program must be compiled separately
        - headers need not be compiled. They are automatically compiled whenever a source file that includes it is compiled
        - after compiling each source file, the compiler genereates a file containing object code: called _object files_

    - linking: the linker combines the object files created in the compiling step to produce an executable file
        - the linker is responsibile for resolving external references left behind by the compiler

- ```gcc -o filename_for_execution file1, file2, file3, ..., file_n```: compiles each of file_j and combine their object files to the linker, resulting in the file named as _filename\_for\_execution_

## Makefiles
- however, building a large program requires recompiling all the _unchanged_ source files(which is unnecessary)
- UNIX originated the concept of the __makefile__, a file contaning the information necessary to build a program
     - it does not only list the files that are part of the program, but also describes their dependencies

```
justify: justify.o word.o line.o
        gcc -o justify justify.o word.o line.o

justify.o: justify.c word.h line.h
        gcc -c justify.c
```

- each group of line is called as a rule
- first line -> target file: depending files
- second line -> the command to be executed if the target should need to rebuilt due to changes in the dependent files
- ```gcc -c```: only compile, but do not link

- once we have created a makefile for a program, then we can use ```make``` utility to build the program
- ```make``` can determine which files are out of date
- makefiles correspond to other program maintenance tools like 'project files'

## Errors During Linking
- misspelling, missing files, and missing libraries

## Rebuilding a Program
- a single source file: only recompile files with latest changes
- a header file: recompile all the files including this header file

## Defining Macros Outside a Program
- C compilers provide some methods of specifying the value of a macro at the time a program is compiled  
-> this makes it easy to change the value of a macro without editing any of the program's files


