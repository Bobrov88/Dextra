#include <iostream>
#include <list>
#include <vector>
#define E endl
using namespace std;

template <typename T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
	{
		cout << *it << endl;
	}
}


int main()
{
	setlocale(0, "");
	list<int> myList = { 15,64,979,99,99,99 };
	list<int> myList2 = { 19,66,44,22 };
	list<int>::iterator it;
	it++;
	++it;
	//for (auto it = myList.cbegin(); it != myList.cend(); it++)
	//{
	//	cout << *it << endl;
	//}
	//int a = 5;
	//cout << ++a << endl;
/*	myList.push_back(5);
	myList.push_front(151);
	auto it = myList.begin();
	cout<<myList.size() << E;
	cout << "SORT" < E*/;
	//myList.sort();
	//PrintList(myList);
	//cout << endl;
	/*cout << "POP FRONT" << E;
	myList.pop_front();
	PrintList(myList);*/
	//myList.unique();
	//PrintList(myList);
	//cout << endl;
	//myList.reverse();
	//PrintList(myList);
	//myList.clear();
	//auto it = myList.begin();
	//advance(it, 3);
	//myList.insert(it, 300);
	//PrintList(myList);
//	cout << E;
	//myList.erase(it);
	//PrintList(myList);
//	myList.remove(99);
	//PrintList(myList);
	//cout << E;
	//myList.assign(3,13213);
	
//	myList.assign(myList2.begin(), myList2.end());
	//PrintList(myList);
	return 0;
}