#pragma once

//���ŵĶ���
#define ROW 3
#define COL 3

//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//��������������Ϸ״̬ 
//���Ӯ                         '*'
//����Ӯ                         '#'
//ƽ��                           'Q'
//����                           'C'

//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col);