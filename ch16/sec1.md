# sec1. Structure Variables
- structure: similar to other language's dictionary type

## Declaring Structure Variables
- an example: ```struct``` specifies a type, and ```part1, part2``` are variables of that type

```
struct { 
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1, part2;
```

- the members of a structure are stored in memory in the order in which they are declared
- different structures have their independent scopes for their members = no conflict between them

## Initializing Structure Variables
- similar to arrays: when an initializer can have fewer members than the structure it's initializing, the leftover members are given 0 as their initial value

```
struct { 
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1 = {1, "good", 12};
```

## Desiginated Initializers
- in this way, we don't need to care about the order of the members of a structure

```
part1 = {.number = 1, .name = "good", .on_hand = 12};
// .number : called a "designator"
```

## Operators on Structures
- how to access a member of a structure: ```part.number // => 1```
- modifying the value of a member: ```part.number = 12```
- surprisingly, structure assignment _copies_ the right-side and assign it to the left-side(even array members)
    - but only the same structure or the smae 'structure tag' can be used for assignments
    - no other operations available on entire structures: no ```===, !==```
    