#include <stdio.h>
#include <stdlib.h>
#include "link_list.h"
#include <Winsock2.h>
#include <pthread.h>
#include <Winbase.h>

void *aggregate(int num){
    printf("call aggregate%d\n",num);
    u_int64 pid = GetCurrentProcessId();
    u_int64 tid = GetCurrentThreadId();
    printf("process id = %d\n",pid);
    printf("thread id = %d\n",tid);
    for(int i=0;i<10;i++){
        printf("thread%d=%d\n",num,i);
        Sleep(1);
    }
}


int main(void)
{
    puts("----> start");
    puts("in main");
    struct listElem header;
    header.data = 0;
    header.nextElem = NULL;
    insertElem(1, &header);
    findElem(1, &header);
    puts("----> end");
    pthread_t ptht[2];


    int status1 = pthread_create(&ptht[0],NULL,aggregate,1);
    int status2 = pthread_create(&ptht[1],NULL,aggregate,2);
    
    pthread_join(ptht[0],NULL);
    pthread_join(ptht[1],NULL);




    return 0;
}
