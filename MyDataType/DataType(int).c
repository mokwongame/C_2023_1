#include <stdio.h>

void main()
{
	// ����(integer) �ڷ��� ����: int
	int i;
	int j = 1;
	int k = -10;

	// ���� ���� % ������ �°� �������� ����
	printf("%d %d, ", j, k);
	// () �ǹ�: �� ��ȯ; 8 ����Ʈ �ڷ����� 4 ����Ʈ(int)�� ��ȯ
	printf("���� ���� ũ�� = %d", (int)sizeof(i)); // sizeof(int)
}