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

struct Data
{
	float number;
	char symbol;
	bool is_num;
	void input(
		char _number,
		char _symbol,
		bool _is_num)
	{
		number = (int)_number-48;
		symbol = _symbol;
		is_num = _is_num;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	string expression;
	stack<Data> Exit;
	stack<char> ops;
	Data element;
	ops.push(' ');
	int i = 0;
	cout << offset << "Введите выражение: "; cin >> expression;
	cout << offset << "ОПЗ: ";
	do
	{//(expression[i] == '!')
		if (((int)expression[i] > 47) && ((int)expression[i] < 58))
		{
			element.input(expression[i], '+', true);
			i++;
			while ((int)expression[i] > 47 && (int)expression[i] < 58)
			{
				element.number = element.number * 10 + (int)expression[i]-48;
				i++;
			}
			Exit.push(element);
			cout << Exit.top().number<<" ";
			element.number = 0;
		}
		else if (expression[i] == ')')
		{
			while (ops.top() != '(')
			{
				element.input(0, ops.top(), false);
				Exit.push(element);
				ops.pop();
				cout << Exit.top().symbol<<" ";
			}
			ops.pop();
			i++;
		}
		else if (expression[i] == '(')
		{
			ops.push(expression[i]);
			i++;
		}
		else
		{
			if (priority(ops.top()) < priority(expression[i]))	ops.push(expression[i]);
			else
			{
				while (priority(ops.top()) >= priority(expression[i]))
				{
					element.input(0, ops.top(), false);
					Exit.push(element);
					ops.pop();
					cout << Exit.top().symbol<<" ";
				}
				ops.push(expression[i]);
			}
			i++;
		}
	} while (i < expression.length());
	while (ops.top() != ' ')
	{
		element.input(0, ops.top(), false);
		Exit.push(element);
		ops.pop();
		cout << Exit.top().symbol<<" ";
	}
	return 0;
}