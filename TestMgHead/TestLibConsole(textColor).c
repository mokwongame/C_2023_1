#include "../MgHead/LibConsole.h"

void main()
{
	// 글자색이나 배경색을 바꾸어 출력
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

	// (x, y) 위치에 있는 글자의 배경색이나 글자색을 바꿈
	writebackcol(0, 0, YELLOW);
	writetextcol(2, 0, GREEN); // 한글은 2칸 차지해서 2만큼 이동
	writebacktextcol(4, 0, WHITE, DAKR_YELLOW);

	// 커서 감추기 및 보이기
	puts("커서 감추기");
	hidecursor();
	puts("3초 기다리기");
	sleepcon(3);
	puts("커서 보이기");
	showcursor();
	puts("1.5초 기다리기");
	sleepcon(1.5);
}