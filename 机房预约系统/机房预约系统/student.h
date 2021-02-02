#pragma once
#include<iostream>
#include "identity.h"
using namespace std;

class Student : public Identity
{
public:
	Student();

	//有参构造
	Student(int id, string name, string pwd);

	//菜单
	virtual void operMenu();

	//申请预约
	void applyOrder();

	//查看我的预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	int m_Id;
};