#include <stdio.h>
#include <stdbool.h> // bool �ڷ��� ����ϱ� ���� include

void main()
{
	// ������ Boole�� ���� �ڷ��� bool�� ����
	// �� ���꿡 ����: int�� �ᵵ ����
	bool b = true;
	bool c = false;

	puts("int");
	printf("size: %d", (int)sizeof(b));
	puts("===");
	printf("%d, %d", b, c);
}