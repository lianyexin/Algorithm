#include "stdafx.h"
#include "Elem.h"
#include <iostream>
#include <stack>

// 中序遍历创建
BiNodeTag* ThreadBiTree::Creat(BiNodeTag *bn) {
	if (bn) {
		std::cout << "emputy tree" << std::endl;
		return bn;
	}
	BiNodeTag* local = bn;
	std::stack<BiNodeTag*> stack;
	//中序遍历
	while (local || !stack.empty()) {  //如果下一个结点不为空,或者栈非空
		// 左子树入栈
		while(local) {
			stack.push(local);
			local = local->lchild;
		}
		local = stack.top();
		std::cout << local->data << std::endl;
		stack.pop();
		local = local->rchild;
	}
	return bn;
};