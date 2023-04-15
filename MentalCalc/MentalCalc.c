#include <stdio.h>
#include <time.h>
#include "LibConsole.h"
#include "LibGameTool.h"

//#define OP_ADD (0)
enum OpType
{
	OP_ADD, OP_SUB, OP_MUL, OP_DIV, OP_REM
}; // ���� �Ҵ� ����: �� ó�� ����� 0, �״������ʹ� 1�� ����

void printProblem(int a, int b, int op)
{
	switch (op) // switch ���� ��� ����: op�� Ư�� �����ڿ� ������ ��(��ȣ ��)
	{
	case OP_ADD: printf("%d + %d = ?", a, b); break;
	case OP_SUB: printf("%d - %d = ?", a, b); break;
	case OP_MUL: printf("%d * %d = ?", a, b); break;
	case OP_DIV: printf("%d / %d = ?", a, b); break; // ��
	case OP_REM: printf("%d %% %d = ?", a, b); break; // ������
	}
}

// �Է�: �ڿ��� a, b; ������ op
// ���: ������ ��
int calcProblem(int a, int b, int op)
{
	int ans = 0;
	switch (op) // switch ���� ��� ����: op�� Ư�� �����ڿ� ������ ��(��ȣ ��)
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
	int opMax = OP_REM; // 0���� �����ؼ� opMax���� ���� �߻�
	int score = 0; // �ϻ� ������ ����

	while (1)
	{
		int a = randrange(1, N + 1); // 1, 2, ..., N
		int b = randrange(1, N + 1); // 1, 2, ..., N
		int op = randrange(0, opMax + 1);

		printf("����: ");
		printProblem(a, b, op);
		int ans = calcProblem(a, b, op);
		printf("\n����? ");
		clock_t calctime = clock(); // ����: msec
		int playAns = getint();
		calctime = clock() - calctime; // ��� �ð�: ���� �ð� - ���� �ð�
		if (ans == playAns)
		{
			score++;
			puts("�����Դϴ�.");
		}
		else
		{
			score--;
			puts("Ʋ�ȳ׿�~~");
		}
		printf("��� �ð��� %g ���Դϴ�.\n", calctime / (double)1000);
		printf("���� ������ %d�Դϴ�.\n\n", score);

		printf("�������� x�� �Է��ϼ���. ");
		char yesno = _getche();
		if (yesno == 'x') break;
		else puts("\n");
	}
}