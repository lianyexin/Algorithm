// Algorithm.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include "Elem.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <list>
#include <deque>
#include <vector>
#include <iterator>

#pragma comment(lib,"PhysicInfo.lib")

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	/*BiTree *bt = new BiTree;
	BiNode* bi = bt->Creat();
	bt->root = bi;
	bt->Pre();
	delete(bt);*/
	/*int arr[10] = { 20,12,35,15,10,80,30,17,2,1 };
	MaxHeap maxHeap;
	maxHeap.maxHeapCreate(arr,10);*/

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	vector<int>::iterator itor= v.begin();
	itor++;
	v.insert(itor, 7);

	

	return 0;
};