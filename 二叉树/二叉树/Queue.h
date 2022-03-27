#pragma once

//#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//ǰ������
struct BinaryTreeNode;

typedef struct BinaryTreeNode* QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

//��ʼ��
void QueueInit(Queue* pq);
//����
void QueueDestory(Queue* pq);
//��β��
void QueuePush(Queue* pq, QDataType x);
//��ͷ��
void QueuePop(Queue* pq);
//ȡͷֵ
QDataType QueueFront(Queue* pq);
//ȡβֵ
QDataType QueueBack(Queue* pq);
//�Ӵ�С
int QueueSize(Queue* pq);
//�ж��Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);