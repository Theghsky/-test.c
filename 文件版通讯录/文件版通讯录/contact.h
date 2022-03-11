#pragma once

#pragma once

#define  _CRT_SECURE_NO_WARNINGS

//#define max 100

#define max_name 20
#define max_sex 5
#define max_tele 12
#define max_addr 30
#define DEFAULT_SZ 3

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

enum Option
{
	ex,
	add,
	del,
	search,
	modify,
	show,
	sort,
	save
};

typedef struct People
{
	char name[max_name];
	int age;
	char  sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
}People;

//ͨѶ¼����
typedef struct Contact
{
	struct People* data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��еĸ���
	int capacity;
}Contact;

//��������
//��ʼ��
void InitContact(struct Contact* ps);
//����
void AddContact(struct Contact* ps);
//��ʾ
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ������Ϣ
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);
//����
void SortContact(struct Contact* ps);

void Destroy(Contact*);
//�����ļ�
void SaveContact(Contact* ps);
//�����ļ��е���Ϣ��ͨѶ¼
void LoadContact(Contact* ps);