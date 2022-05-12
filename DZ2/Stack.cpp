#include <stack>
#include <iostream>
#include <ctime>
using namespace std;
stack<float> stack_storage1;
stack<float> stack_storage2;
void stack_input(stack <float> &storage)
{
	for (size_t i = 0; i < 10; i++)
	{
		storage.push(rand() % 15);
	}
}
void Erase(stack <float>& storage, const unsigned int& from, const unsigned int& to, unsigned int current)
{
	if (storage.size() == 0) return;
	if (current >= from && current < to)
	{
		storage.pop();
		Erase(storage, from, to, current + 1);
	}
	else
	{
		float temp = storage.top();
		storage.pop();
		Erase(storage, from, to, current + 1);
		storage.push(temp);
	}
}
void Erase(stack <float>& storage, const unsigned int first, const unsigned int n)
{
	unsigned int to = storage.size() - first;
	unsigned int from = storage.size() - first - n;
	if (from >= storage.size() || to >= storage.size() || from > to) return;
	Erase(storage, from, to, 0);
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n = 0;
	stack_input(stack_storage1);
	cout << "Вывод стека" << endl;
	while (!stack_storage1.empty())
	{
		std::cout << stack_storage1.top()<<' ';
		stack_storage1.pop();
	}
	cout << "\n";
	cout << "Вывод изменненого стека" << endl;
	stack_input(stack_storage1);
	stack_storage1.pop();
	stack_storage1.emplace(2);
	for (auto i = stack_storage1._Get_container().cbegin(); i < stack_storage1._Get_container().cend(); i++)
	{
		cout<<*i<<' ';
	}
	cout << "\n";
	stack_input(stack_storage2);
	cout << "Введите n:" << endl;
	cin >> n;
	Erase(stack_storage1, 5, n);
	cout << "Первый контейнер" << endl;
	for (auto i = stack_storage1._Get_container().cbegin(); i < stack_storage1._Get_container().cend(); i++)
	{
		cout << *i << ' ';
	}
	cout<<'\n';
	for (auto i = 0; i < stack_storage2.size(); i++)
	{
		stack_storage1.push(stack_storage2.top());
		stack_storage2.pop();
	}
	cout << "Первый + второй контейнер" << endl;
	for (auto i = stack_storage1._Get_container().cbegin(); i < stack_storage1._Get_container().cend(); i++)
	{
		cout << *i << ' ';
	}
}