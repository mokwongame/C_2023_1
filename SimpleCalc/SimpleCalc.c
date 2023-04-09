#include <stdio.h>
#include <math.h> // 수학 계산을 위한 헤더 파일(*.h)
#include "LibConsole.h"

void main()
{
	clrscr(); // clear screen
	puts("===================");
	puts("단순 계산기 Version 1.0");
	puts("===================\n");

	while (1) // 무한 루프: 0이 아닌 값은 모두 True(판단식)
	{
		settextcol(GRAY);
		printf("x: ");
		double x = getdbl();
		printf("y: ");
		double y = getdbl();
		settextcol(RED);
		printf("op(+-*/%%^): "); // 연산자(operator, op)
		char op = _getche(); // 문자 하나 입력 받음(Enter 필요 없음); 모니터에 문자 출력
		putchar('\n');
		settextcol(GREEN);
		if (op == '+') // 덧셈
		{
			double ans = x + y;
			printf("%g + %g = %g\n\n", x, y, ans);
		}
		else if (op == '-') // 뺄셈; else를 쓰면 조건식이 연결됨
		{
			double ans = x - y;
			printf("%g - %g = %g\n\n", x, y, ans);
		}
		else if (op == '*') // 곱셈
		{
			double ans = x * y;
			printf("%g * %g = %g\n\n", x, y, ans);
		}
		else if (op == '/') // 나눗셈
		{
			double ans = x / y;
			printf("%g / %g = %g\n\n", x, y, ans);
		}
		else if (op == '%') // 나머지(%) 연산; 정수에만 정의
		{
			int ans = (int)x % (int)y; // int로 형변환이 필요
			printf("%d / %d = %d\n\n", (int)x, (int)y, ans);
		}
		else if (op == '^') // C에서 ^는 XOR 연산; 단순 계산기에서는 지수(거듭제곱)으로 생각; math.h에 선언된 pow() 사용
		{
			double ans = pow(x, y); // pow는 power의 약자; x ^ y; x는 밑수, y는 지수; x ** y (파이썬, 포트란)
			printf("%g ^ %g = %g\n\n", x, y, ans);
		}
		else if (op == 'x') // 무한 루프 종료
			break;
	}

	settextcol(GRAY);
	puts("감사합니다. 종료합니다.");
}