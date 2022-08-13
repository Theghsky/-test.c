#include"flight.h"

/**
  ***********************************
  *@brief  ��ʼ�� (����ͷ�ڵ�)
  *@param  p : ͷ�ڵ�
  *@retval None
  ***********************************
  */
void link_init(plink_t* p)
{
	*p = (plink_t)malloc(sizeof(link_t));
	if (*p == NULL) {
		perror("malloc error");
		return;
	}

	(*p)->prev = (*p);
	(*p)->next = (*p);
}


/**
  ***********************************
  *@brief  ��������
  *@param  p : ͷ�ڵ�
  *@retval None
  ***********************************
  */
void link_add_tail(plink_t p)
{
	//�����µĽڵ�
	plink_t newnode = NULL;
	link_init(&newnode);
	if (newnode == NULL)
		return;
	//�������
	Addflight(newnode);
	//�ж�ͷ�ڵ��Ƿ�ָ���Լ��ǵĻ�ֱ�Ӳ���
	if (p->next == p)
		//���µĽڵ����ͷ�ĺ���
		insert_behind(p, newnode);
	else {
		//����
		sortflight(p, newnode);
	}
		

}


//��������
void  Addflight(plink_t pf)
{
	printf("�����뺽���:>");
	scanf("%s", pf->data.number);

	printf("���������վ :>");
	scanf("%s", pf->data.staddress);

	printf("�������յ�վ  :>");
	scanf("%s", pf->data.arraddress);

	printf("���������:>");
	scanf("%s", pf->data.DATE);

	printf("���������:>");
	scanf("%s", pf->data.TYPE);

	printf("���������ʱ��:>");
	scanf("%d", &(pf->data.stime));

	printf("�����뵽��ʱ�� :>");
	scanf("%d", &(pf->data.atime));

	printf("������Ʊ��:>");
	scanf("%d", &(pf->data.value));

	printf("��ӳɹ�\n");

}

/**
  ***********************************
  *@brief  �������
  *@param  p : ͷ�ڵ�
  *@retval None
  ***********************************
  */
void display(plink_t p)
{
	plink_t head = p;
	printf("������Ϣ��\n");
	while (p->next != head) {
		p = p->next;
		Printflight(p);
	}
	printf("\n");

}

//��ӡ����
void  Printflight(plink_t pf)
{
	printf("�����:>%s\n", pf->data.number);
	printf("���վ:>%s\n", pf->data.staddress);
	printf("�յ�վ:>%s\n", pf->data.arraddress);
	printf("����:>%s\n", pf->data.DATE);
	printf("����:>%s\n", pf->data.TYPE);
	printf("���ʱ��:>%d\n",pf->data.stime);
	printf("����ʱ��:>%d\n", pf->data.atime);
	printf("Ʊ��:>%d\n",pf->data.value);
	printf("\n");
}

/**
  ***********************************
  *@brief  һ���ڵ�node����p��ǰ��
  *@param  p  node : �ڵ�
  *@retval None
  ***********************************
  */

static void insert_forward(plink_t p, plink_t node)
{
	node->next = p;
	node->prev = p->prev;
	p->prev->next = node;
	p->prev = node;
}

/**
  ***********************************
  *@brief  һ���ڵ�node����p�ĺ���
  *@param  p  node : �ڵ�
  *@retval None
  ***********************************
  */
static void insert_behind(plink_t p, plink_t node)
{
	node->next = p->next;
	node->prev = p;
	p->next->prev = node;
	p->next = node;
}

//����
//void sortflight(plink_t p, plink_t newnode)
//{
//	plink_t pp = p;
//	while (1)
//	{
//		if (p->next == pp )
//		{
//			if (p->data.stime > newnode->data.stime)
//				//�½�����ԭ���ǰ��
//				insert_forward(p, newnode);
//			if (p->data.stime <= newnode->data.stime)
//				//�½�����ԭ������
//				insert_behind(p, newnode);
//			break;
//		}
//		else
//		{
//			if (p->data.stime <= newnode->data.stime)
//			{
//				p = p->next;
//				continue;
//			}
//			if (p->data.stime > newnode->data.stime)
//			{
//				insert_forward(p, newnode);
//				break;
//			}
//		}
//	}
//	p = pp;
//	pp = NULL;
//	free(pp);
//}

//���Һ�����Ϣ
plink_t flightFind(plink_t phead)
{
	assert(phead);
	int x = 0;
	char date[D];
	printf("���������:>");
	scanf("%s",date);
	printf("���������ʱ��:>");
	scanf("%d", &x);
	plink_t cut = phead->next;
	while (cut != phead)
	{
		if (cut->data.stime == x && strcmp(cut->data.DATE,date)==0)
		{
			Printflight(cut);
		}
		cut = cut->next;
	}

	return NULL;

}


//���հ��ں����ʱ��˳�����
void sortflight(plink_t p, plink_t newnode)
{
	plink_t pp = p;
	p = p->next;
	while (1)
	{
		//�ж��Ƿ����һ�����
			if (p->next == pp)
			{
				if (strcmp(p->data.DATE, newnode->data.DATE) > 0)
					//�½�����ԭ���ǰ��
					insert_forward(p, newnode);
				if (strcmp(p->data.DATE, newnode->data.DATE) == 0)
				{
					if (p->data.stime > newnode->data.stime)
						//�½�����ԭ���ǰ��
						insert_forward(p, newnode);
					if (p->data.stime <= newnode->data.stime)
						//�½�����ԭ������
						insert_behind(p, newnode);
					break;
				}
				if (strcmp(p->data.DATE, newnode->data.DATE) < 0)
					//�½�����ԭ������
					insert_behind(p, newnode);
				break;
			}
			else
			{
				if (strcmp(p->data.DATE, newnode->data.DATE) <0)
				{
					p = p->next;
					continue;
				}
				if (strcmp(p->data.DATE, newnode->data.DATE) == 0)
				{


					if (p->next == pp)
					{
						if (p->data.stime > newnode->data.stime)
							//�½�����ԭ���ǰ��
							insert_forward(p, newnode);
						if (p->data.stime <= newnode->data.stime)
							//�½�����ԭ������
							insert_behind(p, newnode);
						break;
					}
					else
					{
						if (p->data.stime <= newnode->data.stime)
						{
							p = p->next;
						}
						if (p->data.stime > newnode->data.stime)
						{
							insert_forward(p, newnode);
							break;
						}
					}
				}
				if (strcmp(p->data.DATE, newnode->data.DATE) > 0)
				{
					insert_forward(p, newnode);
					break;
				}
			}
	}
	p = pp;
	pp = NULL;
	free(pp);
}

/**
  ***********************************
  *@brief  ɾ��
  *@param  p : ͷ�ڵ�
  *@param  d : ��Ҫɾ��������
  *@retval None
  ***********************************
  */
void link_del(plink_t p)
{
	plink_t head = p;

	plink_t node = NULL;

	int x = 0;
	char date[D];
	printf("������Ҫɾ���İ���:>");
	scanf("%s", date);
	printf("������Ҫɾ�������ʱ��:>");
	scanf("%d", &x);

	//�ҵ��ýڵ�
	while (p->next != head) {
		node = p->next;
		if (node->data.stime == x && strcmp(node->data.DATE, date) == 0)
		{

			//���в�ɾ���ýڵ�
			cut_node(node);
			node->prev = node;
			node->next = node;
			free(node);
			continue;
		}
		p = p->next;
	}
}

/**
  ***********************************
  *@brief  ����
  *@param  node : �ڵ�
  *@retval None
  ***********************************
  */
static void cut_node(plink_t node)
{
	node->prev->next = node->next;
	node->next->prev = node->prev;
}
