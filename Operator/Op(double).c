#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// ���α׷�: ��ɾ�(�ڵ�) + ������
	/*double x;
	double y;
	double z;

	// �Է�
	printf("x �Է�:");
	x = getdbl();
	printf("y �Է�:");
	y = getdbl();

	// ����(operation): ���� ����(binary operation)
	printf("x = %g, y = %g\n", x, y);
	// ������(operator)
	z = x + y;
	printf("add: %g\n", z);
	z = x - y;
	printf("sub: %g\n", z);
	z = x * y;
	printf("mul: %g\n", z);
	z = x / y;
	printf("div: %g\n", z);
	z = x / 100; // �Ǽ� / ����: ��� ����� �Ǽ�
	printf("div: %g\n", z);
	int i = 100 / (int)x; // �� ��ȯ (int): double -> int�� ��ȯ; �Ҽ����� ������ ���� �κи� ����(���� �ս�: �Ҽ��� �κ�)
	printf("div: %d\n", i);
	printf("(int)x = %d\n", (int)x);
	// ���� ����(unary operation)
	double w = -z;
	printf("w = %g\n", w);
	w = +z;
	printf("w = %g\n", w);*/

	// ������ �켱 ����: ���� ���� ����� ���ΰ� ������ ���ϴ� ��Ģ(������ ��Ģ�� ����)
	// ()�� ���� ��� > +-(���� ����) > */% > ����(+)�� ����(-)
	// �򰥸��� ()�� �Ἥ ��Ȯ�� ������ �켱 ����
	double x = 12.6;
	double y = 4.5;
	double z = x * y + -x - y; // (x*y) + (-x) - y;
	printf("z = %g\n", z);
	z = (x * y) + (-x) - y;
	printf("z = %g\n", z);

	// �����ݷ�: ������ ����(���� �ð��� ��ħǥ)
	// ��ǥ ������: ���� ���� ��� ������ �� ���� ����� �̾���(��ǥ�� ���� �ǹ�)
	x = 20 * y, y = 50 * x, z = x * y;
	printf("z = %g\n", z);
}