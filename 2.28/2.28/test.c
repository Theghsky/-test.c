#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
//	clr = 5;               
//	printf("%d\n", clr);
//	printf("%d\n", GREEN);
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	//���ϱ����Ķ���
//	union Un un;
//	//�������������Ĵ�С
//	printf("%d\n", sizeof(un));
//}



//union Un
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	union Un un;
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	printf("%x\n", un.i);
//	printf("%x\n", un.c);
//	return 0;
//}


//union Un
//{
//	char arr[5];
//	int a;
//};
//
//int main()
//{
//	union Un s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



int check_sys()
{
	union
	{
		int i;
		char n;
	}un;
	un.i = 1;
	return un.n;
}

int main()
{
	int ret = check_sys();
	if (1 == ret)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}