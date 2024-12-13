
// 计算排序
void countingSort(int *orginal, int length)
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
void ShellSort(int *a, int n)
{
    int gap = n / 2;
    for (int j = 0; j < gap; j++)
    {
        for (int i = j; i < n - gap; i += gap)
        {
            int end = i;
            int temp = a[end + gap];
            while (end >= 0)
            {
                if (a[end] > temp)
                {
                    a[end + gap] = a[end];
                    end -= gap;
                }
                else
                    break;
            }
            a[end + gap] = temp;
        }
    }
}