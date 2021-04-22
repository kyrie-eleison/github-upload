# sec5. Linked Lists
- a chain of nodes, with each node containing a pointer to the next node in the chain
- the last node contains a null pointer
- with Linked List, we can easily insert and delete nodes in a linked list, allowing the list to grow and shrink as needed
- On the other hand, we lose ``O(1)`` access: an access takes ``O(n)`` amount of time

## Declaring a Node Type
1. we'll use ``struct`` to define a node

``
struct node {
    int value;
    struct node *next;
}
``

(remark)
- when a structure has a member that points to the same kind of structure, like above, we are required to use a struct tag

2. next, we need a variable that always points to the first node in the list

```
struct node *first = NULL; // it is empty at the moment
```

## Creating Nodes
1. allocate memory for the node
2. store data into the node
3. inserting the node into the list

- first we need a variable that can point to the node temporarily
`` struct node *new_node; ``

- then use `malloc` to allocate memory for the new node, saving the return value in `new_node`
`` new_node = malloc(sizeof(struct node)); ``

- next, we'll store data into the `value` property of the new node
`` (*new_node).value = 10; ``

## The -> Operator
- used when accessing a member of a structure using a pointer
- `` (*new_node).value = 10; `` is equivalent to:
- `` new_node->value = 10; ``

## Inserting a Node at the Beginning of a Linked List
- modify the new node's `next` member to point to the node that was previously at the beginning of the list:  
    `` new_node->next = first; ``
- then, we'll make `first` point to the new node: `` first = new_node ``

## Searching a Linked List
- idiom(using ``for`` statement): `` for (p = first; p != NULL; p = p->next) ``

## Deleting a Node from a Linked List
1. locating the node to be deleted
2. altering the previous node so that it 'bypasses' the deleted node
3. calling `free` to reclaim the space occupied by the deleted node
