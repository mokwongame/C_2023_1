#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "LibConsole.h"

void printBool(bool b)
{
	if (b) printf("true");
	else printf("false");
}

void main()
{
	double x, y;
	x = 1.1 + 0.1; // 1.2(����); ��ǻ�ʹ� 2���� ���� ������ �������� ǥ���� �Ǽ��� ����� �� ������ ���
	y = 1.2;

	bool b = (x == y);
	printf("x = %.20f\n", x);
	printf("y = %.20f\n", y);
	printBool(b);
}