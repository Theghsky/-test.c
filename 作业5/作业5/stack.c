
#include "stack.h"
#include <stdlib.h>
//
///**
//  ***********************************
//  *@brief  ��ʼ��
//  *@param  None
//  *@retval None
//  ***********************************
//  */
//pstack_t stack_init(void)
//{
//	pstack_t p = (pstack_t)malloc(sizeof(stack_t));
//	if (p == NULL) {
//		perror("malloc error");
//		return NULL;
//	}
//
//	p->top = -1;
//	return p;
//}
//
///**
//  ***********************************
//  *@brief  ��ջ
//  *@param  p : ջ
//  *@param  d : ����
//  *@retval int
//  *			�ɹ�����0
//  *			ʧ�ܷ���-1
//  ***********************************
//  */
//int push(pstack_t p, datatype d)
//{
//	//�ж��Ƿ� ջ��
//	if (p->top == N - 1) {
//		printf("sorry!���ͣ�\n");
//		return -1;
//	}
//
//	p->top++;
//	p->data[p->top] = d;
//	return 0;
//}
//
///**
//  ***********************************
//  *@brief  ��ջ
//  *@param  p : ջ
//  *@param  d : ���ݵĵ�ַ
//  *@retval int
//  *			�ɹ�����0
//  *			ʧ�ܷ���-1
//  ***********************************
//  */
//int pop(pstack_t p, datatype* d)
//{
//	//�ж��Ƿ� ջ��
//	if (p->top == -1) {
//		printf("sorry!,û�ͣ�\n");
//		return -1;
//	}
//
//	*d = p->data[p->top];
//	p->top--;
//	return 0;
//}
//
//
///**
//  ***********************************
//  *@brief  ����
//  *@param  p : ջ
//  *@retval None
//  ***********************************
//  */
//void display(pstack_t p)
//{
//	int i;
//	printf("�������Ϊ��\n");
//	for (i = p->top; i >= 0; i--)
//		printf("| %d |\n", p->data[i]);
//	printf("\n");
//}
//
//
//


/**
  ***********************************
  *@brief  ��ջ
  *@param  p : ջ��ָ��
  *@param  d : ����
  *@retval int
  *			�ɹ�����0
  *			ʧ�ܷ���-1
  ***********************************
  */
int push(plink_t* p, datatype d)
{
	//�����µĽڵ� 
	plink_t node = (plink_t)malloc(sizeof(link_t));
	if (node == NULL) {
		perror("malloc error");
		return -1;
	}

	//������ֵ
	node->data = d;

	//ָ���� ��ֵ��ָ�� ջ��ָ��
	node->next = *p;

	//ջ��ָ�� ָ��ո���ӵ� �ڵ� 
	*p = node;

	return 0;

}


/**
  ***********************************
  *@brief  ��ջ
  *@param  p : ջ��ָ��
  *@param  d : ����
  *@retval int
  *			�ɹ�����0
  *			ʧ�ܷ���-1
  ***********************************
  */
int pop(plink_t* p, datatype* d)
{
	//�ж��Ƿ�ջ��
	if (*p == NULL) {
		printf("sorry!ջ��\n");
		return -1;
	}

	//��topָ��Ľڵ�������� ����
	*d = (*p)->data;

	//����ǰtopָ��Ľڵ㱣��node
	plink_t node = *p;

	//ջ��ָ��top�����ƶ�
	(*p) = (*p)->next;

	//node�ͷ�
	node->next = NULL;
	free(node);

	return 0;
}


/**
  ***********************************
  *@brief  ����
  *@param  p : ջ��ָ��
  *@retval int
  *			�ɹ�����0
  *			ʧ�ܷ���-1
  ***********************************
  */
void display(plink_t p)
{
	printf("�������Ϊ:\n");
	while (p != NULL) {
		printf("| %d |\n", p->data);
		p = p->next;
	}
	printf("\n");
}
