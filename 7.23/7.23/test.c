#include<stdio.h>

/*int add(int a, int b);

int add(int a, int b)
{
	int j = a + b;
	return j;
}
int main()
{
	int x, y;
	x = 3, y = 5;
	int i = add(x, y);
	re*//*turn 0;*/
//}

//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//�������һ��strlen����
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//�����ɶ��
//	//ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}
int main()
{
	int arr[2][3] = { {1,2,3},{4,5,6} };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[1][0]);

	printf("%p\n", *arr+1);
	printf("%d\n", *(*arr + 1));
	printf("%p\n", *arr);
	printf("%d\n", *(*arr));

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//printf("%p\n", arr);
	return 0;
}