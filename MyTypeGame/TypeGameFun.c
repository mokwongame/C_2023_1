#include "TypeGameFun.h"

// ���� ���� ����: �Լ� ���� �ٱ��� ������ ����; ������ ���� ����
char quotes[][STR_MAX] = { "I'm not here to be perfect, I'm here to be real.",
"I'm not interested in money. I just want to be wonderful.",
"The only thing that feels better than winning is winning when nobody thought you could.",
"Success is not final, failure is not fatal: It is the courage to continue that counts.",
	"If you can dream it, you can do it." };
int nQuote;
int totalScore; // ��ü ����
char strIn[STR_MAX]; // char�� �迭 = ���ڿ�; ���ڿ� �Է��� �ޱ� ���� �޸� ������ STR_MAX��ŭ Ȯ��

// �Լ� ����
void initGame()
{
	randseed();
	nQuote = (int)(sizeof(quotes) / STR_MAX);
	totalScore = 0;
}

// �Է� X, ����� int
int printRandStr()
{
	int nRand = randrange(0, nQuote); // 0, 1, 2, ..., nQuote-1 ������ ���� �߻�
	puts(quotes[nRand]);
	return nRand;
}

void inputStr()
{
	puts("\n\n���ڿ��� �Է��ϼ���:");
	gets_s(strIn, STR_MAX - 1); // _s: safe(������); gets_s: safe gets; ���ڿ��� ������ 0 ���ڰ� ���� ��; '0'�� �ƴ� ���� 0
}

int calcScore(int nRand)
{
	int nRandLen = (int)strlen(quotes[nRand]); // ���� ���ڿ��� ����
	int nInputLen = (int)strlen(strIn); // �Է� ���ڿ��� ����
	int nMinLen = (nRandLen < nInputLen) ? nRandLen : nInputLen; // �ּ� ���ڿ��� ����: ( ) ? :
	//printf("\n���ڿ�: %d, %d\n", nRandLen, nInputLen);
	int score = 0;
	for (int i = 0; i < nMinLen; i++)
	{
		if (quotes[nRand][i] == strIn[i]) score++;
		else score--;
	}
	totalScore += score; // totalScore = totalScore + score
	printf("����: %d\n", score);
	printf("��ü ����: %d\n", totalScore);
	return score;
	//return score - abs(nRandLen - nInputLen);
}

void printTypeSpeed(int score, double typeTime)
{
	double typeSpeed = score / typeTime * 60.; // �д� Ÿ��
	printf("�д� Ÿ��: %g\n\n", typeSpeed);
}