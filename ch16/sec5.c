// sec5. Enumerations

// we often need variables that have only a small set of meaningful values: Boolean, Card, etc.
// an enumeration is a type whose values are listed("enumerated") by the programmer, 
// who must create a name(an enumeration constant) for each of the values

// enumeration constants are subject to C's scope rules

// Enumeration Tags and Types

// declaring a tag

// enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
// enum suit s1, s2;

// typedef way -> just know that there is a such one

// Enumerations as Integers

// C treats enum variables and constants as integers, but we can change them
// by default the first member is 0, and the second one 1, ..., etc. if it were not for any initializations
