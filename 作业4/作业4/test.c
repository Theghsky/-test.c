//3���õ���ѭ������ʵ�֡���n���֡���Ϸ��Josephu���⣩��
//���Ƚ���һ���������������ĵ���ѭ������Ȼ��ӵ�һ���ڵ㿪ʼ����
//������3���Ǹ��ڵ�ɾ����������һ���ڵ㿪ʼ����
//����3����ɾ�����Դ����ƣ���ӡ�����ʣ����Ǹ��ڵ㡣
#define  _CRT_SECURE_NO_WARNINGS
#include "link.h"


link_t* test()
{
	link_t* p = link_init();
	int num,del;
	scanf("%d %d", &num,&del);
	for (int i = 0; i < num; i++)
	{
		link_add_tail(p, i);
	}
	display(p);
	link_t* node = NULL;
	node = p->next;
	//link_t* node = NULL;
	while (node != node->next)
	{
		int count = 1;
		for (count; count < del; count++)
		{
			node= node->next;			
		}
		cut_behind(node);
		if (node == node->next)
			break;
	}
	display(p);
}

int main()
{
	test();
	return 0;
}










//4����˫��ѭ������ʵ��˳������洢������Ȼ����
//��������һ������10������һ��˫��ѭ������
//�����ÿ���ڵ�ֱ���1��2��3��4��5��6��7��8��9��10��
//Ȼ��ͨ��ĳЩ�����������������г�1��3��5��7��9��10��8��6��4��2��
//����������ż�����򣬲�����Ļ�ϴ�ӡ������


//#include "link.h"
//
//void test()
//{
//	plink_t p = NULL;
//	plink_t newnode = NULL;
//	link_init(&p);
//	int num ;
//	scanf("%d", &num);
//	for (int i = 1; i <= 10; i++)
//	{
//		link_add_tail(p , i);
//	}
//	display(p);
//	for(num;num>1;num--)
//	{
//		if (num % 2 == 0)
//		{
//			newnode=ListFind(p, num);
//
//			link_add_tail(p, num);
//		}
//	}
//	display(p);
//}
//
//int main()
//{
//
//	test();
//
//	return 0;
//}