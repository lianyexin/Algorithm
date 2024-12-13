#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_
#include <stdbool.h>

struct listElem
{
    struct listElem *nextElem;
    int data;
};

void insertElem(int elem, struct listElem *list);
int findElem(int elem, struct listElem *list);
int deleteElem(int elem, struct listElem *list);
int size(struct listElem *list);
bool isEmpty(struct listElem *list);

#endif