#include <vector>
#include "Student.hpp"
#include <Windows.h>
using namespace std;
vector<Student>StudentList;
vector<Student>StudentList2;
vector<Student>StudentList3;
void sort(vector<Student>&Storage)
{
	cout << "1. �� ��������\n";
	cout << "2. �� �����������\n>>> ";
	int check = 0;
	cin >> check;
	switch (check)
	{
	case 1:
		for (int i = 0; i < Storage.size(); i++)
		{
			for (int j = i + 1; j < Storage.size(); j++)
			{
				if (Storage[i] > Storage[j])
				{
					Student temp = Storage[i];
					Storage[i] = Storage[j];
					Storage[j] = temp;
				}
			}
		}
	case 2:
		for (int i = 0; i < Storage.size(); i++)
		{
			for (int j = i + 1; j < Storage.size(); j++)
			{
				if (Storage[i] < Storage[j])
				{
					Student temp = Storage[i];
					Storage[i] = Storage[j];
					Storage[j] = temp;
				}
			}
		}
	}
}
void SearchAndSwap()
{
	string SurnmaeToSearch;
	cout << "�������\n>>> ";
	cin >> SurnmaeToSearch;
	for (int i = 0; i < StudentList.size(); i++)
	{
		if (StudentList[i].m_GetSurname() == SurnmaeToSearch)
		{
			StudentList2.push_back(StudentList[i]);
		}
	}

}
void SearchAndCount()
{
	string SurnmaeToSearch;
	int counter = 0;
	cout << "�������\n>>> ";
	cin >> SurnmaeToSearch;
	for (int i = 0; i < StudentList3.size(); i++)
	{
		if (StudentList3[i].m_GetSurname() == SurnmaeToSearch)
		{
			counter += 1;
		}
	}
	if (counter > 0)
	{
		cout << "����- " << counter;
	}
	else
	{
		cout << "����" << endl;
	}
}

void LocalInformation()
{
	StudentList.resize(3);
	StudentList[0].m_SetName("����");
	StudentList[0].m_SetSurname("��������");
	StudentList[0].m_SetAge(101);
	StudentList[0].m_SetCourse(3);
	StudentList[0].m_SetMiddleEstimation(3);
	StudentList[0].m_SetLogin("Egor1203");
	StudentList[0].m_SetPassword("password12345");

	StudentList[1].m_SetName("������");
	StudentList[1].m_SetSurname("������");
	StudentList[1].m_SetAge(18);
	StudentList[1].m_SetCourse(1);
	StudentList[1].m_SetMiddleEstimation(4);
	StudentList[1].m_SetLogin("Serg12");
	StudentList[1].m_SetPassword("password12345");

	StudentList[2].m_SetName("���������");
	StudentList[2].m_SetSurname("��������");
	StudentList[2].m_SetAge(21);
	StudentList[2].m_SetCourse(2);
	StudentList[2].m_SetMiddleEstimation(5);
	StudentList[2].m_SetLogin("Elz11");
	StudentList[2].m_SetPassword("password12345");

}
void LocalInformation2()
{
	StudentList2.resize(3);
	StudentList2[0].m_SetName("����");
	StudentList2[0].m_SetSurname("��������");
	StudentList2[0].m_SetAge(101);
	StudentList2[0].m_SetCourse(3);
	StudentList2[0].m_SetMiddleEstimation(3);
	StudentList2[0].m_SetLogin("Egor1203");
	StudentList2[0].m_SetPassword("password12345");

	StudentList2[1].m_SetName("����");
	StudentList2[1].m_SetSurname("������");
	StudentList2[1].m_SetAge(18);
	StudentList2[1].m_SetCourse(1);
	StudentList2[1].m_SetMiddleEstimation(4);
	StudentList2[1].m_SetLogin("Serg12");
	StudentList2[1].m_SetPassword("password12345");

	StudentList2[2].m_SetName("�����");
	StudentList2[2].m_SetSurname("��������");
	StudentList2[2].m_SetAge(21);
	StudentList2[2].m_SetCourse(2);
	StudentList2[2].m_SetMiddleEstimation(5);
	StudentList2[2].m_SetLogin("Elz11");
	StudentList2[2].m_SetPassword("password12345");

}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	LocalInformation();
	for (auto i = StudentList.begin(); i < StudentList.end(); i++)
	{
		cout << *i << "\n";
	}
	cout << "\n";
	sort(StudentList);
	for (auto i = StudentList.begin(); i < StudentList.end(); i++)
	{
		cout << *i << "\n";
	}
	cout << "\n";
	SearchAndSwap();
	cout << "\n";
	cout << "������ ���������" << endl;
	for (auto i = StudentList2.begin(); i < StudentList2.end(); i++)
	{
		cout << *i << "\n";
	}
	cout << "\n";
	cout << "���������� ������� ����������" << endl;
	sort(StudentList);
	cout << "\n";
	cout << "���������� ������� ����������" << endl;
	sort(StudentList2);
	cout << "\n";
	cout << "������ ���������" << endl;
	for (int i = 0; i < StudentList.size(); i++)
	{
		StudentList3.push_back(StudentList[i]);
	}
	for (int i = 0; i < StudentList2.size(); i++)
	{
		StudentList3.push_back(StudentList2[i]);
	}
	for (auto i = StudentList3.begin(); i < StudentList3.end(); i++)
	{
		cout << *i << "\n";
	}
	SearchAndCount();
}