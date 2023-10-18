#pragma once
#include "Stack.h"

void main()
{
	// 이것은 주석입니다.
	Stack stack;

	// 3개의 데이터를 삽입
	stack.push(1);
	stack.push(5);
	stack.push(9);

	// 현재 사이즈 = 3
	int size = stack.size();

	// pop으로 최상단 데이터 출력 및 제거
	int n1 = stack.pop();

	// top으로 최상단 데이터 출력
	int n2 = stack.top();

	// empty로 데이터 고갈 여부 확인
	int n3 = 0;
	while (stack.empty())
	{
		n3 = stack.pop();
	}
}