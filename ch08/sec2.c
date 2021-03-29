// sec2. Multidimensional Arrays

// the way a multi-dim array is stored: row by row, as a one-dim array

// initialization: if an initializer is not large enough, other elements are all zero assigned
// designated initializers: eg. double ident[2][2] = {[0][0] = 1.0, [1][1] = 1.0}; 
// -> other values are all zeros

// const quantifier 

// sec3. Variable_Length Arrays

// You don't have to set the length of an array to be constant -> a variable can get into it

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};

    srand((unsigned) time(NULL));

    scanf("%d", &num_cards);

    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            printf("%c%c ", rank_code[rank], suit_code[suit]);
            num_cards--;
        }
    }
    printf("\n");

    return 0;
}
