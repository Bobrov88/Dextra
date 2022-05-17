#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	auto a = 10;
	auto b = 7.8;
	auto c = true;
	auto d = "ggf";
	auto e = 'c';
	auto z = b;
	vector<int> myVector = { 11, 47,0 };
	//vector<int>::iterator it = myVector.begin();
	auto it2 = myVector.begin();
//	for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}