#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//4.ʹ�� free �ͷŶ�̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
////		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//���տռ�
//
//	free(p);
//	p = NULL;
//	return 0;
//}



//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	ʹ��
//	�ͷ�
//	free(p);
//	p = NULL;//������ɱ���
//	free(p);
//	return 0;
//}


//6.��̬���ٿռ��ڴ������ͷ�(�ڴ�й¶)
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}


//������
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//���� 1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//���� 2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

// ����ջ�ռ��ַ������
//char* GetMemory(void)
//{
//	char p[] = "hello world";//�ֲ�����  ��  ջ��
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//�� 1
//char* GetMemory(void)
//{
//	// static ʹ�ֲ��������������ڱ䳤�������� p ���鲻����
//	// �൱�ڽ� p ��ջ�Ϸŵ� ��̬��
//	static char p[] = "hello world";//�ֲ�����  ��  ջ��
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//��̬�ڴ�й¶
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й¶
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//�� 1
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//void Test(void)
//{
//	char* str = (char*)malloc(10);
//	strcpy(str, "hello");
//	free(str);   // free �ͷ� str ָ��Ŀռ�󣬲������ str ��Ϊ NULL
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	return 0;
//}
//
////�� 1
//void Test(void)
//{
//	char* str = (char*)malloc(10);
//	strcpy(str, "hello");
//	free(str);   // free �ͷ� str ָ��Ŀռ�󣬲������ str ��Ϊ NULL
//
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	return 0;
//}