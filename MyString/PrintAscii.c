#include <stdio.h>
#include <ctype.h> // char type�� ���� ��� ����

void printAscii(int nMax)
{
	for (int i = 0; i <= nMax; i++) // 0, 1, 2, ..., nMax
	{
		char ch = (char)i;
		// isgraph(): is graph? 
		if (isgraph(ch)) printf("��ȣ %d => ASCII: %c\n", i, ch);
		else printf("��ȣ %d => ��� �Ұ�\n", i);

		if (isalpha(ch)) // isalpha(): is alpha? ���ĺ� ���� �Լ�
		{
			printf("%c�� ���ĺ�\n", ch);
		}
	}
}

void main()
{
	printAscii(127);
}