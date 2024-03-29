#include <stdio.h>
#include "LibConsole.h"

void startCalc()
{
	settextcol(RED);
	puts("=======================");
	puts("| Simple Calculator   |");
	puts("| 개발일: 2023-05-8   |");
	puts("=======================");
	settextcol(WHITE);
}

void stopCalc()
{

}

char inputOp()
{
	printf("연산자(+-*/%%) 입력: ");
	char op = _getche();
	printf("\n입력한 연산자 = %c\n", op);
	return op; // op을 반환(출력); op의 자료형이 char
}

void calc(double a, double b, char op)
{
	if (op == '+')
	{
		double ans = a + b;
		printf("\n%g + %g = %g\n", a, b, ans);
	}
	else if (op == '%') // 나머지 연산은 정수만 가능
	{
		int ans = (int)a % (int)b; // (int)는 int로 형 변환(type cast)
		printf("\n%d %% %d = %d\n", (int)a, (int)b, ans);
	}
}

void main()
{
	startCalc(); // 시작 화면
	while (1) // 계속 반복
	{
		// 실수 입력: a, b
		printf("실수 a: ");
		double a = getdbl();
		printf("실수 b: ");
		double b = getdbl();
		printf("입력한 a = %g, b = %g\n\n", a, b);

		// 연산자 입력: op
		char op = inputOp();

		// 연산자에 따라 계산
		calc(a, b, op);
	}
	stopCalc();
}