#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
	//sizeof(������) - ��������ʾ��������� - ���������������Ĵ�С
		//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
		//����֮�⣬���е�����������������Ԫ�صĵ�ַ
		//
		//
		//int main()
		//{
		//	//int a[] = { 1,2,3,4 };//4*4=16
		//	//printf("%d\n", sizeof(a));//16
		//	//printf("%d\n", sizeof(a + 0));//4/8 a + 0 �ǵ�һ��Ԫ�صĵ�ַ��sizeof(a + 0)������ǵ�ַ�Ĵ�С
		//	//printf("%d\n", sizeof(*a));//4  *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�صĴ�С
		//	//printf("%d\n", sizeof(a + 1));//4/8 a + 1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a+1)����ĵ�ַ�Ĵ�С
		//	//printf("%d\n", sizeof(a[1]));//4 - ������ǵڶ���Ԫ�صĴ�С
		//
		//	//printf("%d\n", sizeof(&a)); //4/8 - &a��Ȼ����ĵ�ַ������Ҳ�ǵ�ַ��sizeof(&a)�������һ����ַ�Ĵ�С
		//	//printf("%d\n", sizeof(* &a));//16 - ���������Ĵ�С
		//	////&a -- int(*p)[4] = &a;
		//	//printf("%d\n", sizeof(&a + 1));//4/8 - &a + 1 ���������Ŀռ�ĵ�ַ
		//	//printf("%d\n", sizeof(&a[0]));//4/8
		//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
		//
		//	//�ַ�����
		//	//char arr[] = { 'a','b','c','d','e','f' };
		//
		//	//printf("%d\n", strlen(arr));//���ֵ
		//	//printf("%d\n", strlen(arr + 0));//���ֵ
		//	////printf("%d\n", strlen(*arr));//err
		//	////printf("%d\n", strlen(arr[1]));//err
		//	//printf("%d\n", strlen(&arr));//���ֵ
		//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
		//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
		//
		//	//printf("%d\n", sizeof(arr));//6
		//	//printf("%d\n", sizeof(arr + 0));//4/8
		//	//printf("%d\n", sizeof(*arr));//1
		//	//printf("%d\n", sizeof(arr[1]));//1
		//	//printf("%d\n", sizeof(&arr));//4/8
		//	//printf("%d\n", sizeof(&arr + 1));//4/8
		//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
		//
		//
		//
		//	//char arr[] = "abcdef";
		//	////[a b c d e f \0]
		//	//printf("%d\n", strlen(arr));//6
		//	//printf("%d\n", strlen(arr + 0));//6
		//	////printf("%d\n", strlen(*arr));//err
		//	////printf("%d\n", strlen(arr[1]));//err
		//	//printf("%d\n", strlen(&arr));//6
		//	//printf("%d\n", strlen(&arr + 1));//���ֵ
		//	//printf("%d\n", strlen(&arr[0] + 1));//5
		//
		//
		//	//[a b c d e f \0] 
		//	//printf("%d\n", sizeof(arr));//7
		//	//printf("%d\n", sizeof(arr + 0));//4/8
		//	//printf("%d\n", sizeof(*arr));//1
		//	//printf("%d\n", sizeof(arr[1]));//1
		//	//printf("%d\n", sizeof(&arr));//4/8  char(*)[7]
		//	//printf("%d\n", sizeof(&arr + 1));//4/8 
		//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
		//
		//	char* p = "abcdef";
		//
		//	printf("%d\n", strlen(p));
		//	printf("%d\n", strlen(p + 1));
		//	printf("%d\n", strlen(*p));
		//	printf("%d\n", strlen(p[0]));
		//	printf("%d\n", strlen(&p));
		//	printf("%d\n", strlen(&p + 1));
		//	printf("%d\n", strlen(&p[0] + 1));
		//
		//
		//	//printf("%d\n", sizeof(p));
		//	//printf("%d\n", sizeof(p + 1));
		//	//printf("%d\n", sizeof(*p));
		//	//printf("%d\n", sizeof(p[0]));
		//	//printf("%d\n", sizeof(&p));
		//	//printf("%d\n", sizeof(&p + 1));
		//	//printf("%d\n", sizeof(&p[0] + 1));
		
	//int a[3][4] = { 0 };
	//
	//	printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
	//	printf("%d\n", sizeof(a[0][0]));//4 - a[0][0] - �ǵ�һ�е�һ��Ԫ��
	//	printf("%d\n", sizeof(a[0]));//16
	//	printf("%d\n", sizeof(a[0] + 1));//4 ���ͣ�a[0]��Ϊ��������û�е�������sizeof�ڲ���
	//									//Ҳûȡ��ַ,����a[0]���ǵ�һ�е�һ����ĵ�ַ
	//									//a[0]+1,���ǵ�һ�еڶ���Ԫ�صĵ�ַ
	//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - ���ͣ�*(a[0] + 1)�ǵ�һ�еڶ���Ԫ��
	//
	//	printf("%d\n", sizeof(a + 1));//4 - ���ͣ�a�Ƕ�ά���������������û��ȡ��ַ
	//	//Ҳû�е�������sizeof�ڲ�,����a�ͱ�ʾ��ά������Ԫ�صĵ�ַ��������һ�еĵ�ַ
	//	//a + 1���Ƕ�ά����ڶ��еĵ�ַ
	//
	//	printf("%d\n", sizeof(*(a + 1)));//16 ���ͣ�a+1�ǵڶ��еĵ�ַ������*��a+1����ʾ�ڶ���
	//	//���Լ���ľ��ǵ�2�еĴ�С
	//
	//	printf("%d\n", sizeof(&a[0] + 1));//4 ���ͣ�a[0]�ǵ�һ�е���������
	//	//&a[0]ȡ���ľ��ǵ�һ�еĵ�ַ,&a[0]+1 ���ǵڶ��еĵ�ַ
	//
	//	printf("%d\n", sizeof(*(&a[0] + 1)));//&a[0]+1 ���ǵڶ��еĵ�ַ
	//	//*(&a[0]+1) ���ǵڶ��У����Լ���ĵڶ��еĵ�ַ
	//
	//	printf("%d\n", sizeof(*a));//16 ���ͣ�a��Ϊ��ά�������������û��&��û�е�������sizeof�ڲ�
	//	//a������Ԫ�صĵ�ַ������һ�еĵ�ַ������*a���ǵ�һ�У�������ǵ�һ�еĴ�С
	//
	//	printf("%d\n", sizeof(a[3]));//16 ���ͣ�a[3]��ʵ�ǵ����е�������������еĻ���
	//	//������ʵ�����ڣ�Ҳ��ͨ�����ͼ����С��
	//	printf("%d\n", sizeof(a[-1]));
	//

//
//	return 0;
//}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;
}

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}

int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}

int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}
