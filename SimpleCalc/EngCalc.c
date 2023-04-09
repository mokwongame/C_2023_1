#include <stdio.h>
#include <math.h> // ���� ����� ���� ��� ����(*.h)
#include "LibConsole.h"

void main()
{
	clrscr(); // clear screen
	puts("===================");
	puts("���п� ���� Version 1.0");
	puts("===================\n");

	double ans = 0.;
	char op = '=';
	while (1)
	{
		// �Է� ���: (((x + y) * z) - w) + ...
		// ���� ���� ����: x + => ans = x�� �����ϰ� +�� ���߿� ó��
		settextcol(GRAY);
		printf("x: ");
		double x = getdbl(); // ó��: x, 2��: y, 3��: z, ...
		if (op == '=') // ���� ����� ans�� �Ҵ�
		{
			ans = x;
			settextcol(GREEN);
			printf("ans = %g\n\n", ans);
		}
		else if (op == '+')
		{
			ans += x; // ���� �Ҵ�: ans = ans + x
			settextcol(GREEN);
			printf("ans + %g => ans = %g\n\n", x, ans);
		}
		else if (op == '-')
		{
			ans -= x; // ���� �Ҵ�: ans = ans - x
			settextcol(GREEN);
			printf("ans - %g => ans = %g\n\n", x, ans);
		}
		else if (op == '*')
		{
			ans *= x; // ���� �Ҵ�: ans = ans * x
			settextcol(GREEN);
			printf("ans * %g => ans = %g\n\n", x, ans);
		}
		else if (op == '/')
		{
			ans /= x; // ���� �Ҵ�: ans = ans / x
			settextcol(GREEN);
			printf("ans / %g => ans = %g\n\n", x, ans);
		}
		else if (op == '%')
		{
			int nAns = (int)ans;
			nAns %= (int)x; // ���� �Ҵ�: ans = ans % x
			ans = nAns;
			settextcol(GREEN);
			printf("ans / %g => ans = %g\n\n", x, ans);
		}
		else if (op == '^')
		{
			ans = pow(ans, x); // �ܼ��� �Լ� ȣ��
			settextcol(GREEN);
			printf("ans ^ %g => ans = %g\n\n", x, ans);
		}

		settextcol(RED);
		printf("op(+-*/%%^=): ");
		op = _getche();
		putchar('\n');
		if (op == 'x') // ����
			break;
		while (isalpha(op)) // ���� �Լ� ó��
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
			else if (op == 'r') // sqrt(������)
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
			else if (op == 'l') // log: �ڿ� �α�
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
	puts("�����մϴ�. �����մϴ�.");
}