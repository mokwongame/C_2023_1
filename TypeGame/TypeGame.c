#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "LibGameTool.h"

#define STR_MAX	(100)	// ���ڿ� �ϳ��� ����
#define STR_IN_MAX	(200)	// �Է� ���ڿ��� ����

// �Լ� ���� ����
void initGame();
int makeRandQuote(const char quotes[][STR_MAX], int nQuote); // const: quotes�� ���� �Ұ���
void inputStr(char strIn[]);
int calcScore(const char quote[], const char strIn[]);

// main �Լ�
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

	// ���� �ʱ�ȭ
	initGame();
	while (1)
	{
		puts("=====================");
		int nRand = makeRandQuote(quotes, nQuote); // nRand: ��ȯ�� ������

		// ����� �Է�
		puts("����� �Է��ϼ���.");
		clock_t nStartTime = clock(); // msec ������ ����
		inputStr(strIn);
		clock_t nTypeTime = clock() - nStartTime; // �Է��� �ٻ� �ð�
		double typeTime = nTypeTime * 1e-3; // ����: ��(sec)
		//puts(strIn);

		// ���� ���
		int nScore = calcScore(quotes[nRand], strIn);
		printf("\n���� ����: %d\n", nScore);
		printf("�Է� �ð�: %g ��\n\n", typeTime);
		double typeRate = (nScore <= 0) ? 0 : nScore / typeTime * 60.; // �д� Ÿ��: �и� �ʰ� �ƴ� ������ ����
		printf("�д� Ÿ��: %g\n", typeRate);
		nTotalScore += nScore;
		printf("�� ����: %d\n", nTotalScore);
	}
}

// �Լ� ����
void initGame()
{
	randseed();
}

int makeRandQuote(const char quotes[][STR_MAX], int nQuote)
{
	int nRand = randrange(0, nQuote); // 0, 1, 2, ..., nQuote-1���� ���� �߻�
	printf("���� ���\n");
	puts(quotes[nRand]); puts("");
	return nRand;
}

void inputStr(char strIn[])
{
	// ����� �Է�
	gets_s(strIn, STR_IN_MAX - 1);
}

int calcScore(const char quote[], const char strIn[])
{
	int nScore = 0;
	int nQuote = (int)strlen(quote);
	int nStrIn = (int)strlen(strIn);
	int nMinLen = (nQuote <= nStrIn) ? nQuote : nStrIn;

	// ���ڿ� ��
	for (int i = 0; i < nMinLen; i++)
	{
		if (quote[i] == strIn[i]) nScore++; // ����
		else nScore--; // ����
	}
	int nDiff = abs(nQuote - nStrIn); // ���밪 �Լ�: �׻� ���
	return nScore - nDiff;
}