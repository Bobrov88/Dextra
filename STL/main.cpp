#include <iostream>
#include <stack>
#include <string>
using namespace std;

#define offset "\t\t\t\t"

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
	ops.push(' ');
	int i = 0;
	cout << offset<< "Введите выражение: "; cin >> expression;
	cout << offset << "ОПЗ: ";
	do
	{

		if ((((int)expression[i] > 47) && ((int)expression[i] < 58)) || (expression[i] == '!'))
		{
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
		else if (expression[i] == '(')	ops.push(expression[i]);
		else {
			if (priority(ops.top()) < priority(expression[i]))	ops.push(expression[i]);
			else
			{
				while (priority(ops.top()) >= priority(expression[i]))
				{
					Exit.push(ops.top());
					ops.pop();
					cout << Exit.top();
				}
				ops.push(expression[i]);
			}
			}
		i++;
	} while (i < expression.length());
	while (ops.top() != ' ')
	{
		Exit.push(ops.top());
		ops.pop();
		cout << Exit.top();
	}
	return 0;
}	