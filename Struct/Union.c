#include <stdio.h>

// ����ü: ���� �ٸ� ��� ������ ���� ������ ������ ����; �� �������� x�� ������, ���� �迭�� �� �� ����
// ����ü ����: �޸𸮸� �����ϱ� ������ ���� �ٸ� �ڷ����� ��Ʈ�� ���� ó���� ����
union intdbl
{
	double x; // 8 ����Ʈ
	int n[2]; // 4 ����Ʈ *2 = 8����Ʈ
};

void main()
{
	union intdbl id; // ����ü ����
	printf("����ü ũ��: %zd\n", sizeof(union intdbl));
	id.x = 1.234;
	printf("%d %d\n", id.n[0], id.n[1]);
	id.n[0] = 1;
	id.n[1] = 2;
	printf("%g\n", id.x); // NaN: not a number (�Ǽ� ǥ������ Ʋ��)
}