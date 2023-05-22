#include <stdio.h>
#include "LibConsole.h"
#include "LibGameTool.h"

// calc ����ü
struct _calcdata
{
	int x, y;
	char op;
};
typedef struct _calcdata calcdata;

// �Լ� ���� => *.h
void startScene();
void finishScene();
void mainGame();
calcdata makeRandOp(int nRandMax);

void main()
{
	startScene();
	mainGame();
	finishScene();
}

// �Լ� ���� => *.c
// ���� ȭ�� ����
void startScene()
{
	settextcol(RED);
	puts("------------------------");
	puts("|  �ϻ� ���� Ver. 1.0  |");
	puts("------------------------");
	settextcol(GRAY);
}

void finishScene()
{
	settextcol(GREEN);
	puts("�ϻ� ������ �����մϴ�. �����մϴ�.");
	settextcol(GRAY);
}

// �������� �ϻ� ���� ����
void mainGame()
{
	randseed();
	while (1)
	{
		// �ڿ��� 2��, ������ 1��
		//int x = randrange(1, 11);
		//int y = randrange(1, 11);
		//char op = '+';
		calcdata data = makeRandOp(20); // �� 3���� �Լ��� ����
		printf("����: %d %c %d ?\n", data.x, data.op, data.y);
		puts("����?");
		int ans = getint();
	}
}

// ���� 2���� ���� 1���� �ʱ�ȭ: nRandMax�� �߻��� ������ �ִ밪
calcdata makeRandOp(int nRandMax)
{
	calcdata data;
	data.x = randrange(1, nRandMax+1); // 1, 2, 3, ..., nRandMax
	data.y = randrange(1, nRandMax+1);
	data.op = '+';
	return data;
}