#include <stdio.h>

// �ڷ��� ����(type definition) ������
typedef int* intptr; // int*�� intptr�� ���Ӱ� ������(����)
typedef int* myintptr_t; // int*�� myintptr_t�� ���Ӱ� ������(����); typedef�� �ڷ������� ����ϱ� ���� _t ���
typedef long wide; // long�� wide�� ������(����)

void main()
{
	// ar�� �ǹ�: �迭��, �迭�� ������(int�� ������ ����); �迭 0�� ������ ���� �ּ�
	//int ar[5] = { 1, 2, 3, 4, 5 };
	int ar[] = { 1, 2, 3, 4, 5 };
	printf("ar�� �ּ� = %p\n", ar);
	//int* p = ar;
	intptr p = ar;
	printf("%d = %d\n", *p, ar[0]);
	printf("%d = %d\n", *(p + 1), ar[1]);
	printf("%d = %d\n", *(p + 2), ar[2]);

	wide a = 100;
	printf("a = %d\n", a);
}