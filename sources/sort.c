
// 计算排序
int *countingSort(int orginal[],int length){
    int max = 0;
    for(int i=0;i<length;i++){
       max = max<orginal[i]?orginal[i]:max;
    }
    int rst[max];
    memset(rst, 0, sizeof(rst));
    printf("max nuber:%d\n",max);
    for(int i=0;i<length;i++){
        rst[orginal[i]-1] += 1;
    }
    for(int i=0;i<max;i++){
        for(int j =0 ;j<rst[i];j++ ){
            printf("%d \n",(i+1));
        }
    }
}