#pragma once

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef int SLTDataType;
struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};

typedef struct SListNode SLTNode;
//��ӡ,����ı�ͷָ�룬��һ��ָ��
void SListPrint(SLTNode* phead);

//���ܻ�ı�ͷָ�룬������ָ��
//β��
void SListPushBack(SLTNode** pphead, SLTDataType x);
//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x);
//ͷɾ
void SListPopFront(SLTNode** pphead);
//βɾ
void SListPopBack(SLTNode** pphead);


//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x);

//��pos��ǰ�����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* pos);

