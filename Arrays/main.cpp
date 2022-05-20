#include <iostream>
#include <array>
#define E endl
using namespace std;

int main()
{
	setlocale(0, "");
	array<int, 4> arr {1,94,77,9};
	//arr.fill(-1);
	//try
	//{
	//	cout << arr.at(11) << endl;
	//}
	//catch (const std::exception&ex)
	//{
	//	cout << ex.what() << endl;
	//}
	//for (auto i : arr)
	//	cout << i << endl;
	//cout << arr.front();
	array<int, 4> arr2 = { 1,94,77,19 };
	bool result = arr < arr2;
	cout << result << endl;
	return 0;
}