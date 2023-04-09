#include <stdio.h>
#include <math.h> // ���� ����� ���� ��� ����(*.h)
#include "LibConsole.h"

void main()
{
	clrscr(); // clear screen
	puts("===================");
	puts("�ܼ� ���� Version 1.0");
	puts("===================\n");

	while (1) // ���� ����: 0�� �ƴ� ���� ��� True(�Ǵܽ�)
	{
		settextcol(GRAY);
		printf("x: ");
		double x = getdbl();
		printf("y: ");
		double y = getdbl();
		settextcol(RED);
		printf("op(+-*/%%^): "); // ������(operator, op)
		char op = _getche(); // ���� �ϳ� �Է� ����(Enter �ʿ� ����); ����Ϳ� ���� ���
		putchar('\n');
		settextcol(GREEN);
		if (op == '+') // ����
		{
			double ans = x + y;
			printf("%g + %g = %g\n\n", x, y, ans);
		}
		else if (op == '-') // ����; else�� ���� ���ǽ��� �����
		{
			double ans = x - y;
			printf("%g - %g = %g\n\n", x, y, ans);
		}
		else if (op == '*') // ����
		{
			double ans = x * y;
			printf("%g * %g = %g\n\n", x, y, ans);
		}
		else if (op == '/') // ������
		{
			double ans = x / y;
			printf("%g / %g = %g\n\n", x, y, ans);
		}
		else if (op == '%') // ������(%) ����; �������� ����
		{
			int ans = (int)x % (int)y; // int�� ����ȯ�� �ʿ�
			printf("%d / %d = %d\n\n", (int)x, (int)y, ans);
		}
		else if (op == '^') // C���� ^�� XOR ����; �ܼ� ���⿡���� ����(�ŵ�����)���� ����; math.h�� ����� pow() ���
		{
			double ans = pow(x, y); // pow�� power�� ����; x ^ y; x�� �ؼ�, y�� ����; x ** y (���̽�, ��Ʈ��)
			printf("%g ^ %g = %g\n\n", x, y, ans);
		}
		else if (op == 'x') // ���� ���� ����
			break;
	}

	settextcol(GRAY);
	puts("�����մϴ�. �����մϴ�.");
}