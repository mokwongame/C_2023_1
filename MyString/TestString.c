#include <stdio.h>
#include <string.h> // string�� �ٷ�� �Լ��� ���� ��� ����

void printString(char str[]) // []�ȿ� ���ڸ� ������ �ȵ�
{
	// ���ڿ� -> ���� �迭 -> �� ���ڸ� ���
	// strlen(): string length(���ڿ� ����)
	int strsize = (int)strlen(str); // _t: �ڷ���(type)�� ���Ӱ� ����
	printf("���ڿ� ���� = %d\n", strsize);
	for (int i = 0; i < strsize; i++) // 0, 1, 2, ..., 6(7-1)
	{
		char ch = str[i];
		putchar(ch);
		//printf("%c", ch);
	}
}

void main()
{
	char str[10] = "Game SW"; // ���� 7�� + �������� ���ڿ��� ���� ���´� ���ڸ� �߰� \0 = �� 7+1 = 8��
	//puts("Game SW");
	puts(str);
	printf("%s\n", str);
	printString(str);
}