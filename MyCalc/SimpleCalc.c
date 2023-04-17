#include <stdio.h>
#include "LibConsole.h"

void main()
{
	while (1) // ��� �ݺ�
	{
		// �Ǽ� �Է�: a, b
		printf("�Ǽ� a: ");
		double a = getdbl();
		printf("�Ǽ� b: ");
		double b = getdbl();
		printf("�Է��� a = %g, b = %g\n\n", a, b);

		// ������ �Է�: op
		printf("������(+-*/%%) �Է�: ");
		char op = _getche();
		printf("\n�Է��� ������ = %c\n", op);

		// �����ڿ� ���� ���
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
}