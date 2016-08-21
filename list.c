/*
*
* list.c
* 2016-08-09
*
* Author: Matthew
* <mno32@uclive.ac.nz>
*
* Implementation of a singly-linked list data structure in C.
*
*/

#include <stdio.h>
#include "list.h"


/* Creates a new node, returning a pointer to the new node's address
 * in memory */
Node* makeNode(size_t value)
{
    Node* n = malloc(sizeof(Node));
    n->value = value;
    n->next = NULL;
    return n;
}

/* Frees memory taken by a list */
void freeList(Node* root)
{
    Node* temp = NULL;
    Node* n = root;
    while (n) {
        temp = n->next;
        free(n);
        n = temp;
    }
}

/* Appends a a value to the list, given its root node */
void append(Node* root, size_t value)
{
    Node* n = root;
    while (n->next != NULL) {
        n = n->next;
    }
    n->next = makeNode(value);
}

/* Prints a list, given its root node */
void printList(Node* root)
{
    Node* n = root;
    while (n) {
        printf("%zd ", n->value);
        n = n->next;
    }
    printf("\n");
}

/* Returns a pointer to index i if it exists, otherwise returns a null
 * pointer */
size_t* getItem(Node* root, size_t i)
{
    size_t j = 0;
    Node* n = root;
    
    while (n && j < i) {
        n = n->next;
        j++;
    }
    
    return (j == i) ? &n->value : NULL;
}

int main()
{
    //~ Node* root = makeNode(50);
    //~ for (int i = 100; i > 90; i -= 2) {
        //~ append(root, i);
    //~ }
    //~ append(root, 5);
    //~ append(root, 87);
    //~ printList(root);
    //~ freeList(root);
	return 0;

}
