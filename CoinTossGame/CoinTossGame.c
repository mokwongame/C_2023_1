#include <stdio.h>
#include <conio.h>
#include "LibConsole.h"
#include "LibGameTool.h"

enum CoinType
{
	CT_BACK = 0, CT_FRONT, CT_NULL
};

void showLogo();
enum CoinType inputCoinType();
enum CoinType randomCoinType();
void printResult(int score, double winRatio);

void main()
{
	int totalScore = 0;
	int gameCount = 0;
	double winRatio = 0.;

	randseed();
	showLogo();
	while (1)
	{
		gameCount++;
		enum CoinType nInput = inputCoinType();
		if (nInput == CT_NULL) continue;

		enum CoinType nRand = randomCoinType();

		if (nInput == nRand)
		{
			puts("맞추었습니다.");
			totalScore++;
		}
		else
		{
			puts("틀렸습니다.");
			totalScore--;
		}

		winRatio = totalScore / (double)gameCount * 100.;
		printResult(totalScore, winRatio);
	}
}

void showLogo()
{
	settextcol(GREEN);
	puts("=======================");
	puts("   My Coin Toss Game   ");
	puts("   Version 1.0");
	puts("=======================\n");
	settextcol(GRAY);
}

enum CoinType inputCoinType()
{
	puts("\n동전 앞면은 F, 동전 뒷면은 B를 입력");
	printf("당신의 선택은?");
	char ch = _getche(); // echo하면서 Enter없이 한 글자 입력
	if (ch == 'F' || ch == 'f') return CT_FRONT;
	else if (ch == 'B' || ch == 'b') return CT_BACK;
	else
	{
		puts("잘못 입력하셨습니다.");
		return CT_NULL;
	}
}

enum CoinType randomCoinType()
{
	puts("\n\n이제 동전을 던집니다.");
	int nRand = randrange(0, 2); // 0, 1
	if (nRand == 0) puts("동전은 뒷면입니다.\n");
	else puts("동전은 앞면입니다.\n");
	return (enum CoinType)nRand;
}

void printResult(int score, double winRatio)
{
	printf("\n현재 득점은 %d입니다.", score);
	printf("\n현재 승률은 %g입니다.\n", winRatio);
}
