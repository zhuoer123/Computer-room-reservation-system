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

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void clearFile();

	//初始化容器
	void initVector();

	//学生容器
	vector<Student> vStu;

	//教师容器
	vector<Teacher> vTea;

	//检测重复 参数:(传入id，传入类型) 返回值：(true 代表有重复，false代表没有重复)
	bool checkRepeat(int id, int type);
};