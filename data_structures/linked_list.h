//
// Created by vitalyr on 18-10-14.
//

#ifndef DATA_STRUCTURES_LINKED_LIST_H
#define DATA_STRUCTURES_LINKED_LIST_H

#include "const_values.h"

typedef int Result; //using Result expressing the state of operation(failure or success)
typedef int ElementType;

//! This is the implementation of linked list.

//! Define LinkedList

typedef struct node{
    ElementType data;
    struct node *next;
} Node;
typedef struct Node *LinkedList;


#endif //DATA_STRUCTURES_LINKED_LIST_H
