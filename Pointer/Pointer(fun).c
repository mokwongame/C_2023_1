#include <stdio.h>

// 함수 선언
//int funadd(int a, int b); // funadd: 함수명

// 함수 포인터
typedef int (*funptr)(int a, int b); // 함수 선언에서 함수명 대신 함수 포인터를 사용

int funadd(int a, int b)
{
	return a + b;
}

int funmul(int a, int b)
{
	return a * b;
}

void main()
{
	size_t intsize = sizeof(int); // 4 바이트; size_t: size 자료형의 typedef(_t 의미)이란 뜻

	int a = 10;
	int b = -20;

	// 함수 포인터
	funptr fp = NULL;
	fp = funadd;
	// funptr fp = funadd; // 문제없음
	int c = (*fp)(a, b);
	printf("a+b = %d\n", c);
	fp = funmul;
	c = (*fp)(a, b); // 이번에는 곱셈
	printf("a*b = %d\n", c);
}