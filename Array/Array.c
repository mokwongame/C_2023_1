#include <stdio.h>

#define INT_ARRAY_SIZE	(10)
#define DBL_ARRAY_SIZE	(5)

//void printIntArray(int a[INT_ARRAY_SIZE]) // ��� �Լ���(�Է� ����) {...}
// �Լ� �Է� ������ ���� a[]�� ����; �迭 ũ��� ����ϰ� �־�� ��
void printIntArray(int a[]) // a[]�� �ǹ�: ���������� ó���� ���� a�� �ּ�(�޸� �ּ�, ������)�� ����(�迭���� 0�� �ּҷ� ����)
{
	printf("a[]�� ũ��: %zd\n\n", sizeof(a)); // �ּ�, ����Ʈ�� ���: 8 ����Ʈ = 8*8��Ʈ = 64��Ʈ
	for (int i = 0; i < INT_ARRAY_SIZE; i++) // for (�ʱ�ȭ; �Ǵܽ�; ����) {...}
		printf("[%d] = %d\n", i, a[i]);
}

// ���(const) ����(int) �迭([])�� ���
void printConstIntArray(const int a[]) // a[]�� �ǹ�: ũ�Ⱑ �������� �ʴ� �迭; ���������� ó���� ���� a�� �ּ�(�޸� �ּ�, ������)�� ����(�迭���� 0�� �ּҷ� ����)
{
	for (int i = 0; i < INT_ARRAY_SIZE; i++) // for (�ʱ�ȭ; �Ǵܽ�; ����) {...}
		printf("[%d] = %d\n", i, a[i]);
}

//void printDblArray(double x[DBL_ARRAY_SIZE])
void printDblArray(double x[])
{
	for (int i = 0; i < DBL_ARRAY_SIZE; i++) // for (�ʱ�ȭ; �Ǵܽ�; ����) {...}
		printf("[%d] = %g\n", i, x[i]);
}

void main()
{
	// int a�� ���; [10]�� �߰��ؼ� �迭�� ũ�⸦ ����; �迭�� ���� ������ int a0, a1, a2, ..., a9;
	int a[INT_ARRAY_SIZE]; //ũ�Ⱑ 10�� �迭(array)�� ����: �ڷ��� �迭��[ũ��]
	// ������ ��: 0, 1, 2, ..., 9���� ���: 9 = 10-1(ũ�� - 1)���� ������ ���� ��ġ(position)�� ����� �� ����
	a[0] = 10; // �迭 ���� �Ҵ�: 0�� ���ҿ� 10�� �Ҵ�
	a[1] = 20;
	a[2] = a[1]; // �迭 ���� �Ҵ�: a[1]�� ���� �����ͼ� a[2]�� �Ҵ�
	// ���ʰ�(l-value): �� ����(�迭 ����)�� ����; ���, ���ڴ� ���ʰ��� �� �� ����(���� ������ ������ �Ǳ� ����, ������ �迭�� ���� ���� ����)
	// �����ʰ�(r-value): �� ����(�迭 ����), ���, ���ڸ� �б�

	puts("\n �Ǽ� �迭\n");
	printIntArray(a); // �Լ� �Է� ����: �迭�� ���� �迭�� �̸��� �Ѱ���
	printf("�迭 ũ��(����Ʈ) = %d\n", (int)sizeof(a)); // sizeof(�迭��): �� �迭�� ���� ũ�⸦ ����Ʈ�� ���: ���� = 4����Ʈ * 10�� = 40����Ʈ
	printf("�迭 ũ��(����Ʈ) = %lld\n", sizeof(a)); // ll: long long
	printf("�迭 ũ��(����Ʈ) = %zd\n", sizeof(a)); // z: size
	int arraysize = (int)(sizeof(a) / sizeof(a[0])); // sizeof(a[0])) = sizeof(int): 4 ����Ʈ
	printf("�迭 ũ��(���� ����) = %d\n", arraysize);
	return;

	// �迭 �ʱ�ȭ = {...}; ���� ������ �� ���
	//double x[DBL_ARRAY_SIZE] = { 1., 2., 3., 4.1 }; // double�� �迭 �ʱ�ȭ; �ʱ�ȭ�� �� ���ڰ� �����ϸ� �������� 0���� �ʱ�ȭ
	double x[] = { 1., 2., 3., 4.1, 5.2 }; // x[] �ǹ�: ���� ������ �迭 ũ�⸦ ����
	//double x[DBL_ARRAY_SIZE] = { 0. };
	puts("\n �Ǽ� �迭\n");
	printDblArray(x);

	// �迭 �ʱ�ȭ = {...}: �迭�� ����, [1] = 10
	// �ʱ�ȭ�ϴ� ������ ���������� ��ġ, ÷��(index)�� ����
	const int b[INT_ARRAY_SIZE] = { -10, -20,[3] = 100 }; // �ʱ�ȭ���� �ʴ� ���Ҵ� 0���� �ʱ�ȭ
	puts("\n ���ο� �ʱ�ȭ\n");
	printConstIntArray(b);
}