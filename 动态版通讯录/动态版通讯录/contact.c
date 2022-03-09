#define  _CRT_SECURE_NO_WARNINGS

#include"contact.h"

void InitContact(Contact* ps)
{
	ps->data = ((People*)malloc(3 * sizeof(People)));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		People* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(People));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void  AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼������
	//1.������˾����ӿռ�
	//2.���û��ɶ�²���
	CheckCapacity(ps);
	//��������
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("�������ֻ�:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("��ӳɹ�\n");
	
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

//�ҵ��˷�����������Ԫ�ص��±꣬�Ҳ�������-1
static int FindByName(const struct Contact* ps, char name[max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//�ҵ���
		}
	}
	return -1;//�Ҳ���
}

void DelContact(struct Contact* ps)
{
	char name[max_name];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//����Ҫɾ��������ʲôλ��
	int ret = FindByName(ps, name);
	if (-1 == ret)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	//ɾ��
	else
	{
		//ɾ������
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[max_name];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[max_name];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ret].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ret].sex);
		printf("�������ֻ�:>");
		scanf("%s", ps->data[ret].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ret].addr);

		printf("�޸����\n");
	}
}

void SortContact(struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1; j++)
		{
			if (ps->data[j].age > ps->data[j + 1].age)
			{
				struct People pot = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = pot;
			}
		}
	}
	printf("�������\n");
}

void Destroy(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}