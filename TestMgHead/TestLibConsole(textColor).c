#include "../MgHead/LibConsole.h"

void main()
{
	// ���ڻ��̳� ������ �ٲپ� ���
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

	// (x, y) ��ġ�� �ִ� ������ �����̳� ���ڻ��� �ٲ�
	writebackcol(0, 0, YELLOW);
	writetextcol(2, 0, GREEN); // �ѱ��� 2ĭ �����ؼ� 2��ŭ �̵�
	writebacktextcol(4, 0, WHITE, DAKR_YELLOW);

	// Ŀ�� ���߱� �� ���̱�
	puts("Ŀ�� ���߱�");
	hidecursor();
	puts("3�� ��ٸ���");
	sleepcon(3);
	puts("Ŀ�� ���̱�");
	showcursor();
	puts("1.5�� ��ٸ���");
	sleepcon(1.5);
}