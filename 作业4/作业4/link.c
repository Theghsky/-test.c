#include "link.h"

#define  _CRT_SECURE_NO_WARNINGS
link_t* link_init(void)
{
	link_t* p = (link_t*)malloc(sizeof(link_t));
	if (p == NULL) {
		perror("malloc error");
		return NULL;
	}

	p->next = p;  //�Լ�ָ���Լ�

	return p;
}

void link_add_tail(link_t* p, datatype d)
{
	//����ͷ�ڵ�
	link_t* head = p;

	//�����µĽڵ�
	link_t* node = link_init();
	if (node == NULL) {
		printf("�����½ڵ�ʧ��\n");
		return;
	}
	node->data = d;

	//�ҵ����һ���ڵ�
	while (p->next != head)
		p = p->next;

	//���µĽڵ����β�͵ĺ���
	insert_behind(p, node);
}

static void insert_behind(link_t* p, link_t* node)
{
	node->next = p->next;
	p->next = node;
}

void display(link_t* p)
{
	//����ͷ�ڵ�
	link_t* head = p;

	printf("�������Ϊ��");
	while (p->next != head) {
		p = p->next;
		printf("%d ", p->data);
	}
	printf("\n");
}

link_t* cut_behind(link_t* p)
{
	link_t* node = p->next;
	p->next = node->next;
	return node;
}









//void link_init(plink_t* p)
//{
//	*p = (plink_t)malloc(sizeof(link_t));
//	if (*p == NULL) {
//		perror("malloc error");
//		return;
//	}
//
//	(*p)->prev = (*p);
//	(*p)->next = (*p);
//}
//
//static void insert_behind(plink_t p, plink_t node)
//{
//	node->next = p->next;
//	node->prev = p;
//	p->next->prev = node;
//	p->next = node;
//}
//
//static void insert_forward(plink_t p, plink_t node)
//{
//	node->next = p;
//	node->prev = p->prev;
//	p->prev->next = node;
//	p->prev = node;
//}
//
//void link_add_tail(plink_t p, datatype d)
//{
//	//�����µĽڵ�
//	plink_t node = NULL;
//	link_init(&node);
//	if (node == NULL)
//		return;
//	node->data = d;
//
//	//���µĽڵ����ͷ��ǰ��
//	insert_forward(p, node);
//}
//
//static void cut_node(plink_t node)
//{
//	node->prev->next = node->next;
//	node->next->prev = node->prev;
//}
//
//
//plink_t ListFind(plink_t p, datatype d)
//{
//	assert(p);
//	plink_t cut = p->next;
//	while (cut != p)
//	{
//		if (cut->data == d)
//		{
//			cut_node(cut);
//			return cut;
//		}
//		cut = cut->next;
//	}
//
//	return NULL;
//
//}
//
//void display(plink_t p)
//{
//	plink_t head = p;
//
//	printf("����������Ϊ��");
//	while (p->next != head) {
//		p = p->next;
//		printf("%d ", p->data);
//	}
//	printf("\n");
//
//}