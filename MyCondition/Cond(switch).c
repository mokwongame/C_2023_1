#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// ��ȣ �Ǵܽ��� ���� ���ǹ�: �ַ� if ��� switch ���
	// Cond(elseif).c�� �ڵ�� ��
	puts("3�� �������� �Ǵ��� ������ �Է��ϼ���.");
	printf("i: ");
	int i = getint(); // �Ҵ�(=)
	int rem = i % 3; // ������: 0, 1, 2���� ����
	switch (rem) // switch (��ȣ�� �Ǵ� ���)
	{
	case 0: printf("i�� �������� 0\n"); break; // case ��: �ڵ� ���; break;
	case 1: printf("i�� �������� 1\n"); break;
		//case 2: printf("i�� �������� 2\n"); break;
	default: printf("i�� �������� 2\n"); // ������ ��� ��ü
	}
}