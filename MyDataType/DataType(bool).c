#include <stdio.h>
#include <stdbool.h> // �� �ڷ��� bool ���

void main()
{
	bool b = false; // 0���� ����
	// true: 0�� �ƴ� ��; ��ǥ������ 1�� ����
	//bool b = true; // false�� ����
	printf("%d, ", b);
	printf("bool�� ���� ���� = %lld", sizeof(bool));
}