#include <vector>
#include "Student.hpp"
using namespace std;
vector<Student>StudentList;
vector<Student>StudentList2;
void LocalInformation()
{
	StudentList.resize(3);
	StudentList[0].m_SetName("Егор");
	StudentList[0].m_SetSurname("Казанцев");
	StudentList[0].m_SetAge(101);
	StudentList[0].m_SetCourse(3);
	StudentList[0].m_SetMiddleEstimation(3);
	StudentList[0].m_SetLogin("Egor1203");
	StudentList[0].m_SetPassword("password12345");

	StudentList[1].m_SetName("Сергей");
	StudentList[1].m_SetSurname("Иванов");
	StudentList[1].m_SetAge(18);
	StudentList[1].m_SetCourse(1);
	StudentList[1].m_SetMiddleEstimation(4);
	StudentList[1].m_SetLogin("Serg12");
	StudentList[1].m_SetPassword("password12345");

	StudentList[2].m_SetName("Елизавета");
	StudentList[2].m_SetSurname("Козырева");
	StudentList[2].m_SetAge(21);
	StudentList[2].m_SetCourse(2);
	StudentList[2].m_SetMiddleEstimation(5);
	StudentList[2].m_SetLogin("Elz11");
	StudentList[2].m_SetPassword("password12345");

}
void LocalInformation2()
{
	StudentList2.resize(3);
	StudentList2[0].m_SetName("Влад");
	StudentList2[0].m_SetSurname("Казанцев");
	StudentList2[0].m_SetAge(101);
	StudentList2[0].m_SetCourse(3);
	StudentList2[0].m_SetMiddleEstimation(3);
	StudentList2[0].m_SetLogin("Egor1203");
	StudentList2[0].m_SetPassword("password12345");

	StudentList2[1].m_SetName("Иван");
	StudentList2[1].m_SetSurname("Иванов");
	StudentList2[1].m_SetAge(18);
	StudentList2[1].m_SetCourse(1);
	StudentList2[1].m_SetMiddleEstimation(4);
	StudentList2[1].m_SetLogin("Serg12");
	StudentList2[1].m_SetPassword("password12345");

	StudentList2[2].m_SetName("Алина");
	StudentList2[2].m_SetSurname("Козырева");
	StudentList2[2].m_SetAge(21);
	StudentList2[2].m_SetCourse(2);
	StudentList2[2].m_SetMiddleEstimation(5);
	StudentList2[2].m_SetLogin("Elz11");
	StudentList2[2].m_SetPassword("password12345");

}
void Erase(vector<Student>& storage, int n,int first)
{
	for (int index = first; index <= n; ++index)
	{
		storage.erase(storage.begin() + first);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	LocalInformation();
	LocalInformation2();
	cout << "Вывод вектора" << endl;
	for (int i = 0; i < StudentList.size(); i++)
	{
		cout << StudentList[i]<<"\n";
	}
	StudentList.pop_back();
	StudentList[0].m_SetAge(30);
	cout << "Вывод измененого вектора" << endl;
	for (auto i = StudentList.begin(); i < StudentList.end(); i++)
	{
		cout << *i << "\n";
	}
	cout << "Первый контейнер" << endl;
	Erase(StudentList, 1, 1);
	for (auto i = StudentList.begin(); i < StudentList.end(); i++)
	{
		cout << *i << "\n";
	}
	cout << "Первый+второй контейнер" << endl;
	for (auto i = 0; i < StudentList2.size(); i++)
	{
		StudentList.push_back(StudentList2[i]);
	}
	for (auto i = StudentList.begin(); i < StudentList.end(); i++)
	{
		cout << *i << "\n";
	}
}