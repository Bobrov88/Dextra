#include <iostream>
#include <vector>
#include <stack>
#include <list>
using namespace std;


int main()
{
	setlocale(0, "");
	stack<int,list<int>> st;
	st.push(2);
	st.push(43);
	st.push(3);
	st.emplace(9);
	//cout << st.top() << endl;
	//cout << st.size() << endl;
	//st.pop();
	//cout << st.top() << endl;
	//cout << st.size() << endl;
	auto a = st._Get_container();
	
	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}
	
	return 0;
}
