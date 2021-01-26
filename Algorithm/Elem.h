#ifndef ELEM_H_INCLUDED
#define ELEM_H_INCLUDED

struct BiNode{
	int data;
	BiNode* lchild;
	BiNode* rchild;
};


class BiTree
{
public:
	BiNode *Creat();
	void Pre();//前序遍历
	void In();//中序遍历
	void Psot();//后序遍历
    BiNode *root = nullptr;//指向根结点的头指针
};


class MaxHeap {
public:
	// 构建大顶堆
	void maxHeapCreate(int* originHeap, int len);
	// 堆排序
	void maxHeapSort(int* originHeap, int len);
};

#endif // ELEM_H_INCLUDED