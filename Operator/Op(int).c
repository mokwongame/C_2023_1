#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// ���α׷�: ��ɾ�(�ڵ�) + ������
	int i;
	int j;
	int k;

	// �Է�
	printf("i �Է�:");
	i = getint();
	printf("j �Է�:");
	j = getint();

	// ����(operation): ���� ����(binary operation)
	printf("i = %d, j = %d\n", i, j);
	// ������(operator)
	k = i + j;
	printf("add: %d\n", k);
	k = i - j;
	printf("sub: %d\n", k);
	k = i * j;
	printf("mul: %d\n", k);
	k = i / j; // ������: ��
	printf("div: %d\n", k);
	k = i % j; // ������: ������
	printf("mod: %d\n", k);

	// ���� ����(unary operation)
	int m = -k;
	m = +k;
	printf("m = %d\n", m);
	// �������� �ִ� ���� ������
	m++; // m�� �ϳ� ����: m = m+1
	printf("m++ = %d\n", m);
	m--; // m�� �ϳ� ����: m = m-1
	printf("m-- = %d\n", m);
	// ������ �Ǽ��� ��� �ִ� ���� ������
	m += 4; // m = m+4
	printf("m += 4: %d\n", m);
	m -= 4; // m = m-4
	printf("m -= 4: %d\n", m);
	m *= 4; // m = m*4
	printf("m *= 4: %d\n", m);
	m /= 4; // m = m/4
	printf("m /= 4: %d\n", m);
	m %= 4; // m = m%4
	printf("m %%= 4: %d\n", m);
}