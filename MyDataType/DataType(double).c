#include <stdio.h>
#include <float.h> // �Ǽ� Ư���� ���� ��� ����

void main()
{
	// ���� �о߿��� ���� Ȱ��
	// �Ǽ�: float(floating-point real number); �ε�(���� �̵�) �Ҽ��� �Ǽ�
	float x; // int�� ���� ũ��
	printf("float ���� ũ��: %lld, ", sizeof(x)); // sizeof(float)
	printf("float �ּ�(0�� ����� ��): %g, �ִ�: %g", FLT_MIN, FLT_MAX);
	puts("");
	// C ����� �⺻ �ڷ���: char(����), int(����), double(�Ǽ�)
	// ���� ���е� �Ǽ�: double float
	double y = 1230000000.23344;
	puts("double float");
	// %f: fixed-point(���� �Ҽ���), %e: exponential, %g: %f Ȥ�� %e �߿��� ���� ���� ������� ���
	printf("������: %f, ����: %e, ���� ���� ���: %g", y, y, y);
	puts("");
	printf("double ���� ũ��: %lld, ", sizeof(y)); // sizeof(double)
	printf("double �ּ�(0�� ����� ��): %g, �ִ�: %g", DBL_MIN, DBL_MAX);

	// �� �Ǽ�
	long double z = 1.56;
	printf("������: %f, ����: %e, ���� ���� ���: %g", z, z, z);
	puts("");
	printf("long double ���� ũ��: %lld, ", sizeof(z)); // sizeof(long double)
	printf("long double �ּ�(0�� ����� ��): %g, �ִ�: %g", LDBL_MIN, LDBL_MAX);

}