#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "LibConsole.h"

void printBool(bool b)
{
	if (b) printf("true");
	else printf("false");
}

void main()
{
	double x, y;
	x = 1.1 + 0.1; // 1.2(수학); 컴퓨터는 2진수 쓰기 때문에 십진수로 표현한 실수를 사용할 때 문제가 빈번
	y = 1.2;

	bool b = (x == y);
	printf("x = %.20f\n", x);
	printf("y = %.20f\n", y);
	printBool(b);
}