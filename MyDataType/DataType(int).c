#include <stdio.h>
#include <limits.h>

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
	puts("======"); // puts: put string; ���ڿ� �ϳ� ��� + Enter�� ���; ������ �������� ����
	// �ڷ������� ǥ���� �� �ִ� �ּҰ��� �ִ밪�� limits.h
	printf("���� �ּ�: %d ~ �ִ�: %d", INT_MIN, INT_MAX);

	// ª�� ����
	puts("====");
	puts("ª�� ����");
	short i1 = 10; // short int
	printf("%d, ", i1);
	printf("���� ���� ũ�� = %d, ", (int)sizeof(i1));
	printf("short ���� �ּ�: %d ~ �ִ�: %d", SHRT_MIN, SHRT_MAX);

	// �� ����
	puts("====");
	puts("�� ����");
	long i2 = 10; // long int
	printf("%d, ", i2);
	printf("���� ���� ũ�� = %d, ", (int)sizeof(i2));
	printf("long ���� �ּ�: %d ~ �ִ�: %d", LONG_MIN, LONG_MAX);

	// �� �� ����
	puts("====");
	puts("�� �� ����");
	long long i3 = 10; // long long int
	printf("%lld, ", i3); // %lld: long long decimal
	printf("���� ���� ũ�� = %lld, ", sizeof(i3));
	printf("long long ���� �ּ�: %lld ~ �ִ�: %lld", LLONG_MIN, LLONG_MAX);
}