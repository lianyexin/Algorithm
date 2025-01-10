
#include "sort.h"
// 计算排序
void *countingSort(int *orginal, int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        max = max < orginal[i] ? orginal[i] : max;
    }
    int rst[max];
    memset(rst, 0, sizeof(rst));
    printf("max nuber:%d\n", max);
    for (int i = 0; i < length; i++)
    {
        rst[orginal[i] - 1] += 1;
    }
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < rst[i]; j++)
        {
            printf("%d \n", (i + 1));
        }
    }
}

// 希尔排序
void shellSort(int arr[], int n) {
    // 初始间隔设为数组长度的一半
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // 对每个间隔进行插入排序
        for (int i = gap; i < n; i++) {
            // 保存当前值
            int temp = arr[i];
            int j;
            // 对间隔为gap的元素进行排序
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void shellSortSelf(int arr[]){
     printf("size = %d\n",sizeof(arr)/sizeof(int));
     int size = sizeof(arr)/sizeof(int);
     int grap = size/2;
     int temp = 0;
     while(grap != 0){
         printf("grap = %d\n",grap);
         int thisGrap = grap;
         for(int i =0;i<size;i++){
             if(thisGrap >= size){
                 break;
             }
             if(arr[i] > arr[thisGrap]){
                 temp = arr[i];
                 arr[i] = arr[thisGrap];
                 arr[thisGrap] = temp;
             }
             thisGrap++;
         }
         grap--;
     }
     for(int j = 0;j< size;j++){
         printf("%d\n",arr[j]);
     }
     
 }