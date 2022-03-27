#include<stdio.h>
#include<stdlib.h>

#include"Queue.h"

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;

	BTDataType data;
}BTNode;

//ǰ��  ��-������-������
void PrebOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%c ", root->data);
	PrebOrder(root->left);
	PrebOrder(root->right);
}

//����  ������-��-������
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}

//����  ������-������-��
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}


//int size = 0;
//void TreeSize(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	else
//	{
//		++size;
//	}
//	TreeSize(root->left);
//	TreeSize(root->right);
//}
//
//void TreeSize(BTNode* root,int* psize)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	else
//	{
//		++(*psize);
//	}
//	TreeSize(root->left,psize);
//	TreeSize(root->right,psize);
//}

int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

// Ҷ�ӽڵ�ĸ���
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;

	if (root->left == NULL && root->right == NULL)
		return 1;

	return  TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

//�ö��б���
void LevelOrder(BTNode* root)
{
	// ����˼·����һ�����ʱ�����һ��ڵ��
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->data);

		if (front->left)
		{
			QueuePush(&q, front->left);
		}

		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	printf("\n");
	QueueDestory(&q);
}

int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;
	
	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	/*TreeSize(A);
	printf("TreeSize:%d\n", size);

	size = 0;
	TreeSize(B);
	printf("TreeSize:%d\n", size);*/

	/*int Asize = 0;
	TreeSize(A, &Asize);
	printf("TreeSize:%d\n", Asize);

	int Bsize = 0;
	TreeSize(B, &Bsize);
	printf("TreeSize:%d\n", Bsize);*/

	PrebOrder(A);
	printf("\n");

	InOrder(A);
	printf("\n");

	PostOrder(A);
	printf("\n");

	printf("TreeSize:%d\n", TreeSize(A));
	printf("TreeSize:%d\n", TreeSize(B));
	printf("TreeLeafSize:%d\n",TreeLeafSize(A));

	LevelOrder(A);
	return 0;
}