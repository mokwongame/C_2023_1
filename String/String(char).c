#include <stdio.h>
#include <string.h>
#include <ctype.h> // character type

// printf("%s", s)
void printString(char s[]) // �迭�� ũ�⸦ ���� �ʿ� X; ���ڿ��� ���̴� strlen�� ���� �� ����
{
	for (int i = 0; i < strlen(s); i++) // 0, 1, 2, ... strlen(s)-1
		putchar(s[i]);
}

void printCharType(char s[])
{
	for (int i = 0; i < strlen(s); i++) // 0, 1, 2, ... strlen(s)-1
	{
		if (isalpha(s[i]))
		{
			//printf("s[%d] = %c: ���ĺ�\n", i, s[i]);
			if (islower(s[i])) // �ҹ���: lower case
				printf("s[%d] = %c: �ҹ���\n", i, s[i]);
			//else
			else if (isupper(s[i])) // �빮��: upper case, capital letter
				printf("s[%d] = %c: �빮��\n", i, s[i]);
		}
		else if (isdigit(s[i])) printf("s[%d] = %c: ����\n", i, s[i]);
		else if (ispunct(s[i])) printf("s[%d] = %c: ������\n", i, s[i]);
		else if (isspace(s[i])) printf("s[%d] = %c: ����\n", i, s[i]);
	}
}

void main()
{
	// ���ڿ�(string): char �ڷ����� ���ҷ� ������ �迭(array)
	char s[] = "sTr123.,'  \t\n	INg"; // ũ�Ⱑ 6(X), ũ��� 7(0); ���ڿ� ���������� ASCII 0��(\0)�� ��
	// ���ڿ��� ���� �������� 7 �̻��� �ʿ�
	printf("%s\n", s); // %s: ���� �԰��ڿ��� s�� string �ǹ�
	puts(s);
	// ���ڿ��� �ݵ�� ASCII 0������ ������ ��: �̰� �ȵǸ� ����� �� ���ڿ��� ���� �� �� ����
	// ���ڿ��� ���� ����ϱ� ���� \0 ���ڸ� ���

	printf("���ڿ� ����: %zd\n", strlen(s)); // string length: ���� ��꿡�� ������ 0���� ���� X

	// Ʋ�� ��
	//if (s == "string") // s�� ���ڿ��� �Ӹ���, ������
	// �´� ��
	if (strcmp(s, "string") == 0) // strcmp(string compare): �� ���ڿ��� ��(����); ��� ���� ��(b > a, c > d)
		printf("%s�� string�� ����\n", s);
	else
		printf("%s�� string�� �ٸ�\n", s);

	// ���ڿ� ���� ����
	putchar(s[0]);
	putchar(s[1]);
	puts("");
	printString(s);
	puts("");
	printCharType(s);
}