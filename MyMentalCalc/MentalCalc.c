#include <stdio.h>
#include <time.h> // 시간 함수에 대한 헤더 파일
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
int getComAns(calcdata data);

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

		// 경과 시간: 끝 시간 - 시작 시간
		clock_t startTime = clock(); // 시작 시간; clock(): 현재 시간(exe 실행한 시간)을 msec 단위로 측정
		int myAns = getint(); // 사용자 입력
		clock_t endTime = clock(); // 끝 시간
		double calcTime = (endTime - startTime)*1e-3; // 경과 시간: sec 단위; 1 msec = 0.001 sec = 1e-3 sec

		int comAns = getComAns(data);
		if (myAns == comAns)
			puts("답이 맞았습니다!");
		else puts("답이 틀렸네요 ㅠㅠ");
		printf("\n\n암산 시간: %g 초\n\n", calcTime);
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

int getComAns(calcdata data)
{
	int ans = 0;
	switch (data.op)
	{
	case '+': ans = data.x + data.y;
	}
	return ans;
}