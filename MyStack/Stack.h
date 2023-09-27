#pragma once
#include <vector>


class Stack
{
private:
	std::vector<int> m_v;

public:
	void push(int data);
	int pop();
	bool empty();
	int size();
	int top();
};