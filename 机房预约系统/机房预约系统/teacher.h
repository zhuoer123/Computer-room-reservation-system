#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "identity.h"

using namespace std;

class Teacher : public Identity
{
public:
	Teacher();

	Teacher(int empId, string name, string pwd);

	virtual void operMenu();

	void showAllOrder();

	void valiOrder();

	int m_empId;
};