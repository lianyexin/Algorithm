#include <stdio.h>
#include <stdlib.h>
#include "../header/link_list.h"

void  addElement(struct linkList* link,int newData){
    if(link == NULL){
        return;
    }
    printf("and new element to list: %d\n",newData);
    struct linkList* nextElem= (struct linkList*)malloc(sizeof(struct linkList));
    nextElem->elemet = newData;
    nextElem->next = NULL;
    link->next = nextElem;
}