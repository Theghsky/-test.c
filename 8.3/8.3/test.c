#define _CRT_SECURE_NO_WARNINGS

//7����ѧԱ��Ϣ�������½ṹ�����飬���ɼ��ɴ�С����Ȼ���ӡ�ṹ�����顣

//#include<stdio.h>
//
//struct student {
//	char name[10];
//	int age;
//	int score;
//};
//
//void MP(struct student arr[],int sz)
//{
//	for (int i = 0; i < sz-i; i++)
//	{
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[j].score < arr[j + 1].score)
//			{
//				struct student tmp = arr[j];
//				arr[j]= arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void Print(struct student arr[], int sz)
//{
//	for (int i = 0; i < sz; ++i)
//		printf("%s %d %d\n", arr[i].name, arr[i].age, arr[i].score);
//}
//
//int main()
//{
//	struct student arr[3] = { { "wangwu",10,50},{"lisi",20,60},{"zhangsan",30,70} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MP(arr, sz);
//	Print(arr,sz);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	struct cmplx
//	{
//		int x;
//		int y;
//	}cnum[2] = { 1,3,2,7 };
//	printf("%d\n", cnum[0].y / cnum[0].x * cnum[1].x);
//	return 0;
//}

//10����дһ���������������Ǵ������򷵻�0������������С������򷵻�1��
#include<stdio.h>
int main()
{
	int  i = 1;
	char* j = (char*)&i;
	if (1 == *j)
		printf("С��");
	else
		printf("���");
	return 0;
}

//11����дһ������������1 + 2 + 3 + 4 + �� + n��ֵ��

//#include<stdio.h>
//
//int fun(int n)
//{
//	if(n!=0)
//		return n+fun(n-1);
//	return 0;
//}
//
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	printf("%d\n",fun(i));
//	return 0;
//}

typedef union {
	long i;
	int k[5];
	char c;
} DATE;
struct data {
	int cat;
	DATE cow;
	double dog;
} too;
DATE max;
int main()
{
	printf("%d\n", sizeof(struct data) + sizeof(max));
	printf("%d\n", sizeof(max));
	printf("%d\n", sizeof(struct data));
	return 0;
}