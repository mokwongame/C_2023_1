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
			puts("���߾����ϴ�.");
			totalScore++;
		}
		else
		{
			puts("Ʋ�Ƚ��ϴ�.");
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
	puts("\n���� �ո��� F, ���� �޸��� B�� �Է�");
	printf("����� ������?");
	char ch = _getche(); // echo�ϸ鼭 Enter���� �� ���� �Է�
	if (ch == 'F' || ch == 'f') return CT_FRONT;
	else if (ch == 'B' || ch == 'b') return CT_BACK;
	else
	{
		puts("�߸� �Է��ϼ̽��ϴ�.");
		return CT_NULL;
	}
}

enum CoinType randomCoinType()
{
	puts("\n\n���� ������ �����ϴ�.");
	int nRand = randrange(0, 2); // 0, 1
	if (nRand == 0) puts("������ �޸��Դϴ�.\n");
	else puts("������ �ո��Դϴ�.\n");
	return (enum CoinType)nRand;
}

void printResult(int score, double winRatio)
{
	printf("\n���� ������ %d�Դϴ�.", score);
	printf("\n���� �·��� %g�Դϴ�.\n", winRatio);
}
