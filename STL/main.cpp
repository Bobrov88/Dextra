#include <iostream>
#include <stack>
#include <string>
#include <math.h>
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
		number = (float)_number-48;
		symbol = _symbol;
		is_num = _is_num;
	}
};

float operation(float a, float b, char op)
{
	switch (op)
	{
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	case '^': return pow(a, b);
	case '!': return a;
	default: return 1;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");
	string expression;
	stack<Data> Exit;
	stack<Data> Reverse;
	stack<char> ops;
	Data element;
	float Temp;
	ops.push(' ');
	int i = 0;
	cout << offset << "Введите выражение: "; cin >> expression;
	cout << offset << "ОПЗ: ";
	do
	{
		if (expression[i] == '!')
		{
			element.input(0, '!', false);
			Exit.push(element);
			cout << Exit.top().symbol<<" ";
			i++;
		}
		else if (((int)expression[i] > 47) && ((int)expression[i] < 58))
		{
			element.input(expression[i], '+', true);
			i++;
			while ((int)expression[i] > 47 && (int)expression[i] < 58)
			{
				element.number = element.number * 10 + (int)expression[i] - 48;
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
		cout << Exit.top().symbol;
	}
	cout << endl;
	do
	{
		Reverse.push(Exit.top());
		Exit.pop();
	} while (!Exit.empty());

	do
	{
		while (Reverse.top().is_num)
		{
			Exit.push(Reverse.top());
			Reverse.pop();
		}
		Temp = Exit.top().number;
		Exit.pop();
		Exit.top().number = operation(Exit.top().number, Temp, Reverse.top().symbol);
		Reverse.pop();
	} while (!Reverse.empty());
	cout << "\n" << offset << "Ответ: " << Exit.top().number;
	return 0;
}