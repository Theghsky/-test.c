#pragma once

#include<iostream>
using namespace std;

class Queue
{
public:

	struct Node
	{
		int data;
		Node* pNext;
		Node(int v)
			:data(v)
			, pNext(nullptr)
		{}
	};

	Queue();
	~Queue();

	bool isEmpty()
	{
		return m_pFirst == nullptr;
	}

	//�����
	bool pushBack(int data);
	//��ȡ��һ��
	int getFront();
	//������
	bool popFront();
	bool clear();

	int PrintQueue();

protected:
	Node* m_pFirst, * m_Back;
	int m_size;
};