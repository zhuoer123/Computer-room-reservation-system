#pragma once
#include<iostream>
#include<map>
#include "globalFile.h"
#include<fstream>
using namespace std;

class orderFile
{
public:
	orderFile();

	//����ԤԼ��¼
	void updateOrder();

	//��¼������ key--��¼������  value---�����¼�ļ�ֵ����Ϣ
	map<int, map<string, string>> m_orderData;

	//ԤԼ��¼����
	int m_Size;
};
