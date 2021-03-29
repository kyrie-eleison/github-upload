// sec1. Functions

// return-type function-name(argument-type argument-name) {
//   statements
// }

// note that a function cannot return an array
// a variable declared within a function body is only valid within that body

// sec2. function declaration

// if a function is defined after int main,
// since C assumes a function returns int by default(we call it an implicit declaration of the function by the compiler)
// after it meets the actual fucntion definition, we get an error from this collision
// So if we want the function definition to be located behind the main function, 
// we briefly 'introduce' our functions to the compiler -> called a "function declaration"