#include <stdio.h>
#include "LibConsole.h"

void main()
{
	puts("�ڸ����� �Ǵ��� ������ �Է��ϼ���.");
	printf("i: ");
	int i = getint();

	//if (i <= 9)
	//	printf("%d�� ���� �ڸ� ���� ����\n", i);
	//else if (i <= 99) // 10���� ó��
	//	printf("%d�� ���� �ڸ� ���� ����\n", i);
	//else if (i <= 999) // 100���� ó��
	//	printf("%d�� ���� �ڸ� ���� ����\n", i);

	if (i < 10)
		printf("%d�� ���� �ڸ� ���� ����\n", i);
	else if (i < 100) // 10���� ó��
		printf("%d�� ���� �ڸ� ���� ����\n", i);
	else if (i < 1000) // 100���� ó��
		printf("%d�� ���� �ڸ� ���� ����\n", i);
}