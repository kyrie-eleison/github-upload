# 14.4 Conditional Compilation
- the inclusion or exclusion of a section of program text depending on the outcome of a test performed by the preprocessor

## The #if and #endif Directives
```
#define DEBUG 1

#if DEBUG
// ...
#endif
```
- the compiler checks the value of DEBUG, and if it is not zero, it leaves the code inside(but #if, #endif disappear)
- however, if it is zero, it removes all the code from the program

## The defined Operator
- defined(identifier) => 1 if identifier is defined as a macro, 0 otherwise

## The #ifdef and #ifndef Directives
- \#ifdef identifier = \#if defined(identifier)
- \#ifndef identifier = \#if !defined(identifier)

## The #elif and #else Directives
- used with \#if to test a series of conditions

## Uses of Conditional Compilation
- writing programs that are portable to several machines or OS

```
#if defined(WIN32)
...
#elif defined(MAC_OS)
...
#elif defined(LINUX)
...
#endif
```

- writing programs that can be compiled with different compilers
- providing a default definition for a macro

```
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 256
#endif
```

- temporarily disabling code that contains comments