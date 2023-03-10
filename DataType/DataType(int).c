#include <stdio.h>
#include <limits.h>

// �Լ� ����: �ڵ� ��� {} �����
void main()
{
	// ���� ���� ����: ���� ����� �غ�
	int i = 10; // ����(�Ϲ�) ����: 4 ����Ʈ = 4*8 ��Ʈ = 32 ��Ʈ
	short j; // ª�� ����: ���� ���� ����, 2 ����Ʈ
	long k; // �� ����: ���� ���� ŭ, 4 ����Ʈ
	long long l; // ���� �� ����: 8 ����Ʈ = 64 ��Ʈ

	puts("int");
	printf("size: %d", (int)sizeof(i));
	puts("===");
	printf("min: %d ~ max: %d", INT_MIN, INT_MAX); // ǥ�� ������ �Ѿ ���: �����÷�(overflow)
	puts("===");

	puts("short");
	printf("size: %d", (int)sizeof(j));
	puts("===");
	printf("min: %d ~ max: %d", SHRT_MIN, SHRT_MAX);
	puts("===");

	puts("long");
	printf("size: %d", (int)sizeof(k));
	puts("===");
	printf("min: %ld ~ max: %ld", LONG_MIN, LONG_MAX);
	puts("===");

	puts("long long");
	printf("size: %d", (int)sizeof(l));
	puts("===");
	printf("min: %lld ~ max: %lld", LLONG_MIN, LLONG_MAX);
	puts("===");

	// ����ȣ ���� unsigned
	unsigned int ui = 30;
	unsigned short uj;
	unsigned long uk;
	unsigned long long ul;

	puts("unsigned int");
	printf("size: %d", (int)sizeof(ui));
	puts("===");
	printf("min: 0 ~ max: %u", UINT_MAX);
	puts("===");
}