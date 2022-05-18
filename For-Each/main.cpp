#include <iostream>
#include <list>
#include <vector>
#define E endl
using namespace std;

template <typename T>
void PrintList(const list<T>& lst)
{
	for (auto &it : lst)
	{
		cout << it << endl;
	}
}


int main()
{
	setlocale(0, "");
	int arr[] = { 5,11,94,99,44 };
	list<int> myList{ 5,11,94,99,44 };
	//for (const auto var : arr)
	//{
	//	cout << var << E;
	//}
	PrintList(myList);
	return 0;
}