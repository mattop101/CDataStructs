/*
*
* list.h
* 2016-08-09
*
* Author: Matthew
* <mno32@uclive.ac.nz>
*
* Implementation of a singly-linked list data structure in C.
*
*/

#include <stdlib.h>

typedef struct node_s {
    size_t value;
    struct node_s* next;
} Node;

Node* makeNode(size_t value);
size_t* getItem(Node* root, size_t i);
void append(Node* root, size_t value);
void freeList(Node* root);
void printList(Node* root);
