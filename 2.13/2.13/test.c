#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//char* my_strcpy(char* dest,const char* src)
////����ָ��  
////����ָ������
//
//char* (*pf)(char*,const char*)=my_strcpy
//
//char* (*pff[4])(char*,const char*)=my_strcpy
//
//(   *  (void (*)()  0   )();
////0��ǿ������ת��Ϊ����ָ�����ͣ�0����һ�������ĵ�ַ��
////����0��ַ���ĸú���
//
//void��* signal(int, void(*)(int))��(int);
////signal��һ���������ú���������������һ��Ϊint ���ͣ���һ��Ϊ����ָ������
////                                           ��ָ��ָ��ĺ����ķ���ֵΪvoid������Ϊint��
////signal�����ķ�������ҲΪ����ָ�����ͣ���ָ��ָ��ĺ����ķ���ֵΪvoid������Ϊint��
////��д��
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfen_t);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int (*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	//*�Ų������ͣ���*�ŷ������
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	int (*pa)(int, int) = Add;//����ָ��
//	int (*paa[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", paa[i](2, 3));
//	}
//	return 0;
//}

//������
//�ú���ָ��������ʵ��
//
//void menu()
//{
//	printf("*************************\n");
//	printf("  1:add            2:sub \n");
//	printf("  3:mul            4:div \n");
//	printf("******    0:exit  *******\n");
//}
//int main()
//{
//	int x , y ;
//	int input = 1;
//	int ret = 0;
//	int(*pa[5])(int x, int y) = { 0,Add,Sub,Mul,Div };
//	while (input)
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if ((input >= 1 && input <= 4))
//		{
//			printf("���������:");
//			scanf("%d %d", &x, &y);
//			ret = (*pa[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//			{
//			printf("�˳�");
//			}
//			else
//			{
//				printf("��������");
//			}
//	}
//	return 0;
//}

void print(char* str)
{
	printf("hehe:%s",str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}