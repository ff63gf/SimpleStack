#pragma once
#include "Stack.h"

void main()
{
	Stack stack;

	// 3���� �����͸� ����
	stack.push(1);
	stack.push(5);
	stack.push(9);

	// ���� ������ = 3
	int size = stack.size();

	// pop���� �ֻ�� ������ ��� �� ����
	int n1 = stack.pop();

	// top���� �ֻ�� ������ ���
	int n2 = stack.top();

	// empty�� ������ �� ���� Ȯ��
	int n3 = 0;
	while (stack.empty())
	{
		n3 = stack.pop();
	}
}