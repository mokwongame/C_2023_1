#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "LibGameTool.h"

#define STR_MAX	(100)	// 문자열 하나의 길이
#define STR_IN_MAX	(200)	// 입력 문자열의 길이

// 함수 원형 선언
void initGame();
int makeRandQuote(const char quotes[][STR_MAX], int nQuote); // const: quotes를 변경 불가능
void inputStr(char strIn[]);
int calcScore(const char quote[], const char strIn[]);

// main 함수
void main()
{
	char quotes[][STR_MAX] =
	{
		"he greatest glory in living lies not in never falling,",
		"but in rising every time we fall.",
		"The way to get started is to quit talking and begin doing.",
		"Your time is limited,",
		"so don't waste it living someone else's life.Don't be trapped by dogma.",
		"which is living with the results of other people's thinking.",
		"If life were predictable it would cease to be life, and be without flavor.",
		"If you look at what you have in life, you'll always have more.",
		"If you look at what you don't have in life, you'll never have enough.",
		"If you set your goals ridiculously high and it's a failure,",
		"you will fail above everyone else's success.",
		"Life is what happens when you're busy making other plans.",
		"Spread love everywhere you go. Let no one ever come to you without leaving happier."
	};

	size_t nTotalSize = sizeof(quotes) / sizeof(char); // _t: typedef
	int nQuote = (int)(nTotalSize / STR_MAX);
	char strIn[STR_IN_MAX];
	int nTotalScore = 0;

	// 게임 초기화
	initGame();
	while (1)
	{
		puts("=====================");
		int nRand = makeRandQuote(quotes, nQuote); // nRand: 반환된 난수값

		// 사용자 입력
		puts("명언을 입력하세요.");
		clock_t nStartTime = clock(); // msec 단위로 측정
		inputStr(strIn);
		clock_t nTypeTime = clock() - nStartTime; // 입력한 근사 시간
		double typeTime = nTypeTime * 1e-3; // 단위: 초(sec)
		//puts(strIn);

		// 점수 계산
		int nScore = calcScore(quotes[nRand], strIn);
		printf("\n현재 득점: %d\n", nScore);
		printf("입력 시간: %g 초\n\n", typeTime);
		double typeRate = (nScore <= 0) ? 0 : nScore / typeTime * 60.; // 분당 타수: 분모를 초가 아닌 분으로 변경
		printf("분당 타수: %g\n", typeRate);
		nTotalScore += nScore;
		printf("총 득점: %d\n", nTotalScore);
	}
}

// 함수 정의
void initGame()
{
	randseed();
}

int makeRandQuote(const char quotes[][STR_MAX], int nQuote)
{
	int nRand = randrange(0, nQuote); // 0, 1, 2, ..., nQuote-1까지 난수 발생
	printf("예시 명언\n");
	puts(quotes[nRand]); puts("");
	return nRand;
}

void inputStr(char strIn[])
{
	// 사용자 입력
	gets_s(strIn, STR_IN_MAX - 1);
}

int calcScore(const char quote[], const char strIn[])
{
	int nScore = 0;
	int nQuote = (int)strlen(quote);
	int nStrIn = (int)strlen(strIn);
	int nMinLen = (nQuote <= nStrIn) ? nQuote : nStrIn;

	// 문자열 비교
	for (int i = 0; i < nMinLen; i++)
	{
		if (quote[i] == strIn[i]) nScore++; // 득점
		else nScore--; // 감점
	}
	int nDiff = abs(nQuote - nStrIn); // 절대값 함수: 항상 양수
	return nScore - nDiff;
}