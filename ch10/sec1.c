// sec1. Local Variables

// automatic storage duration:
// storage duration(extent) of a variable: the portion of program execution during which storage for the variable exists
// storage for a local variable is 'automatically' allocated when the enclosing functino is called and deallocated when the function returns

// static local variables
// static storage duration:
// this variable has a permanent storage location -> retains its value throughout the execution of the program, but still has its block
// a static variable is a place to hide data from other functions but retain it for future calls of the same function

// parameters

// automatic storage duration, block scope
// different from local variables, parameters are initialized automatically when a function is called

// sec2. external variables = global variables

// static storage duration, file scope

// sec3. blocks

// variables can be declared in a block: block scope, automatic storage duration, declared as static being available

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int secret_number;

void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void) {
    char command;
    printf("Guess the secret nubmer between and %d. \n\n", MAX_NUMBER);
    initialize_number_generator();
    do {
        choose_new_secret_number();
        printf("A new number has been chosen.\n");
        read_guesses();
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'Y' || command == 'y');
}

void initialize_number_generator(void) {
    srand((unsigned) time(NULL));
}

void choose_new_secret_number(void) {
    secret_number = rand() % MAX_NUMBER;
}

void read_guesses(void) {
    int guess;
    int try_number = 0;
    
    while (1) {
        printf("Enter guess: ");
        scanf("%d", &guess);
        try_number++;

        if (guess < secret_number) {
            printf("Too low; try again.");
        } 
        if (guess > secret_number) {
            printf("Too high; try again.");
        }
        if (guess == secret_number) {
            printf("you won in %d guesses! ", try_number);
            break;
        }
    }
}