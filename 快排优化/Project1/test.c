#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <time.h>
#include <stdlib.h>

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void Print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; ++j)
	{
		for (int i = 0; i < n - j - 1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
			}
		}
	}
}

void TestBubbleSort()
{
	int a[] = { 3,6,4,2,1,7,9,8,5,0 };
	BubbleSort(a, sizeof(a)/sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

//��������
int GetMidInder(int* a, int left, int right)
{
	int mid = (left + right) >> 1;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[right] < a[left])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else   //a[left]>mid
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if(a[right]>a[left])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

//�����ڿӷ�������ȱ�㣨������������ʱ����ʱЧ�Ͳ��뷨һ����
//��˶��������Ż�������һ������ȡ���������Ŀӣ��ﵽһ���Ż���Ч��

void QuickSort(int* a, int left, int right)
{
	int index = GetMidInder(a, left, right);
	Swap(&a[left], &a[index]);
	int begin = left, end = right;
	int pivot = begin;
	int key = a[begin];

	while (begin < end)
	{
		//��С
		while (begin < end && a[end] >= key)
			--end;
		a[pivot] = a[end];
		pivot = end;
		//�Ҵ�
		while (begin < end && a[begin] <= key)
			++begin;
		a[pivot] = a[begin];
		pivot = begin;
	}
	pivot = begin;
	a[pivot] = key;

	// QuickSort(a, left, pivot - 1);
	// QuickSort(a, pivot + 1, right);

	// [left, right]
	// [left, pivot-1] pivot [pivot+1, right]
	// ������������������������Ǿ������ˣ���������������أ� ���εݹ�
	//С�Ż�
	if (pivot - 1 - left > 10)
	{
		QuickSort(a, left, pivot - 1);
	}
	else
	{
		InsertSort(a + left, pivot - 1 - left + 1);
	}
	if (right - (pivot + 1) > 10)
	{
		QuickSort(a, pivot + 1, right);
	}
	else
	{
		InsertSort(a + pivot + 1, right - (pivot + 1) + 1);
	}
}

void TestQuickSort()
{
	int a[] = { 3,6,4,2,1,7,9,8,5,0 };
	QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
	Print(a, sizeof(a) / sizeof(int));
}

// ������������ܶԱ�
void TestOP()
{
	srand(time(0));
	const int N = 100000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];

	}

	int begin1 = clock();
	BubbleSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	QuickSort(a2, 0, N-1);
	int end2 = clock();

	printf("BubbleSort:%d\n", end1 - begin1);
	printf("QuickSort:%d\n", end2 - begin2);

	free(a1);
	free(a2);

}

int main()
{
	TestQuickSort();
	TestOP();
	return 0;
}