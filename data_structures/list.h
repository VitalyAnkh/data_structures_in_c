//
// Created by vitalyr on 18-10-14.
//

#ifndef DATA_STRUCTURES_LIST_H
#define DATA_STRUCTURES_LIST_H

#endif //DATA_STRUCTURES_LIST_H


#define MAXSIZE_OF_LIST 100
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0



typedef int Result; //using Result expressing the state of operation(failure or success)
typedef int ElementType;


//! This is the  implement of squence list. I define two operations on it:
//! GetElement(), InsertElement() and DeleteElement().
typedef struct {
    ElementType data[MAXSIZE_OF_LIST]; //the maximum length of the list is MAXSIZE_OF_LIST
    unsigned int length;
} SquenceList;

Result GetElement(SquenceList L, int i, ElementType *e) { //i is the offset value in the list
    if (L.length == 0 || i < 0 || i >= L.length || L.length == MAXSIZE_OF_LIST)
        return ERROR;
    else
        *e = L.data[i];
    return OK;
}

Result InsertElement(SquenceList *L, int i, ElementType e) {
    if (L->length == 0 || i < 0 || i >= L->length)
        return ERROR;
    else if (i <= L->length) {
        for (int k = L->length - 1; k >= i; k--) {
            L->data[k + 1] = L->data[k];
        }
    }
    L->data[i] = e;
    L->length++;
    return OK;
}

Result DeleteElement(SquenceList *L, int i, ElementType *e) {
    if (L->length == 0 || i < 0 || i >= L->length)
        return ERROR;
    *e = L->data[i];
    if (i <= L->length - 1) {
        for (int k = i; k <= L->length - 1; k++) {
            L->data[k] = L->data[k + 1];
        }
    }
    L->length--;
    return OK;
}


//! This is the implementation of linked list.

//! Define LinkedList
typedef struct node{
    ElementType data;
    struct node *next;
} Node;
typedef struct Node *LinkedList;


