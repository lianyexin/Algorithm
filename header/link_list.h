#ifndef LINK_LIST_H
#define LINK_LIST_H
struct linkList {
    int elemet;
    struct linkList* next;
};


void  addElement(struct linkList *link,int newData);

#endif