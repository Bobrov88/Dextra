#include <iostream>
#include <set>
#define E endl
using namespace std;

int main()
{
	setlocale(0, "");
	multiset<int> mySet{ 0,1,1,66,16,48,99 };
	auto it1 = mySet.lower_bound(1);
	auto it2 = mySet.upper_bound(1);
	auto a = mySet.equal_range(1);
	//for (int i = 0; i < 20; i++)
	/*{
		mySet.insert(rand() % 10);
	}*/
	//auto it = mySet.find(5);
	//mySet.end();
	/*for (auto &i : mySet)
	{
		cout << i << endl;
	}*/
	//int a;
	//cin >> a;
	//if (mySet.find(a) != mySet.end())
	//{
	//	cout << "FOUND " << a << E;
	//}
	//else
	//	cout << "NOT FOUND " << a << E;
	//mySet.erase(444);
	for (auto &i : mySet)
	{
		cout << i << endl;
	}
	return 0;
}