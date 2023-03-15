#include <stdio.h>
#include "LibConsole.h"

void main()
{
	printf("������  16����  8����   ASCII\n");
	printf("=============================\n");
	for (int i = 0; i <= 127; i++) // for (�ʱⰪ; �Ǵܽ�; ����)
	{
		settextcol(RED);
		printf("%6d  ", i); // %6d: 6�ڸ� ������ �����ϸ鼭 ���� ���� ���
		settextcol(GREEN);
		// %6x: 6�ڸ� ������ �����ϸ鼭 16�� ����(�ҹ���) ���
		printf("%6X  ", i); // %6X: 6�ڸ� ������ �����ϸ鼭 16�� ����(�빮��) ���
		settextcol(BLUE);
		printf("%5o   ", i); // %5o: 6�ڸ� ������ �����ϸ鼭 8�� ���� ���
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