#define  _CRT_SECURE_NO_WARNINGS

//��Ŀ����5��������һ���ʵ�����˶����ꣿ
//��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
//�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ
//����ʵ�һ���ˣ���˵��10�ꡣ
//���ʵ�����˶��

//#include<stdio.h>
//int fn(int age,int n)
//{
//	if (n != 1)
//		age = fn(age, n - 1)+2;
//	return age;
//}
//int main()
//{
//	int n = 5;
//	int age = 10;
//	printf("%d\n",fn(age,n));
//	return 0;
//}

//��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

//#include <stdio.h>
//
//int main(void)
//{
//	int i, n, x, k;
//	int arr1[5] = { 0 };
//	int arr2[5] = { 1,10,100,1000,10000 };
//	scanf("%d", &i);
//	for (int j = 10000; j >= 1; j /= 10)
//	{
//		if (0 < i/j)
//		{
//			for (k = 0; k < 5; k++)
//			{
//				if (j == arr2[k])
//					break;
//			}
//			for (n = 0; n <= k; ++n)
//			{
//				x = i % 10;
//				arr1[n] = x;
//				i = i / 10;
//			}
//			for (int y=0; y < n;y++)
//				printf("%d ", arr1[y]);
//		}
//	}
//	printf("����%dλ��\n",n);
//	return 0;
//}




//5���������´����������������ԭ��

//#include<stdio.h>
//
//char* get_memory(void);
//char* get_memory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//int main(void)
//{
//	char* str = NULL;
//	str = get_memory();
//	printf("%s\n", str);
//	return 0;
//}

#include <stdio.h>
extern void other(void);
int main()
{
    extern int a;
    int b = 0;
    static int c;
    a += 3;
    other();
    b += 3;
    other();
    return 0;
}

void other(void)
{
    int b = 3;
    static int c = 2;
    a += 5;
    b += 5;
    c += 5;
    printf("%d, %d, %d\n", a, b, c);
    c = b;
}