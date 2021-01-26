#include "stdafx.h"
#include "Elem.h"
#include <iostream>
#include <stack> 

void setLeaf(BiNode* bn, BiNode *newData) {
	if (bn->data >= newData->data) {
		if (bn->lchild == nullptr) {
			bn->lchild = newData;
			return;
		}
		else {
			setLeaf(bn->lchild, newData);
		}
	}else {
		if (bn->rchild == nullptr) {
			bn->rchild = newData;
			return;
		}
		else {
			setLeaf(bn->rchild, newData);
		}
	}
};


BiNode* BiTree::Creat()
{
	BiTree *bt =new BiTree;
	int ch;
	//输入结点数据信息
	while (std::cin >> ch) {
		printf("read data %d\n", ch);
		// 结束节点输入，停止构造二叉树
		if (ch == 0) {
			break;
		}
		else {
			BiNode *bn = new BiNode;
			bn->data = ch;//生成结点，将输入的值赋给data
			bn->lchild = nullptr;
			bn->rchild = nullptr;
			if (bt->root == nullptr) {
				bt->root = bn;
			}
			else {
				setLeaf(bt->root, bn);
			}
		}
	}
	return bt->root;
}

//前序遍历
void BiTree::Pre() {
	BiNode* p = root;
	std::stack<BiNode*> bStack;
	while (p || bStack.empty()) {
		//遍历左子树
		if (p) {
			std::cout << p->data << std::endl;
			bStack.push(p);
			p = p->lchild;
		}
		else {
			p = bStack.top();
			bStack.pop();
			std::cout << p->data << std::endl;
			p = p->rchild;
		}
	}

	

}


