#include <stdio.h>
#include <string.h> // strlen() 사용
#include <stdlib.h> // abs() 사용
#include <time.h>	// clock() 사용
#include "LibGameTool.h"

#define STR_MAX	(500)	// 문자열의 문자 개수의 최대값

// 전역 변수 선언: 함수 정의 바깥에 선언한 변수; 누구나 접근 가능
char quotes[][STR_MAX] = { "I'm not here to be perfect, I'm here to be real.",
"I'm not interested in money. I just want to be wonderful.",
"The only thing that feels better than winning is winning when nobody thought you could.",
"Success is not final, failure is not fatal: It is the courage to continue that counts.",
	"If you can dream it, you can do it." };
int nQuote;
int totalScore; // 전체 득점
char strIn[STR_MAX]; // char의 배열 = 문자열; 문자열 입력을 받기 위해 메모리 공간을 STR_MAX만큼 확보

// 함수 선언
void initGame();
int printRandStr();
void inputStr();
int calcScore(int nRand);
void printTypeSpeed(int score, double typeTime);

void main()
{
	initGame();
	while (1)
	{
		int nRand = printRandStr();
		clock_t startTime = clock(); // 시간 측정: 프로그램 시작할 때 0으로 시간을 시작; 정밀도 msec
		inputStr();
		clock_t stopTime = clock();
		double typeTime = (stopTime - startTime) * 0.001; // 초 단위로 계산한 시간
		int score = calcScore(nRand);
		printTypeSpeed(score, typeTime);
	}
}

// 함수 정의
void initGame()
{
	randseed();
	nQuote = (int)(sizeof(quotes) / STR_MAX);
	totalScore = 0;
}

// 입력 X, 출력은 int
int printRandStr()
{
	int nRand = randrange(0, nQuote); // 0, 1, 2, ..., nQuote-1 범위의 난수 발생
	puts(quotes[nRand]);
	return nRand;
}

void inputStr()
{
	puts("\n\n문자열을 입력하세요:");
	gets_s(strIn, STR_MAX - 1); // _s: safe(안전한); gets_s: safe gets; 문자열의 끝에는 0 문자가 들어가야 함; '0'가 아닌 숫자 0
}

int calcScore(int nRand)
{
	int nRandLen = (int)strlen(quotes[nRand]); // 난수 문자열의 길이
	int nInputLen = (int)strlen(strIn); // 입력 문자열의 길이
	int nMinLen = (nRandLen < nInputLen) ? nRandLen : nInputLen; // 최소 문자열을 선택: ( ) ? :
	//printf("\n문자열: %d, %d\n", nRandLen, nInputLen);
	int score = 0;
	for (int i = 0; i < nMinLen; i++)
	{
		if (quotes[nRand][i] == strIn[i]) score++;
		else score--;
	}
	totalScore += score; // totalScore = totalScore + score
	printf("득점: %d\n", score);
	printf("전체 득점: %d\n", totalScore);
	return score;
	//return score - abs(nRandLen - nInputLen);
}

void printTypeSpeed(int score, double typeTime)
{
	double typeSpeed = score / typeTime * 60.; // 분당 타수
	printf("분당 타수: %g\n\n", typeSpeed);
}
