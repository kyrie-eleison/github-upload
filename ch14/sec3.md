# sec3. Macro Definitions

## 1. Simple Macros( = object-like macros)
- #define identifier replacement-list
- replacement-list: any sequence of preprocessing tokens(identifiers, keywords, numeric constants, character constants, string literals, operators, and punctuation)
- 'identifier represents replacement-list': the preprocessor substitutes the identifier with the replacement-list

### usages
- usually used for defining constants
- controlling conditional compilation: for example, we may have #define DEBUG to tell the compiler to compile in 'debugging mode'

## 2. Parametrized Macros( = function-like macros)
- #define identifier(x1, x2, ..., xn) replacement-list
- the preprocessor stores the definition away for later use -> when identifier(arg1, arg2, ..., argn) appears, the preprocessor replaces it with replacement-list
- for example: #define MAX(x,y) ((x)>(y)?(x):(y))
- it doesn't have to be that the parameters are in the function

### advantages/disadvantages over using mere functions
- slightly faster: no run-time overhead
- macros are generic: no type declaration for arguments

- may increase the source code size
- not type checked, no type conversion
- we have pointers to functions but no pointers to macros
- may evaluate its arguments more than once

## 3. The # Operator
- ##, ### are not recognized by the compiler: but executed during preprocessing
- #: converts a macro argument into a string literal( = "stringization")
- only appearable in the replacement list of a parameterized macro

## 4. The ## Operator
- \#\# pastes two tokens together to form a single token( = token-pasting)

## 5. General Properties of Macros
- a macro's replacement list may contain invocations of other macros
- the preprocessor replaces only entire tokens, not portions of tokens: so it ignores macro names that are a part of identifiers, character constants, etc.
- a macro definition normally remains in effect until the end of the file in which it appears
- a macro may not be defined twice unless the new definition is identical to the old one
- macros may be 'undefined' by the #undef directive: eg) ```undef N```

## 6. Parentheses in Macro Definitions
- why do we need that so much of parentheses in macros defintion?
- rules: place parentheses ```()``` whenever
    - there is an operation: ```#define TWOTIMESTRHEE (2*3)```
    - there are parameters: ```#define XTIMESY(x,y) ((x)*(y))```

-> without the parentheses, we can't guarantee that the compiler will treat replacement lists and arguments as whole expressions


## 7. Creating Longer Macros
- by wrapping a bunch of statements with ```do { } while(0)```, we can create a longer macros
- simply wrapping whith ```{}``` would not work

## 8. Predefined Macros
- basic: ```__LINE__, __FILE__, __DATE__, __TIME__, __STDC__```
- additional ones in C99: ```__STDC_HOSTED__, __STDC__VERSION__```

## 9. Macros with a Variable Number of Arguments
- C99 allows a macro call to have empty argument(s)
- C99 allows an unlimited number of arguments to macros: use ellipsis(```...```), ```__VA_ARGS__```

## 10. The __func__ Identifier
- a new feature of C99, but nothing to do with the preprocessor
- however, it is used for debugging like many preprocessor features
- ```static const char __func__[] = "function-name"```(works like a string variable)