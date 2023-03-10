#include <stdio.h>
#include <float.h>

void main()
{
	float x; // �Ǽ�(������ ��ȣ): real number, floating-point number(�ε�(���� ����) �Ҽ��� �Ǽ�: 1.234, 12.34, 0.1234)
	double y = 1.2345; // �Ǽ�(�̹� ���е�: float�� 2�� ���е�); ������ int�� ���� ��; �Ǽ��� double�� ���� ��
	long double z;

	puts("float");
	//printf("size: %d", (int)sizeof(x)); // ������
	printf("size: %d", (int)sizeof(float)); // �ڷ���
	puts("===");
	printf("min: %f ~ max: %f", FLT_MIN, FLT_MAX); // %f: fixed-point(���� �Ҽ���): �Ҽ� ǥ����
	puts("===");
	printf("min: %e ~ max: %e", FLT_MIN, FLT_MAX); // %e: exponent(����): ���� ǥ����
	// FLT_MIN���� ������: ����÷ο�(underflow): over�� �ݴ븻 under
	// FLT_MAX�� �Ѵ� ��: �����÷ο�(overflow)
	puts("===");
	printf("min: %g ~ max: %g", FLT_MIN, FLT_MAX); // %g: %f�� %e�߿��� ���� ���� ���·� ���
	puts("===");

	puts("double"); // double float
	printf("size: %d", (int)sizeof(y));
	puts("===");
	printf("min: %f ~ max: %f", DBL_MIN, DBL_MAX); // %f: fixed-point(���� �Ҽ���): �Ҽ� ǥ����
	puts("===");
	printf("min: %e ~ max: %e", DBL_MIN, DBL_MAX); // %e: exponent(����): ���� ǥ����
	// FLT_MIN���� ������: ����÷ο�(underflow): over�� �ݴ븻 under
	// FLT_MAX�� �Ѵ� ��: �����÷ο�(overflow)
	puts("===");
	printf("min: %g ~ max: %g", DBL_MIN, DBL_MAX); // %g: %f�� %e�߿��� ���� ���� ���·� ���

	puts("long double"); // long double float
	printf("size: %d", (int)sizeof(z));
	puts("===");
	printf("min: %f ~ max: %f", LDBL_MIN, LDBL_MAX); // %f: fixed-point(���� �Ҽ���): �Ҽ� ǥ����
	puts("===");
	printf("min: %e ~ max: %e", LDBL_MIN, LDBL_MAX); // %e: exponent(����): ���� ǥ����
	// FLT_MIN���� ������: ����÷ο�(underflow): over�� �ݴ븻 under
	// FLT_MAX�� �Ѵ� ��: �����÷ο�(overflow)
	puts("===");
	printf("min: %g ~ max: %g", LDBL_MIN, LDBL_MAX); // %g: %f�� %e�߿��� ���� ���� ���·� ���
}