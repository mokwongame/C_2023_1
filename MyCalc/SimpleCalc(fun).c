#include <stdio.h>
#include "LibConsole.h"

void startCalc()
{
	settextcol(RED);
	puts("=======================");
	puts("| Simple Calculator   |");
	puts("| ������: 2023-05-8   |");
	puts("=======================");
	settextcol(WHITE);
}

void stopCalc()
{

}

char inputOp()
{
	printf("������(+-*/%%) �Է�: ");
	char op = _getche();
	printf("\n�Է��� ������ = %c\n", op);
	return op; // op�� ��ȯ(���); op�� �ڷ����� char
}

void calc(double a, double b, char op)
{
	if (op == '+')
	{
		double ans = a + b;
		printf("\n%g + %g = %g\n", a, b, ans);
	}
	else if (op == '%') // ������ ������ ������ ����
	{
		int ans = (int)a % (int)b; // (int)�� int�� �� ��ȯ(type cast)
		printf("\n%d %% %d = %d\n", (int)a, (int)b, ans);
	}
}

void main()
{
	startCalc(); // ���� ȭ��
	while (1) // ��� �ݺ�
	{
		// �Ǽ� �Է�: a, b
		printf("�Ǽ� a: ");
		double a = getdbl();
		printf("�Ǽ� b: ");
		double b = getdbl();
		printf("�Է��� a = %g, b = %g\n\n", a, b);

		// ������ �Է�: op
		char op = inputOp();

		// �����ڿ� ���� ���
		calc(a, b, op);
	}
	stopCalc();
}