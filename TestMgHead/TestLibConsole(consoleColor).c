#include "../MgHead/LibConsole.h"

void main()
{
	puts("목원대 게임SW공학과");
	settextcol(RED);
	printf("목원대 게임SW공학과\n");
	settextcol(DARK_GREEN);
	puts("목원대 게임SW공학과");
	setbackcol(BLUE);
	printf("목원대 게임SW공학과\n");
	setbackcol(VIOLET);
	puts("목원대 게임SW공학과");
	setbacktextcol(SKYBLUE, DARK_RED);
	printf("목원대 게임SW공학과\n");
	setbacktextcol(BLACK, GRAY);

	// 콘솔의 글자색이나 배경색을 바꾸어 출력
	sleepcon(2);
	setconcol(BLACK, RED);
	sleepcon(2);
	setconcol(GRAY, RED);
	sleepcon(2);

	// 콘솔 전체 지우기
	clrscr();
}