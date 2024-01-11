#include <stdio.h>
#include <stdlib.h>
#include "header/link_list.h"


int main(void) {
    puts("start ...");
    struct linkList* link = (struct linkList*)malloc(sizeof(struct linkList));
    link->elemet = 1;
    link->next = NULL;
    addElement(link, 2);
    puts("end ...");
    return 0;
}
