#include <stdio.h>
#include "LibConsole.h"

void main()
{
	printf("십진수  16진수  8진수   ASCII\n");
	printf("=============================\n");
	for (int i = 0; i <= 127; i++) // for (초기값; 판단식; 증감)
	{
		settextcol(RED);
		printf("%6d  ", i); // %6d: 6자리 공간을 차지하면서 십진 숫자 출력
		settextcol(GREEN);
		// %6x: 6자리 공간을 차지하면서 16진 숫자(소문자) 출력
		printf("%6X  ", i); // %6X: 6자리 공간을 차지하면서 16진 숫자(대문자) 출력
		settextcol(BLUE);
		printf("%5o   ", i); // %5o: 6자리 공간을 차지하면서 8진 숫자 출력
		settextcol(WHITE);
		switch (i)
		{
		case 0: puts("NULL"); break;
		case 1: puts("Start of Heading"); break;
		case 2: puts("Start of Text"); break;
		case 3: puts("End of Text"); break;
		case 4: puts("End of Tx"); break;
		default: printf("%c\n", i);
		}
		/*if (i == 0) puts("NULL");
		else printf("%c\n", i);*/
	}
	settextcol(GRAY);
}