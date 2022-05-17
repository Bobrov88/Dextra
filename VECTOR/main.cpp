#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	vector<int> myVector{ 1, 9,44,422,676,78 };

	//for (vector<int>::iterator i=myVector.begin(); i != myVector.end(); i++)
	//{
	//	cout << *i << endl;
	//}
	//cout << "INSERT" << endl;
	//vector<int>::iterator it = myVector.begin();
	//advance(it, 3);
	//myVector.insert(it,999);
	//for (it = myVector.begin(); it != myVector.end(); it++)
	//{
	//	cout << *it << endl;
	//}
	//cout << "ERASE+3" << endl;
	//vector<int>::iterator itErase = myVector.begin();
	//myVector.erase(itErase,itErase+3);
	//for (it = myVector.begin(); it != myVector.end(); it++)
	//{
	//	cout << *it << endl;
	//}
	//for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++)
	//{
	//	cout << *i << endl;
	//}
	/*for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
	{
		cout << *i << endl;
	}*/
	//cout << *it << endl;
	//advance(it, 3);
	//cout << *it << endl;

	//{
	//	cout << *i << endl;
	//}
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
	//cout << "Number: " << myVector.size() << endl;
	//for (int i = 0; i < myVector.size(); i++)
	//{
	//	cout << myVector[i] << endl;
	//}
	////	myVector.clear();
	//cout << "Capacity " << myVector.capacity() << endl;
	//myVector.pop_back();
	//cout << "Number: " << myVector.size() << endl;
	//for (int i = 0; i < myVector.size(); i++)
	//{
	//	cout << myVector[i] << endl;
	//}
	//myVector.shrink_to_fit();
	//cout << "Capacity " << myVector.capacity() << endl;
	//cout << "Empty " << myVector.empty()<<endl;
	//myVector.resize(4);
	//for (int i = 0; i < myVector.size(); i++)
	//{
	//	cout << myVector[i] << endl;
	//}
	//cout << "Capacity " << myVector.capacity() << endl;
	return 0;
}