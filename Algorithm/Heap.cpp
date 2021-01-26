#include "stdafx.h"
#include "Elem.h"
#include <iostream>


void swichNodeDate(int* originHeap, int currentLocation);
void printArray(int* originHeap, int len);

/*
* 二叉树采用顺序结果
* 节点的子节点 2i+1  2i+2
* 大顶堆下沉SINK
*/
void MaxHeap::maxHeapCreate(int* originHeap,int len) {
	// get the first leaf node location by 'len'
	int firstLeaf = ceil((double)len / 2) -1; // 最后一个非叶子节点
	firstLeaf++;  // 第一个叶子节点
	printf("the first leaf node is:%d\n", *(originHeap + firstLeaf ));
	//从最后一个叶子节点处理
	/*for (int i = (len-1); i >= firstLeaf; i--) {
		printf("##########  i = %d\n", i);
		swichNodeDate(originHeap,i);
	}*/
	// 从第一个结点开始遍历到最后一个非叶子结点
	for (int i = 0; i < firstLeaf; i++) {

	}
	printArray(originHeap, len);
};

// 交换节点值的位置
void swichNodeDate(int* originHeap, int currentLocation) {
	//自底向上 如果遍历到根 结束
	if (currentLocation = 0) {
		return;
	}


};

//void swichNodeDate(int* originHeap, int currentLocation) {
//	printf("currentLocation = %d\n", currentLocation);
//	if (currentLocation <= 0) {
//		printf("---end---\n");
//		return;
//	}
//	// 大顶
//	int parentLocation = ceil((double)currentLocation / 2) - 1;
//	int temp;
//	if (*(originHeap + currentLocation) > *(originHeap + parentLocation)) {
//		temp = *(originHeap + currentLocation);
//		*(originHeap + currentLocation) = *(originHeap + parentLocation);
//		*(originHeap + parentLocation) = temp;
//		//printArray(originHeap, 10);
//	}
//	swichNodeDate(originHeap, parentLocation);
//};

void printArray(int* originHeap, int len) {

	printf("the result is: ");
	for (int i = 0; i < len; i++)
		printf(" %d ", *(originHeap + i));
	std::cout << std::endl;
};

void MaxHeap::maxHeapSort(int* originHeap, int len) {

};

