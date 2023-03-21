#include <stdio.h>
#include <ctype.h> // character type

void main()
{
	for (char c = 0; c < 127; c++)
	{
		if (isgraph(c)) // 화면에 출력이 되는 문자인가?
			printf("ASCII = %d, 문자 = %c\n", c, c);
		else
			printf("ASCII = %d, 문자 출력 불가능\n", c);
	}
}