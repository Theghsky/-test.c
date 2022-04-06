#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "Stack.h"

void Print(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int GetMidIndex(int* a, int left, int right)
{
	int mid = (left + right) >> 1;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else // a[left] > a[mid]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

int PartSort1(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);

	int begin = left, end = right;
	int pivot = begin;
	int key = a[begin];

	// O��N��
	while (begin < end)
	{
		// �ұ���С���ŵ����
		while (begin < end && a[end] >= key)
			--end;

		// С�ķŵ���ߵĿ���Լ��γ��µĿ�λ
		a[pivot] = a[end];
		pivot = end;

		// ����Ҵ�
		while (begin < end && a[begin] <= key)
			++begin;

		// ��ķŵ���ߵĿ���Լ��γ��µĿ�λ
		a[pivot] = a[begin];
		pivot = begin;
	}

	pivot = begin;
	a[pivot] = key;

	return pivot;
}

void QuickSortNonR(int* a, int n)
{
	ST st;
	StackInit(&st);
	StackPush(&st, n - 1);
	StackPush(&st, 0);

	while (!StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);

		int right = StackTop(&st);
		StackPop(&st);

		int keyIndex = PartSort1(a, left, right);
		// [left, keyIndex-1] keyIndex [keyIndex+1, right]

		if (keyIndex + 1 < right)
		{
			StackPush(&st, right);
			StackPush(&st, keyIndex + 1);
		}

		if (left < keyIndex - 1)
		{
			StackPush(&st, keyIndex - 1);
			StackPush(&st, left);
		}
	}

	StackDestory(&st);
}

void TestQuickSortNonR()
{
	int a[] = { 49, 38, 65, 97, 76, 13, 27, 49 };

	QuickSortNonR(a, sizeof(a) / sizeof(int));

	Print(a, sizeof(a) / sizeof(int));
}

// ʱ�临�Ӷȶ���O(N*logN)
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);

	int gap = 1; // ÿ�����ݸ���
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			// [i, i+gap-1] [i+gap,i+2*gap-1]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

			// �鲢�������Ұ�������ܾͲ�����
			if (begin2 >= n)
				break;

			// �鲢�������Ұ����������, ����һ��
			if (end2 >= n)
			{
				end2 = n - 1;
			}

			int index = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[index++] = a[begin1++];
				}
				else
				{
					tmp[index++] = a[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}

			// ������ȥ
			for (int j = i; j <= end2; ++j)
			{
				a[j] = tmp[j];
			}
		}

		gap *= 2;
	}

	free(tmp);
}

void TestMergeSortNonR()
{
	int a[] = { 10, 6, 7 ,1, 3, 9, 4, 2, 8 };
	MergeSortNonR(a, sizeof(a) / sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}

int main()
{
	TestQuickSortNonR();
	TestMergeSortNonR();
	return 0;
}