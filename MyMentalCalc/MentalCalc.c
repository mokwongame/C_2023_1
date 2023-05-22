#include <stdio.h>
#include "LibConsole.h"
#include "LibGameTool.h"

// calc 구조체
struct _calcdata
{
	int x, y;
	char op;
};
typedef struct _calcdata calcdata;

// 함수 선언 => *.h
void startScene();
void finishScene();
void mainGame();
calcdata makeRandOp(int nRandMax);

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
	randseed();
	while (1)
	{
		// 자연수 2개, 연산자 1개
		//int x = randrange(1, 11);
		//int y = randrange(1, 11);
		//char op = '+';
		calcdata data = makeRandOp(20); // 위 3줄을 함수로 정의
		printf("문제: %d %c %d ?\n", data.x, data.op, data.y);
		puts("답은?");
		int ans = getint();
	}
}

// 난수 2개와 연산 1개를 초기화: nRandMax는 발생할 난수의 최대값
calcdata makeRandOp(int nRandMax)
{
	calcdata data;
	data.x = randrange(1, nRandMax+1); // 1, 2, 3, ..., nRandMax
	data.y = randrange(1, nRandMax+1);
	data.op = '+';
	return data;
}