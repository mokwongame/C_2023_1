#include <stdio.h>
#include "LibConsole.h"

void main()
{
	printf("���� �Է�:");
	int n = getint(); // ���� �Է� �ޱ�
	printf("n = %d\n", n); // printf ����ؼ� ���� ���
	printf("n = ");
	putint(n); // putint ����ؼ� ���� ���

	printf("\n�Ǽ� �Է�:");
	double x = getdbl(); // �Ǽ�(double) �Է� �ޱ�
	printf("x = %g\n", x);
	printf("x = ");
	putdbl(x);
}