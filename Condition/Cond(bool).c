#include <stdio.h>
#include <stdbool.h>

void main()
{
	/*bool b1 = false;
	bool b2 = false;

	// ���� ������, �� ������, ���� �� ��ü: ���ǹ��� �ǴܽĿ� �� �� ����
	//bool ans = b1 && b2; // �� AND ����: &(��Ʈ ���� AND)�� ����
	bool ans = b1 || b2; // �� OR ����: |(��Ʈ ���� OR)�� ����
	//bool ans = !b1; // NOT ����: ~(��Ʈ ���� NOT)�� ����
	// bool�� ��� true�� 1
	if (ans) // �Ǵܽ�: true(����: 1�� �ش����� �ʰ� 0�� �ƴ� ��� ��, false(0�� ��)�� ������ ����
	{
		puts("ans is true.");
	}
	else
	{
		puts("ans is false.");
	}*/

	int i = -50;
	int j = -10;
	int ref = 7; // ���ذ�
	printf("i = %d, j = %d\n", i, j);
	// ������ �ϳ��� ���� {} ���� ����
	if ((i > ref) && (j > ref))
		printf("i, j �Ѵ� %d���� ŭ\n", ref);
	else if ((i > ref) || (j > ref))
		printf("i, j ���� �ϳ��� %d���� ŭ\n", ref);
	else
		printf("i, j �Ѵ� %d���� ũ�� ����\n", ref);
}