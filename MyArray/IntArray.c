#include <stdio.h>

#define ARRAY_SIZE	(20000)

void main()
{
	// [] ��ȣ: �迭�� �ǹ�
	//int ar[10] = { 1,2,3,4,5,6,7,8,9,10 }; // �迭(array): int �ڷ��� 10���� ����
	//int ar[10] = { 1,2,3 }; // �ʱ�ȭ���� ���� ���� 0���� �ʱ�ȭ
	int ar[ARRAY_SIZE] = { 0 };
	// {}�� �̿��ؼ� index ������� �迭�� �ʱ�ȭ
	int ar0, ar1, ar2, ar3, ar4, ar5, ar6, ar7, ar8, ar9; // int �ڷ��� 10��

	ar[0] = 2; // 0������ 9��(index: ����, ÷��)���� �Ҵ� ����: ar[10] ���� ������ 9������ �Ҵ�
	ar[1] = 10;
	ar[9] = 45;
	ar[2] = ar[0];
	ar[3] = ar[9];
	ar[4] = ar[3] * 10; // ar[3]�� ��(value)ó�� ���

	// �迭 ���: �ݺ���(for) ���
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d, ", ar[i]);
	}
}