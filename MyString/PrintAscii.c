#include <stdio.h>
#include <ctype.h> // char type에 대한 헤더 파일

void printAscii(int nMax)
{
	for (int i = 0; i <= nMax; i++) // 0, 1, 2, ..., nMax
	{
		char ch = (char)i;
		// isgraph(): is graph? 
		if (isgraph(ch)) printf("번호 %d => ASCII: %c\n", i, ch);
		else printf("번호 %d => 출력 불가\n", i);

		if (isalpha(ch)) // isalpha(): is alpha? 알파벳 판정 함수
		{
			printf("%c는 알파벳\n", ch);
		}
	}
}

void main()
{
	printAscii(127);
}