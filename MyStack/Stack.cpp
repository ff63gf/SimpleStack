#include "Stack.h"

void Stack::push(int data)
{
	m_v.push_back(data);
}

int Stack::pop()
{
	int tmp = m_v.back();
	m_v.pop_back();
	return tmp;
}

bool Stack::empty()
{
	return m_v.empty();
}

int Stack::size()
{
	return m_v.size();
}

int Stack::top()
{
	return m_v.back();
}