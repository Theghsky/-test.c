#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//14����дһ������Fibonacci()��Ҫ����������n��쳲���������n���û����롣
//쳲��������У�1, 1, 2, 3, 5, 8, 13, 21, �� ��

//int Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", Fibonacci(n));
//	return 0;
//}

//15����дһ������������һ��ʮ�������������Ӧ��ʮ������������������printf�� % x��ʽ˵������



//2����дһ������������һ��double��������������Сֵ�Ĳ�ֵ������һ���򵥵ĳ����в������������
//double cha(double arr[],int i)
//{
//	double max, min;
//	max = arr[0];
//	min = arr[0];
//	for (i = 0; i < 5; i++)
//	{
//		if (max <= arr[i])
//		{
//			min = max;
//			max = arr[i];
//		}
//	}
//	double cha;
//	cha = max - min;
//	return cha;
//}
//int main()
//{
//	double arr[5]={0};
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf",&arr[i]);
//	}
//	printf("%lf\n", cha(arr,i));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(&arr));
//	return 0;
//}