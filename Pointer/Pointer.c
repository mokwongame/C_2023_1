#include <stdio.h>

// �Լ� ����: �Է��� ���� ���� ����; ����� �� �ϳ��� ����
int operate(int i, int j)
{
	return i + j;
}

// call by address (�ּҷ� ȣ��)
int operate2(int* addptr, int* mulptr, int i, int j)
{
	*addptr = i + j; // i+j ����� addptr �ּҿ� ������ ����(valueof)
	*mulptr = i * j;
	return 1; // true
}

// call by value (������ ȣ��)
int operate3(int add, int mul, int i, int j)
{
	// add, mul�� ���� ����
	add = i + j;
	mul = i * j;
	return 1; // true
}

void main()
{
	int i = 10; // ���� ����: �ڷ��� ������ = �ʱ�ȭ ��;
	// ������ ����
	int k = 20;
	int* j = &i; // &: �������� �ּ� ��������(addressof ������)
	// *: �ּ�(������)�� �����ؼ� �� ��������(valueof ������); ������(dereference) ������; ����(indirection) ������
	j = &k; // ������(�ּ�) = &������ (���� ����)
	printf("*j = %d\n", *j); // *������(�ּ�) = �� (������ ����)

	int add;
	int mul;
	add = mul = 0;
	operate2(&add, &mul, i, k);
	printf("add = %d, mul = %d\n", add, mul);

	add = mul = 0;
	operate3(add, mul, i, k);
	printf("add = %d, mul = %d\n", add, mul);
}