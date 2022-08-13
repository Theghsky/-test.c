#ifndef _FLIGHT_H
#define _FLIGHT_H

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define M 18
#define D 12
#define T 8

enum Option
{
	quit,
	add,
	show,
    search,
    del
};

typedef struct flight {
    char number[M];    //�����    
    char staddress[M];   //���վ    
    char arraddress[M];   //�յ�վ    
    char DATE[D];       //����    
    char TYPE[T];       //����    
    int stime;          //���ʱ��    
    int atime;          //����ʱ��    
    int value;           //Ʊ��
}flight;

typedef flight datatype;

typedef struct link {
	datatype data;
	struct link* prev;
	struct link* next;
}link_t,*plink_t;

//��Ӻ�������
void  Addflight(plink_t pf);
//��ӡ����
void  Printflight(plink_t pf);
//��ʼ��
void link_init(plink_t* p);
//��Ӻ���
void link_add_tail(plink_t p);
//��ӡ������Ϣ
void display(plink_t p);
// һ���ڵ�node����p��ǰ��
static void insert_forward(plink_t p, plink_t node);
//һ���ڵ�node����p�ĺ���
static void insert_behind(plink_t p, plink_t node);
//���뺽��
void sortflight(plink_t p, plink_t newnode);
//���Һ���
plink_t flightFind(plink_t p);
//����
static void cut_node(plink_t node);
//ɾ��
void link_del(plink_t p);

#endif 