#include <stdio.h>
#include <limits.h>
#include <float.h>

void main()
{
	// char ���
	puts("1. char �ڷ���"); // �ڷ��� �̸� ���
	printf("- ����Ʈ ũ�� = %zd B\n", sizeof(char));// �ڷ����� ����Ʈ ũ��
	printf("- ǥ�� �ּҰ� = 0\n"); // �ڷ� ǥ���� �ּҰ�; ������ 0�� �ּҰ�; �ѱ� ���� ǥ������ ���� ���: SCHAR_MIN
	printf("- ǥ�� �ִ밪 = %d\n", SCHAR_MAX); // �ڷ� ǥ���� �ִ밪
	char ch = 'M';
	printf("- ���� ���� �� �ʱ�ȭ: %c\n", ch);

	// short ���
	puts("\n2. short �ڷ���"); // �ڷ��� �̸� ���
	printf("- ����Ʈ ũ�� = %zd B\n", sizeof(short));// �ڷ����� ����Ʈ ũ��
	printf("- ǥ�� �ּҰ� = %d\n", SHRT_MIN); // �ڷ� ǥ���� �ּҰ�
	printf("- ǥ�� �ִ밪 = %d\n", SHRT_MAX); // �ڷ� ǥ���� �ִ밪
	short i = 23;
	printf("- ���� ���� �� �ʱ�ȭ: %d\n", i);

}