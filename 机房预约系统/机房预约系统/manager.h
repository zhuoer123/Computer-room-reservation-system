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

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void clearFile();
};