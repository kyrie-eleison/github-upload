# sec5. Linked Lists
- a chain of nodes, with each node containing a pointer to the next node in the chain
- the last node contains a null pointer
- with Linked List, we can easily insert and delete nodes in a linked list, allowing the list to grow and shrink as needed
- On the other hand, we lose ``O(1)`` access: an access takes ``O(n)`` amount of time

## Declaring a Node Type
1. we'll use ``struct`` to define a node

```
struct node {
    int value;
    struct node *next;
}
```

(remark)
- when a structure has a member that points to the same kind of structure, like above, we are required to use a struct tag

2. next, we need a variable that always points to the first node in the list

```
struct node *first = NULL; // it is empty at the moment
```

## Creating Nodes

## The -> Operator

## Inserting a Node at the Beginning of a Linked List

## Searching a Linked List

## Deleting a Node from a Linked List

