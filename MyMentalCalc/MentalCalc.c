#include <stdio.h>
#include "LibConsole.h"
#include "LibGameTool.h"

// 함수 선언 => *.h
void startScene();
void finishScene();
void mainGame();

void main()
{
	startScene();
	mainGame();
	finishScene();
}

// 함수 정의 => *.c
// 시작 화면 정의
void startScene()
{
	settextcol(RED);
	puts("------------------------");
	puts("|  암산 게임 Ver. 1.0  |");
	puts("------------------------");
	settextcol(GRAY);
}

void finishScene()
{
	settextcol(GREEN);
	puts("암산 게임을 종료합니다. 감사합니다.");
	settextcol(GRAY);
}

// 본격적인 암산 게임 개발
void mainGame()
{
	while (1)
	{
		// 자연수 2개, 연산자 1개
	}
}