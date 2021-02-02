#pragma once
#include<iostream>
#include "identity.h"
using namespace std;

class Manager : public Identity
{
public:
	Manager();

	Manager(string name, string pwd);

	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void clearFile();
};