#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	vector<int> myVector(20, 3);
		//= { 0,484,484,999 };
	/*myVector.reserve(100);
	myVector.push_back(2);
	myVector.push_back(44);
	myVector.push_back(77);
	myVector.push_back(9);*/
	//myVector[0] = 1000;
	//myVector[10] = 55;
	//cout << myVector[10] << endl; //ошибка
	//try
	//{
	//cout << myVector.at(8) << endl;
	//}
	//catch (const out_of_range & ex)
	//{
	//	cout << ex.what()<<endl;
	//}
	cout << "Number: " << myVector.size() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	//	myVector.clear();
	cout << "Capacity " << myVector.capacity() << endl;
	myVector.pop_back();
	cout << "Number: " << myVector.size() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	myVector.shrink_to_fit();
	cout << "Capacity " << myVector.capacity() << endl;
	cout << "Empty " << myVector.empty()<<endl;
	myVector.resize(4);
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	cout << "Capacity " << myVector.capacity() << endl;
	return 0;
}