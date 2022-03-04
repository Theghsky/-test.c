#pragma once
#define  _CRT_SECURE_NO_WARNINGS

#define max 100

#define max_name 20
#define max_sex 5
#define max_tele 12
#define max_addr 30

#include<stdio.h>
#include<string.h>

enum Option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

struct People
{
	char name[max_name];
	int age;
	char  sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};

//ͨѶ¼����
struct Contact
{
	struct People data[max];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��еĸ���
};

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