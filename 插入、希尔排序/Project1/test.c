#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//��������
// ʱ�临�Ӷ��Ƕ��٣�O(N^2)
// ʲô������������  1+2+3+...+n-1
// ʲô�������ã�˳������  O(N)
void InsertSort(int* a,int size)
{
	for (int i = 0; i < size - 1; i++)
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

void Print(int* a, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void TestInsertSort()
{
	int a[] = { 2,4,6,5,3,1,0 };
	InsertSort(a, sizeof(a) / sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}

// ֱ�Ӳ�������Ļ����ϵ��Ż�
// 1���Ƚ���Ԥ����������ӽ�����
// 2��ֱ�Ӳ�������
// ʱ�临�Ӷȣ�O(logN*N) ���� O(log3N*N)
// ƽ����ʱ�临�Ӷ���O(N^1.3)
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap/3 +1;
		//end=gap/2;
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

void TestShellSort()
{
	int a[] = { 3, 5, 2, 7, 8, 6, 1, 9, 4, 0 };
	ShellSort(a, sizeof(a) / sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}



// ������������ܶԱ�
void TestOP()
{
	srand(time(0));
	const int N = 1000000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
	}

	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);

	free(a1);
	free(a2);
}

int main()
{
	//TestInsertSort();
	//TestShellSort();
	TestOP();
	return 0;
}