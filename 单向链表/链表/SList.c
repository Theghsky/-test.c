#include"SList.h"
//��ӡ
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d-> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//�����½ڵ�
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//β��
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//��β�ڵ��ָ��
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//β�ڵ㣬�����½ڵ�
		tail->next = newnode;
	}
}

//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);

	newnode->next = *pphead;
	*pphead=newnode;
}

//ͷɾ
void SListPopFront(SLTNode** pphead)
{
	SLTNode* next = (*pphead)->next;
	free(*pphead);

	*pphead = next;
}

//βɾ
void SListPopBack(SLTNode** pphead)
{
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SLTNode* cmp = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			cmp = tail;
			tail=tail->next;
		}
		free(tail);
		cmp->next = NULL;
	}
}

//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

//��pos��ǰ�����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	if (pos == *pphead)
	{
		SListPushFront(pphead,x);
	}
	else
	{
		SLTNode* newnode = BuySListNode(x);
		SLTNode* tail = *pphead;
		while (tail->next != pos)
		{
			tail = tail->next;
		}

		tail->next = newnode;
		newnode->next = pos;

	}
}

//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* str)
{
	if (str == *pphead)
	{
		SListPopFront(pphead);
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != str)
		{
			tail = tail->next;
		}
		tail->next = str ->next;
		free(str);
	}
}