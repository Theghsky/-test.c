#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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
//���
void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;//Ĭ��������
	while (child < n)
	{
		//ѡ�����Һ����д����һ��
		//С��       >
		if (a[child] < a[child + 1] && child + 1 < n)
		{
			child += 1;
		}
		//С��       <
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	//����  ʱ�临�Ӷȣ�O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDwon(a, n, i);
	}

	//�����򣬽���ѣ����򣬽�С��
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDwon(a, end, 0);
		--end;
	}
}

void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; ++i)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		Swap(&a[begin], &a[mini]);
		//���begin��maxi�ص�����Ҫ����һ��maxi��λ��
		if (begin == maxi)
		{
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);
		++begin;
		--end;
	}
}

void TestHeapSort()
{
	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
	HeapSort(a, sizeof(a) / sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}

void TestSelectSort()
{
	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
	HeapSort(a, sizeof(a) / sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}

// ������������ܶԱ�
void TestOP()
{
	srand(time(0));
	const int N = 100000;
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a3[i] = rand();
		a4[i] = a3[i];

	}

	int begin3 = clock();
	SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	HeapSort(a4, N);
	int end4 = clock();


	printf("SelectSort:%d\n", end3 - begin3);
	printf("HeapSort:%d\n", end4 - begin4);

	free(a3);
	free(a4);
}

int main()
{
	//TestHeapSort();
	TestSelectSort();
	TestOP();

	return 0;
}