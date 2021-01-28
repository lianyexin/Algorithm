#include "stdafx.h"
#include "Elem.h"
#include <iostream>


/*
* 二叉树采用顺序结果
* 节点的子节点 2i+1  2i+2
* 大顶堆下沉SINK
*/
void printArrayVal(int* arr, int arrLen) {
    std::cout << "the reuslt is: ";
    for (int i = 0; i < arrLen; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

void minSwap(int* arr, int dataLen, int current) {
    if (current+1 >= dataLen) {
        return;
    }
   int temp = *(arr + current);
    //移动到子结点
    current = 2 * current + 1;
    while (current < dataLen) {
        std::cout << "in while:" << current << std::endl;
        printArrayVal(arr, dataLen);
        // 存在右子节点，并且比左子结点大
        if (current+1 < dataLen && *(arr + current + 1) < *(arr + current)) {
            current++;
        }
        if (*(arr + current) < temp) {
            //交换
            *(arr + (current-1) / 2) = *(arr + current);
            *(arr + current) = temp;
        }else {
            //没需要比较的子结点，结束
            break;
        }
        current = 2 * current + 1;
    }
    //放置移动值到合适位置
    //*(arr + current) = temp;
};


void maxSwap(int* arr, int dataLen, int current) {
    if (current + 1 >= dataLen) {
        return;
    }
    int temp = *(arr + current);
    //移动到子结点
    current = 2 * current + 1;
    while (current < dataLen) {
        std::cout << "in while:" << current << std::endl;
        printArrayVal(arr, dataLen);
        // 存在右子节点，并且比左子结点大
        if (current + 1 < dataLen && *(arr + current + 1) > *(arr + current)) {
            current++;
        }
        if (*(arr + current) > temp) {
            //交换
            *(arr + (current - 1) / 2) = *(arr + current);
            *(arr + current) = temp;
        }
        else {
            //没需要比较的子结点，结束
            break;
        }
        current = 2 * current + 1;
    }
    //放置移动值到合适位置
    //*(arr + current) = temp;
};

//大顶堆
void MaxHeapSelf::createMaxHeap(int* arr, int dataLen) {
    std::cout << "the array length is:" << dataLen << std::endl;
    // the first leaf node location
    if (dataLen == 0) {
        std::cout << "no data in array" << std::endl;
        return;
    }
    int firstLeaf = (dataLen - 1) / 2;
    std::cout << "the first leaf location is:" << firstLeaf << std::endl;
    //对于每一个叶子
    for (int i = firstLeaf; i >= 0; i--) {
        std::cout << "move to node:" << i <<" vaule:"<<*(arr+i)<< std::endl;
        maxSwap(arr, dataLen, i);
        printArrayVal(arr, dataLen);
    }
    std::cout << "-- finish --" << std::endl;
};

//小顶堆
void MinHeapSelf::createMinHeap(int* arr, int dataLen) {
    std::cout << "the array length is:" << dataLen << std::endl;
    // the first leaf node location
    if (dataLen == 0) {
        std::cout << "no data in array" << std::endl;
        return;
    }
    int firstLeaf = (dataLen - 1) / 2;
    std::cout << "the first leaf location is:" << firstLeaf << std::endl;
    //对于每一个叶子
    for (int i = firstLeaf; i >= 0; i--) {
        std::cout << "move to node:" << i << " vaule:" << *(arr + i) << std::endl;
        minSwap(arr, dataLen, i);
        printArrayVal(arr, dataLen);
    }
    std::cout << "-- finish --" << std::endl;
};


void MaxHeapSelf::sortMaxHeap(int* arr, int dataLen) {
    int temp;
    std::cout << "-- Sort start --" << std::endl;
    for (int i = 1; i < dataLen; i++) {
        createMaxHeap(arr, dataLen+1-i);
        //交换首尾
        temp = *(arr + dataLen - i);
        *(arr + dataLen - i) = *arr;
        *arr = temp;
    }
    std::cout << "-- Sort finish --" << std::endl;
    printArrayVal(arr, dataLen);
};
