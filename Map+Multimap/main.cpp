#include <iostream>
#include <map>
#include <string>
using namespace std;


int main()
{
	setlocale(0, "");
	//pair<string, string> p("111111p","telephone");
	//cout << p.first << " - ";
	//cout << p.second << endl;
	map<string, int> myMap;
	//myMap.emplace(3, "monitor");
	//myMap.insert(make_pair(1, "telephon"));
	//myMap.insert(pair<int, string>(2, "notebook"));
	//myMap.emplace(22, "keyboard");
	//auto it = myMap.find(22);
	//auto res = myMap.emplace(56, "new");
	//if (res.first != myMap.end())
	//{
	//	cout <<res.second<<endl;
	//}
	//else cout << "Not Found";
	//cout << myMap[22] << endl;
	//myMap.emplace("Pete", 1313);
	//myMap["Pete"] = 93;
	//myMap.emplace("Michael", 222);
	//myMap.emplace("Manson", 4441);
	//myMap["Vasya"] = 1341;
	//myMap["Vasya"] = 2212;
	//try
	//{
	//	myMap.at("Cane") = 3;
	//}
	//catch (const exception& ex)
	//{
	//	cout<<ex.what();
	//}
	//myMap.erase("Pete");

	multimap<string, int> myMultimap;
	myMultimap.emplace("Pete", 11); 
	myMultimap.emplace("Pete", 12);
	myMultimap.emplace("Pete", 13);
	for (auto i : myMultimap)
	{
		cout << i.second<<" ";
	}
	return 0;
}
