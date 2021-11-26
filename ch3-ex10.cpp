/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Liam Carroll
 */

#include "std_lib_facilities.h";

int main()
{
	string operation;
	double operand1;
	double operand2;

	cout << "Enter an operation and two operands. Separate these inputs with spaces (eg: * 4 5): ";

	cin >> operation >> operand1 >> operand2;

	double result;

	if (operation == "+" || operation == "plus")
	{
		result = operand1 + operand2;
	}
	else if (operation == "-" || operation == "minus")
	{
		result = operand1 - operand2;
	}
	else if (operation == "*" || operation == "mul")
	{
		result = operand1 * operand2;
	}
	else if (operation == "/" || operation == "div")
	{
		result = operand1 / operand2;
	}
	else
	{
		cout << "ERROR: Not all inputs were recognized.";

		return 0;
	}

	cout << operand1 << " " << operation << " " << operand2 << " = " << result;

	return 0;
}