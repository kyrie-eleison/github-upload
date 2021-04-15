# sec5. Miscellaneous Directives

## The #error Directive
- ```#error message```: the preprocessor prints the message if it encounters this

## The #line Directive
- used to alter the way program lines are numbered
    - ```#line n```: causes subsequent lines in the program to be numbered n, n+1, ...
- also, used to make the compiler think that it's reading the program from a file with a different name
    - ```#line n "file"```: the lines that follow this directive are assumed to come from _file_, with line numbers starting at n

- this directive may change the values of ```__LINE__``` or ```__FILE__```
- most compilers will use the information from the #line directive when generating error messages

# The #Pragma Directive
- ```#pragma tokens```: but the tokens are commands that are provided by different compilers

### The _Pragma Operator(C99)
- ```_Pragma(string-literal)``` == ```#pragma destringized(string-literal)```
- this lets us work around the limitation that a preprocessing directive can't generate another directive