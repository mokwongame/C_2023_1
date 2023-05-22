#include <stdio.h>
#include "LibConsole.h"
#include "LibGameTool.h"

// �Լ� ���� => *.h
void startScene();
void finishScene();
void mainGame();

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
	while (1)
	{
		// �ڿ��� 2��, ������ 1��
	}
}