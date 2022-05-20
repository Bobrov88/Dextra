#include <iostream>
#include <forward_list>

#define E endl
using namespace std;

int main()
{
	setlocale(0, "");
	forward_list<int> fl{ 131,94, 494 };
	//fl.push_front(1);
	//fl.push_front(4);
	
	forward_list<int>::iterator it = fl.before_begin();
//	cout << *it << E;
//	it++;
//	cout << *it << E;
	fl.insert_after(it, 9999);
	for (auto& el : fl) cout << el << endl;
	fl.erase_after(it);
	for (auto& el : fl) cout << el << endl;
	return 0;
}