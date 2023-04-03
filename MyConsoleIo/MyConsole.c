#include <stdio.h> // <파일명>: Visual Studio 관리 폴더에 있는 헤더 파일
#include "LibConsole.h" // "파일명": 현재 폴더에 있는 헤더 파일

void main()
{
	puts("목원대 게임SW");
	settextcol(DARK_SKYBLUE); // 글자색 변경; 색깔 상수는 LibConsole.h에 열거형 상수(enum)로 정의
	puts("목원대 게임SW");
	setbackcol(YELLOW); // 배경(background)색 변경; 색깔 상수는 LibConsole.h에 열거형 상수(enum)로 정의
	puts("목원대 게임SW");

	clrscr(); // clear screen(화면 지우기)
	gotoxy(10, 1); // 커서를 좌표 (10, 1)로 이동
	settextcol(VIOLET);
	puts("목원대 게임SW");
	setbackcol(WHITE);
	puts("목원대 게임SW");
}