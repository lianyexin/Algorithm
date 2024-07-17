#include <malloc.h>
#include "link_list.h"

bool isEmpty(struct listElem* list){
    return list == NULL?false:true;
}

void insertElem(int elem,struct listElem* list) {
    if(list == NULL){
        printf("the list is null pointer \n");
    }
    struct listElem newElem;
    struct listElem* p = list;
    while(1){
        if(p->nextElem == NULL){
            newElem.data = elem;
            newElem.nextElem = NULL;
            p->nextElem = &newElem;
            printf("insert data end \n");
            break;
        } else{
            p = p->nextElem;
        }
    }
}

int findElem(int elem,struct listElem* list) {
    // 元素位置
    int location = 0;
    if(list == NULL){
        printf("the list is null pointer \n");
        return -1;
    }
    struct listElem* p = list;
    // 查找元素
    while(1){
        if(p->data == elem){
            printf("find the data:%d in list[%d] \n",elem,location);
            return location;
        }
        if(p->nextElem == NULL){
            printf("can not find element in list \n");
            return -1;
        }
        p = p->nextElem;
        location++;
    }
}

int deleteElem(int elem,struct listElem* list){
    int findLocation = 0;
    if(list == NULL){
        printf("the list is null pointer \n");
        return -1;
    }
    struct listElem* p = list;
    struct listElem* front = NULL;
    while(1){
        if(p->data == elem){
            printf("find the data:%d in list[%d] \n",elem,findLocation);
            if(p->nextElem == NULL){
                
            }

            return findLocation;
        }
        if(p->nextElem == NULL){
            printf("can not find element in list \n");
            return -1;
        }
    }
}


int size(struct listElem* list){
    if(list==NULL){
        printf("the list is null pointer \n");
        return ;
    }

}

