#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// 실수 입력: a, b
	printf("실수 a: ");
	double a = getdbl();
	printf("실수 b: ");
	double b = getdbl();
	printf("입력한 a = %g, b = %g\n\n", a, b);

	// 연산자 입력: op
	printf("연산자(+-*/%%) 입력: ");
	char op = _getche();
	printf("\n입력한 연산자 = %c\n", op);
}