#include "../MgHead/LibConsole.h"

void main()
{
	puts("����� ����SW���а�");
	settextcol(RED);
	printf("����� ����SW���а�\n");
	settextcol(DARK_GREEN);
	puts("����� ����SW���а�");
	setbackcol(BLUE);
	printf("����� ����SW���а�\n");
	setbackcol(VIOLET);
	puts("����� ����SW���а�");
	setbacktextcol(SKYBLUE, DARK_RED);
	printf("����� ����SW���а�\n");
	setbacktextcol(BLACK, GRAY);

	// �ܼ��� ���ڻ��̳� ������ �ٲپ� ���
	sleepcon(2);
	setconcol(BLACK, RED);
	sleepcon(2);
	setconcol(GRAY, RED);
	sleepcon(2);

	// �ܼ� ��ü �����
	clrscr();
}