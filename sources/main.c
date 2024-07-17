#include <stdio.h>
#include <stdlib.h>
#include "link_list.h"


int main(void) {
    puts("start ...");
    printf("in main");
    struct listElem header;
    header.data = 0;
    header.nextElem =NULL;
    insertElem(1,&header);
    findElem(1,&header);
    return 0;
    puts("end ...");
    return 0;
}
