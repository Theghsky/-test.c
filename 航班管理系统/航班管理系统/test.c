#include"flight.h"


void menu()
{
	printf("*********  ������Ϣ  **********\n");
	printf("*******1.���     2.��ʾ*******\n");
	printf("*******3.��ѯ     4.ɾ��*******\n");
	printf("*********   0.�˳�   **********\n");
	printf("*******************************\n");
}

int main()
{
	int input = 0;
	//��ʼ��
	plink_t p = NULL;
	link_init(&p);
	if (p == NULL)
		return -1;
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			link_add_tail(p);
			break;
		case show:
			display(p);
			break;
		case search:
			flightFind(p);
			break;
		case del:
			link_del(p);
			break;
		case quit:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}