#pragma once
#include<iostream>
#include<fstream>
#include "identity.h"
#include<vector>
#include "student.h"
#include "teacher.h"
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

	//��ʼ������
	void initVector();

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//����ظ� ����:(����id����������) ����ֵ��(true �������ظ���false����û���ظ�)
	bool checkRepeat(int id, int type);
};