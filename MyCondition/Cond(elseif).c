#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// getint(): ������ Ű����κ��� �Է¹޴� �Լ�; LibConsole.h�� include
	puts("3�� �������� �Ǵ��� ������ �Է��ϼ���.");
	printf("i: ");
	int i = getint(); // �Ҵ�(=)
	int rem = i % 3; // ������: 0, 1, 2���� ����
	if (rem == 0)
		printf("i�� �������� 0\n");
	else if (rem == 1)
		printf("i�� �������� 1\n");
	//else if (rem == 2) // else if�� ���� �� ��� ����
	else // �׿� ��� ��ü
		printf("i�� �������� 2\n");

	// 3�� ��� �Ǵ�
	//if (rem == 0) // ���� ������(==)
	//	printf("i�� 3�� ���\n");
	//else 	printf("i�� 3�� ����� �ƴ�\n");

	if (rem != 0) // �ٸ� ������(!=)
		printf("i�� 3�� ����� �ƴ�\n");
	else 	printf("i�� 3�� ���\n");
}