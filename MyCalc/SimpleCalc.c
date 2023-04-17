#include <stdio.h>
#include "LibConsole.h"

void main()
{
	while (1) // 계속 반복
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

		// 연산자에 따라 계산
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
}