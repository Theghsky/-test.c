#pragma once
#include <iostream>


using namespace std;
#define ARRAY_MAX 10

class Quence
{
public:
	Quence();
	~Quence();

	//����
	bool insertData(int data, int index);
	//ɾ��
	bool remove(int index);

	void PrintData();
protected:
	int m_data[ARRAY_MAX];
	int m_count;

};