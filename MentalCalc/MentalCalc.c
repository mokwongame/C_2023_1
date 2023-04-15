#include <stdio.h>
#include <time.h>
#include "LibConsole.h"
#include "LibGameTool.h"

//#define OP_ADD (0)
enum OpType
{
	OP_ADD, OP_SUB, OP_MUL, OP_DIV, OP_REM
}; // 숫자 할당 생략: 맨 처음 상수는 0, 그다음부터는 1씩 증가

void printProblem(int a, int b, int op)
{
	switch (op) // switch 구문 사용 이유: op이 특정 연산자와 같은지 비교(등호 비교)
	{
	case OP_ADD: printf("%d + %d = ?", a, b); break;
	case OP_SUB: printf("%d - %d = ?", a, b); break;
	case OP_MUL: printf("%d * %d = ?", a, b); break;
	case OP_DIV: printf("%d / %d = ?", a, b); break; // 몫
	case OP_REM: printf("%d %% %d = ?", a, b); break; // 나머지
	}
}

// 입력: 자연수 a, b; 연산자 op
// 출력: 문제의 답
int calcProblem(int a, int b, int op)
{
	int ans = 0;
	switch (op) // switch 구문 사용 이유: op이 특정 연산자와 같은지 비교(등호 비교)
	{
	case OP_ADD: ans = a + b; break;
	case OP_SUB: ans = a - b; break;
	case OP_MUL: ans = a * b; break;
	case OP_DIV: ans = a / b; break;
	case OP_REM: ans = a % b; break;
	}
	return ans;
}

void main()
{
	randseed();
	int N = 10;
	int opMax = OP_REM; // 0부터 시작해서 opMax까지 난수 발생
	int score = 0; // 암산 게임의 점수

	while (1)
	{
		int a = randrange(1, N + 1); // 1, 2, ..., N
		int b = randrange(1, N + 1); // 1, 2, ..., N
		int op = randrange(0, opMax + 1);

		printf("문제: ");
		printProblem(a, b, op);
		int ans = calcProblem(a, b, op);
		printf("\n답은? ");
		clock_t calctime = clock(); // 단위: msec
		int playAns = getint();
		calctime = clock() - calctime; // 경과 시간: 현재 시간 - 시작 시간
		if (ans == playAns)
		{
			score++;
			puts("정답입니다.");
		}
		else
		{
			score--;
			puts("틀렸네요~~");
		}
		printf("계산 시간은 %g 초입니다.\n", calctime / (double)1000);
		printf("현재 점수는 %d입니다.\n\n", score);

		printf("끝내려면 x를 입력하세요. ");
		char yesno = _getche();
		if (yesno == 'x') break;
		else puts("\n");
	}
}