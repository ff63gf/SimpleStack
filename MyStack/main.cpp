#pragma once
#include "Stack.h"

void main()
{
	Stack stack;

	stack.push(1);
	stack.push(5);
	stack.push(9);

	int size = stack.size();

	int n1 = stack.pop();
	int n2 = stack.top();

	int n3 = 0;
	while (stack.empty())
	{
		n3 = stack.pop();
	}
}