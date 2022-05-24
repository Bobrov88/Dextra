#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <queue>
using namespace std;


int main()
{
	setlocale(0, "");
	/*queue<int, list <int>> q;*/
	priority_queue<int, deque<int>> q;
	q.push(56);
	q.push(4);
	q.push(4);
	q.push(7);
	q.push(99);
	q.push(4);
	q.push(4);
//	cout << q.front() << endl; not for priority
//	q.pop();
//	cout << q.front() << endl;
//	auto a = q._Get_container(); not for priority
	
	while (!q.empty())
	{
		cout << q.top() << endl;
		q.pop();
		cout << "Left: " << q.size()<<endl;
	}
	return 0;
}
