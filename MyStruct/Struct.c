#include <stdio.h>

// �⺻ �ڷ���: char, int, float, double
struct _calcdata // ���� ����
{
	int x, y;	// ������ 2���� ��
	char op; // ������: +-*/%
};

// �� ����(typedef)
typedef struct _calcdata calcdata; // struct _calcdata�� ����, ������ calcdata�� ����

void main()
{
	int x, y;	// ������ 2���� ��
	char op; // ������: +-*/%
	struct _calcdata mydata = {1, 2, '*'}; // ����ü ����: struct struct�� ������
	calcdata mydata2;	// ���ο� �ڷ���ó�� calcdata�� ���
	mydata2.x = 10; // . ������: struct�� ����� ����
	mydata2.y = -20;
	mydata2.op = '+';
	printf("mydata�� ���: x = %d, y = %d, op = %c\n", mydata.x, mydata.y, mydata.op);
	printf("mydata2�� ���: x = %d, y = %d, op = %c\n", mydata2.x, mydata2.y, mydata2.op);

	// ������ ����
	calcdata* ptr;
	ptr = &mydata2;
	x = (*ptr).x;
	y = ptr->y; // -> ������: ������->��������� ����� ����
	printf("mydata2�� x = %d\n", x);
	printf("mydata2�� y = %d\n", y);

	// ����ü�� �Ҵ�
	calcdata mydata3 = mydata2;
	printf("mydata3�� ���: x = %d, y = %d, op = %c\n", mydata3.x, mydata3.y, mydata3.op);

	// ��ü ����: struct(����) -> class(����, �Լ�)
}