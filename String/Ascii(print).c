#include <stdio.h>
#include <ctype.h> // character type

void main()
{
	for (char c = 0; c < 127; c++)
	{
		if (isgraph(c)) // ȭ�鿡 ����� �Ǵ� �����ΰ�?
			printf("ASCII = %d, ���� = %c\n", c, c);
		else
			printf("ASCII = %d, ���� ��� �Ұ���\n", c);
	}
}