#include <stdio.h>

// �Լ� ����
//int funadd(int a, int b); // funadd: �Լ���

// �Լ� ������
typedef int (*funptr)(int a, int b); // �Լ� ���𿡼� �Լ��� ��� �Լ� �����͸� ���

int funadd(int a, int b)
{
	return a + b;
}

int funmul(int a, int b)
{
	return a * b;
}

void main()
{
	size_t intsize = sizeof(int); // 4 ����Ʈ; size_t: size �ڷ����� typedef(_t �ǹ�)�̶� ��

	int a = 10;
	int b = -20;

	// �Լ� ������
	funptr fp = NULL;
	fp = funadd;
	// funptr fp = funadd; // ��������
	int c = (*fp)(a, b);
	printf("a+b = %d\n", c);
	fp = funmul;
	c = (*fp)(a, b); // �̹����� ����
	printf("a*b = %d\n", c);
}