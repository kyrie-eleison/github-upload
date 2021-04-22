// sec5. Linked Lists

#include <stdlib.h>

#define NULL ((void*)0)

struct node {
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int n) 
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    new_node->value = n;
    new_node->next = list;

    return new_node;
}

struct node *search_list(struct node *list, int n)
{
    struct node *p;

    for (p = list; p != NULL; p = p->next) {
        if (p->value == n) {
            return p;
        }
    }

    return NULL;
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur, *prev;

    for (cur = list, prev = NULL;
        cur != NULL && cur->value != n;
        prev = cur, cur = cur->next)
    ;

    if (cur == NULL) {
        return list;
    }

    if (prev == NULL) {
        list = list->next;
    } else {
        prev->next = cur->next;
    }

    free(cur);
    return list;
}
