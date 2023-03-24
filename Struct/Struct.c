#include <stdio.h>

// ����ü ����: struct ����ü�� {...}; �ڵ� ��Ͽ��� ���� ����
struct _mydata
{
	// ��� ����
	char c, d;
	int i, j;
	double x;
	//};
} g_mydata; // ����ü�� �����ϸ鼭 ����ü ������ ������� ����

typedef struct _mydata mydata; // mydata�� �ڷ���ó�� ����ϰ� ����� typedef

// ����ü �Է� ����: �Էµ� ����ü�� ��� ����� ���� ���� md�� ����(������ ȣ��: call by value)
void printMydata(mydata md)
{
	printf("c = %c\n", md.c);
	printf("i = %d\n", md.i);
	printf("x = %g\n", md.x);
}

// ������(�ּ�)�� ȣ��: call by pointer or address
void printMydataPtr(mydata* ptr) // �Է��� �����ͷ� ������ ����� ���� ��
{
	printf("c = %c\n", ptr->c);
	printf("i = %d\n", ptr->i);
	printf("x = %g\n", ptr->x);
}

void main()
{
	// ����ü ����
	mydata md1; // struct ����ü�� ������
	mydata md2 = { 'a', 'b', 10, 20, 5.79 };

	// ���� �����ڴ� .: ����ü��.���������
	md1.c = 'b';
	md2.c = md1.c;

	mydata md3 = md2; // ��� ����� �����ؼ� �Ҵ�
	printMydata(md2);

	// �迭ó�� �ʱ�ȭ ����: [] ������ �̿��ؼ� Ư�� ���Ҹ� �ʱ�ȭ
	mydata md4 = { .i = 50, .x = -45.67, .c = 'z' }; // . ������ �̿��ؼ� ������ ��� ������ �ʱ�ȭ

	mydata* md5 = &md4; // md5: ����ü�� �ּҸ� �����ϰ� �ִ� ������
	// ������ ���� ������ ->: ����ü�� �����ͷ� ��� �����ϴ� ������
	md5->c = 'm'; // md5 �ּҿ� ���� �� ���� ��� c�� �����ؼ� 'm'�� �Ҵ�
	printf("mydata ����Ʈ ũ��: %zd\n", sizeof(md4)); // sizeof(mydata)
	printf("mydata ����Ʈ ũ��: %zd\n", sizeof(mydata)); // sizeof(mydata)
	printf("mydata �������� ����Ʈ ũ��: %zd\n", sizeof(md5));
	printMydataPtr(md5);

	g_mydata.c = 'g';
	printMydataPtr(&g_mydata);
}