#include <stdio.h>
#include "LibConsole.h"

void main()
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
}