#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int i;
//	scanf("%d", &i);
//	int rem
//	
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[6][6] = { {1,2,3,4,5,6},{2,3,4,5,6,7},{3,4,5,6,7,8}
//	,{4,5,6,7,8,9},{9,8,7,6,5,4},{6,5,4,3,2,1} };
//
//	for (int i = 0; i <= 6; ++i)
//	{
//		for (int j = i; j <= 6 - 1; ++j)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//		for (int n = 1; n <= 5; ++n)
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* xx;
//	printf("%p\n", xx);
//	printf("%d\n", *xx);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int ref[] = { 8, 4, 0, 2 };
//	int* ptr;
//	int index;
//	for (index = 0,ptr=ref; index < 4; index++, ++ptr)
//	{
//		printf(" %d %d\n", ref[index], *ref);
//	}
//	return 0;
//}


//7����дһ�������������������ڵ���ӦԪ����ӣ�����洢����3�������ڡ�
//Ҳ����˵���������1����ֵ2, 4, 6, 8������2����ֵ1, 0, 3, 6������������3��ֵΪ3, 4, 9, 14��
//�ú����Ĳ�������3���������������С��
//����һ���򵥵ĳ����в������������

//#include<stdio.h>
//
//void add(int arr1[], int arr2[], int arr3[], int n)
//{
//	int i;
//	for (i = 0; i < 5; ++i)
//		arr3[i] = arr1[i] + arr2[i];
//}
//
//void Print(int arr[])
//{
//	int j;
//	for (j = 0; j < 5; ++j)
//		printf("%d ", arr[j]);
//}
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int arr3[5] = { 0 };
//	int n = sizeof(arr1) / sizeof(arr1[0]);
//	add(arr1, arr2, arr3,n);
//	Print(arr3);
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x, %x\n", ptr1[-1], *ptr2);
	return 0;
}