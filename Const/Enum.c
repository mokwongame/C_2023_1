#include <stdio.h>

#define ZERO (0)
#define ONE (1)
#define TWO (2)

// ����(enumeration)�� ���: ���� ���� ����� �ϰ��ǰ� ����
//enum { E_ZERO = 0, E_ONE = 1, E_TWO = 2 };
//enum { E_ZERO = 0, E_ONE, E_TWO }; // �Ҵ�(=)�� ������, ���� ���� �ϳ��� ����
//enum { E_ZERO, E_ONE, E_TWO }; // �Ǿտ� ���ҿ� �Ҵ�(=)�� ������, ���� ���� 0���� ���
enum MY_NUM { E_ZERO, E_ONE, E_TWO }; // MY_NUM�� ������ �̸�(���Ÿ�)

void main()
{
	int i = ONE;
	int j = E_ONE;
	printf("%d = %d\n", i, j);

	int i2 = TWO;
	enum MY_NUM k = E_TWO; // �ڷ����� ���� ���忡�� Ȯ���ϴ� ���
	//int k = E_TWO;
	printf("%d = %d\n", i2, k);
	k = E_ONE;
	printf("%d = %d\n", i2, k);

	// �̽������� ����(escape sequence): �̽������� ����(\)�� Ư���� ����� ����
	puts("escape sequence");
	puts("This\t\tis a C"); // = printf("���ڿ�\n")
	printf("I am\\ \"Mokwon\".\n");
	printf("alarm\a\n");
	printf("carriage return\r"); // \r: home key

	char c = 'a';
	printf("a = %d    \n", (int)c);
	printf("a = %o    \n", (int)c); // 8����: octal(8��)
	printf("a = %x    \n", (int)c); // 16����: hexadecimal(16��: hexa=6,deci=10)
	printf("a = \141 \x61\n"); // \ooo \x_16����

	const unsigned int k2 = 30u; // ����� ����ȣ �⺻ ���� k�� 30���� �ʱ�ȭ
	printf("%u\n", k2);
	long double x = 1.234l;

	// ���ͷ�: 8����(0���� ����)�� 16����(0x�� ����)
	int m = 0141; // 8���� ���ͷ� ǥ��
	int m2 = 0x61; // 16���� ���ͷ� ǥ��
	printf("%d = %d\n", m, m2);
	char c2 = (char)m;
	printf("%c\n", c2);
}