#include <stdio.h>
#include <limits.h>

#define MY_INT	(35) // #define �̸� ��ũ��: ��ũ�� ���� ���; ()�� ��Ȯ�� ǥ���ϱ� ���� �߰�; ()�� ��� ��

void main() // ���α׷��� ����� �� ���� ����Ǵ� �Լ�; �� �ϳ��� �����ؾ� ��
{
	// ���ͷ� ��� Ȥ�� ���ͷ�(literal): ���� ���
	puts("literal(���ͷ�)");
	char ch1_test = 'a';
	int i2 = -123;
	double x3 = 1.2345;

	printf("%c\n", ch1_test);
	printf("%d\n", i2);
	printf("%g\n", x3);

	short j = 1;
	long k = 3l;
	printf("%d\n", j);
	printf("%d\n", k);

	long long m = 1000LL; // 1 I l; l or L �ǹ�: long�� ��Ȯ�� ǥ��
	printf("%lld\n", m);

	float y = 1.2f; // f �ǹ�: float ����� ��Ȯ�� ǥ��
	printf("%e\n", y);
	double z = 1.567e+100; // e+100 �ǹ�: 10^100
	printf("%g\n", z);
	double z2 = 1.567e100; // e100 �ǹ�: 10^100
	printf("%g\n", z2);
	double z3 = 1.567e-200; // e-200 �ǹ�: 10^-200
	printf("%g\n", z3);

	// ��ȣ(symbolic) ���(constant) Ȥ�� ���(const)
	puts("constant(���)");
	const int a = 10; // ���: ���� �Ҵ� X; ����� ������ ���� �ʱ�ȭ ����
	printf("%d\n", a);
	//a = -20;
	int b = MY_INT; // �����Ϸ��� int b = (15);�� �ؼ�
	printf("%d\n", b);
}