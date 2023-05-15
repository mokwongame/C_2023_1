#include <stdio.h>

void myfun(int a) // a = i: �Է��� a�� ����; ���� ���� ȣ��(call by value)
{
	a = -100;
}

void myfunptr(int* p) // ���� ������ �ּҸ� �Ѱ���; ������ ���� ȣ��(call by reference); return ��� ���� �Ѱܹ��� �� �ִ� ���ο� ���
{
	*p = -100;
}

void myfunptr2(int* p, int* q) // ���� ������ �ּҸ� �Ѱ���; ������ ���� ȣ��(call by reference); return ��� ���� �Ѱܹ��� �� �ִ� ���ο� ���; return�� ���ÿ� 2�� �� �� �ִ� ���
{
	*p = -1000;
	*q = 1000;
}

void main()
{
	int i = 30;
	myfun(i);
	printf("i = %d\n", i);
	myfunptr(&i);
	printf("i = %d\n", i);
	int j = 0;
	myfunptr2(&i, &j);
	printf("i = %d, j = %d\n", i, j);
}