#include "TypeGameFun.h"

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