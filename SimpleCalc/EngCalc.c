#include <stdio.h>
#include <math.h> // 수학 계산을 위한 헤더 파일(*.h)
#include "LibConsole.h"

void main()
{
	clrscr(); // clear screen
	puts("===================");
	puts("공학용 계산기 Version 1.0");
	puts("===================\n");

	double ans = 0.;
	char op = '=';
	while (1)
	{
		// 입력 방식: (((x + y) * z) - w) + ...
		// 최초 연산 실행: x + => ans = x를 대입하고 +는 나중에 처리
		settextcol(GRAY);
		printf("x: ");
		double x = getdbl(); // 처음: x, 2번: y, 3번: z, ...
		if (op == '=') // 최종 결과를 ans에 할당
		{
			ans = x;
			settextcol(GREEN);
			printf("ans = %g\n\n", ans);
		}
		else if (op == '+')
		{
			ans += x; // 이항 할당: ans = ans + x
			settextcol(GREEN);
			printf("ans + %g => ans = %g\n\n", x, ans);
		}
		else if (op == '-')
		{
			ans -= x; // 이항 할당: ans = ans - x
			settextcol(GREEN);
			printf("ans - %g => ans = %g\n\n", x, ans);
		}
		else if (op == '*')
		{
			ans *= x; // 이항 할당: ans = ans * x
			settextcol(GREEN);
			printf("ans * %g => ans = %g\n\n", x, ans);
		}
		else if (op == '/')
		{
			ans /= x; // 이항 할당: ans = ans / x
			settextcol(GREEN);
			printf("ans / %g => ans = %g\n\n", x, ans);
		}
		else if (op == '%')
		{
			int nAns = (int)ans;
			nAns %= (int)x; // 이항 할당: ans = ans % x
			ans = nAns;
			settextcol(GREEN);
			printf("ans / %g => ans = %g\n\n", x, ans);
		}
		else if (op == '^')
		{
			ans = pow(ans, x); // 단순한 함수 호출
			settextcol(GREEN);
			printf("ans ^ %g => ans = %g\n\n", x, ans);
		}

		settextcol(RED);
		printf("op(+-*/%%^=): ");
		op = _getche();
		putchar('\n');
		if (op == 'x') // 종료
			break;
		while (isalpha(op)) // 수학 함수 처리
		{
			if (op == 's') // sin
			{
				ans = sin(ans);
				settextcol(GREEN);
				printf("sin(ans) => ans = %g\n\n", ans);
			}
			else if (op == 'c') // cos
			{
				ans = cos(ans);
				settextcol(GREEN);
				printf("cos(ans) => ans = %g\n\n", ans);
			}
			else if (op == 't') // tan
			{
				ans = tan(ans);
				settextcol(GREEN);
				printf("tan(ans) => ans = %g\n\n", ans);
			}
			else if (op == 'r') // sqrt(제곱근)
			{
				ans = sqrt(ans);
				settextcol(GREEN);
				printf("sqrt(ans) => ans = %g\n\n", ans);
			}
			else if (op == 'e') // exp
			{
				ans = exp(ans);
				settextcol(GREEN);
				printf("exp(ans) => ans = %g\n\n", ans);
			}
			else if (op == 'l') // log: 자연 로그
			{
				ans = log(ans);
				settextcol(GREEN);
				printf("log(ans) => ans = %g\n\n", ans);
			}
			settextcol(RED);
			printf("op(+-*/%%^=): ");
			op = _getche();
			putchar('\n');
		}
	}

	settextcol(GRAY);
	puts("감사합니다. 종료합니다.");
}