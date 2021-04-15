// sec1. How the Preprocessor Works

// preprocessing directives: #define, #include 

// 1. macro: #define defines a 'macro' / the preprocessor responds to #define directive by storing the name of the macro 
// together with its definition. if the macro is used later in the program, the preprocessor 'expands' the macro,
// replacing it by its defined value

// 2. include: #include tells the preprocessor to open a particular file and 'include' its contents as part of the file being compiled

// whole picture: source code => preprocessor => source code modified(removing directives) => compile => object code(what machine can understand)
// remark: although nowadays the preprocessor is a part of the compiler, it need not be, and it could be separated
//         the preprocessor may make an output which possibly contains a part which is not C
//         since it has only a limited knowledge of C, it may create illegal programs as it executes directives

// sec2. Preprocessing Directives

// 1) Macro definition: #define defines a macro / #undefine removes a macro
// 2) File inclusion: #include
// 3) Conditional compilation: #if, #ifdef, #ifndef, #elif, #else, #endif -> allow blocks of text to be either included in or excluded
//                              from a program

