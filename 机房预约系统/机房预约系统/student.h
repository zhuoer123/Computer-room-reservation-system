#pragma once
#include<iostream>
#include "identity.h"
using namespace std;

class Student : public Identity
{
public:
	Student();

	//�вι���
	Student(int id, string name, string pwd);

	//�˵�
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	int m_Id;
};