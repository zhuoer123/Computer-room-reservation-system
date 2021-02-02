#include<iostream>
#include<string>
#include "identity.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"
#include "globalFile.h"
#include<fstream>

using namespace std;

void managerMenu(Identity*& manager)
{
	while (true)
	{
		//����Ա�˵�
		manager->operMenu();

		//������ָ�� ת��Ϊ����ָ�� ���������������ӿ�
		Manager* man =  (Manager*)manager;

		int select = 0;
		cin >> select;

		if (select == 1)
		{
			cout << "����˺�" << endl;
			man->addPerson();
		}
		else if (select == 2)
		{
			cout << "�鿴�˺�" << endl;
			man->showPerson();
		}
		else if (select == 3)
		{
			cout << "�鿴����" << endl;
			man->showComputer();
		}
		else if (select == 4)
		{
			cout << "���ԤԼ" << endl;
			man->clearFile();
		}
		else
		{
			delete manager;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}

	}
}

void LoginIn(string fileName, int type)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);
	
	if (!ifs.is_open())
	{
		cout << "�ļ������ڣ�" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1) //ѧ��
	{
		cout << "���������ѧ��" << endl;
		cin >> id;
	}
	else if (type == 2) //��ʦ
	{
		cout << "��������Ľ̹���" << endl;
		cin >> id;
	}

	cout << "�������û�����" << endl;
	cin >> name;

	cout << "���������룺" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ����½��֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "ѧ����֤��½�ɹ���" << endl;
				system("pause");
				system("cls");

				person = new Student(id, name, pwd);
				return;
			}
		}

	}
	else if (type == 2)
	{
		//��ʦ��½��֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "��ʦ��֤��½�ɹ���" << endl;
				system("pause");
				system("cls");

				person = new Teacher(id, name, pwd);
				return;
			}
		}

	}
	else if (type == 3)
	{
		//����Ա��½��֤
		string fName;
		string fPwd;
		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd)
			{
				cout << "����Ա��֤��½�ɹ���" << endl;
				system("pause");
				system("cls");

				person = new Manager(name, pwd);
				//�������Ա�Ӳ˵�
				managerMenu(person);
				return;
			}
		}
	}

	cout << "��֤��½ʧ�ܣ�" << endl;
	
	system("pause");
	system("cls");
	return ;
}

int main()
{
	while (true)
	{
		cout << "========================��ӭ��������ԤԼϵͳ========================" << endl;
		cout << endl << "������������ݣ�" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.ѧ������           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.��    ʦ           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          3.�� �� Ա           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.��    ��           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";

		cout << "����������ѡ��" << endl;
		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1:  //ѧ�����
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:  //��ʦ���
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:  //����Ա���
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:  //�˳�
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}

	}
	system("pause");
	return 0;
}