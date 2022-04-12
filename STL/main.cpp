#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char ops)
{
	switch (ops)
	{
	case '^': return 3;
	case '*':return 2;
	case '/':return 2;
	case '+':return 1;
	case '-':return 1;
	default: return 0;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");
	string expression;
	stack<char> Exit;
	stack<char> ops;
	//ops.push(' ');
	int i = 0;
	cout << "¬ведите выражение: "; cin >> expression;
	do
	{
		if ((((int)expression[i] > 47) && ((int)expression[i] < 58)) || (expression[i] == '!'))
		{
			Exit.push(expression[i]);
			cout << Exit.top();
		}
		else if (((expression[i]=='+')||(expression[i] == '-')||(expression[i] == '*')||(expression[i] == '/'))&&(!ops.empty()))
		{

			while (priority(ops.top()) > priority(expression[i]) && !ops.empty())
			{
				Exit.push(ops.top());
				ops.pop();
				cout << Exit.top();
			}
			Exit.push(expression[i]);
			cout << Exit.top();
			}
		else if (expression[i] == ')')
		{ 
			while (ops.top() != '(')
			{
				Exit.push(ops.top());
				ops.pop();
				cout << Exit.top();
			}
			ops.pop();
		}
		else ops.push(expression[i]);
		i++;
	} while (i < expression.length());
	return 0;
}