#include "TypeGameFun.h"

void main()
{
	initGame();
	while (1)
	{
		int nRand = printRandStr();
		clock_t startTime = clock(); // �ð� ����: ���α׷� ������ �� 0���� �ð��� ����; ���е� msec
		inputStr();
		clock_t stopTime = clock();
		double typeTime = (stopTime - startTime) * 0.001; // �� ������ ����� �ð�
		int score = calcScore(nRand);
		printTypeSpeed(score, typeTime);
	}
}