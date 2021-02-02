#ifndef ELEM_H_INCLUDED
#define ELEM_H_INCLUDED

struct BiNode{
	int data;
	BiNode* lchild;
	BiNode* rchild;
};

struct BiNodeTag {
	int data;
	BiNodeTag* lchild;
	BiNodeTag* rchild;
	bool ltag,rtag;
};


class BiTree
{
public:
	BiNode* Creat();
	void Pre();//前序遍历
	void In();//中序遍历
	void Post();//后序遍历
    BiNode *root = nullptr;//指向根结点的头指针
};

//线索二叉树
class ThreadBiTree
{
public:
	BiNodeTag* Creat(BiNodeTag *bn);
	void Pre();//前序遍历
	void In();//中序遍历
	void Post();//后序遍历
	BiNodeTag* root = nullptr;//指向根结点的头指针
};


class MaxHeapSelf {
public:
	// 构造最大顶堆
	void createMaxHeap(int* arr, int dataLen);
	void sortMaxHeap(int* arr, int dataLen);

};

class MinHeapSelf {
public:
	// 构造最大顶堆
	void createMinHeap(int* arr, int dataLen);
	//查询

};

#endif // ELEM_H_INCLUDED