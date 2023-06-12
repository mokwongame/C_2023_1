#pragma once // ��� ������ �� ���� include
// pragma: pragmatic(���������� �����Ǵ�); �����Ϸ����� ���� ������ ����

#include <stdio.h>
#include <string.h> // strlen() ���
#include <stdlib.h> // abs() ���
#include <time.h>	// clock() ���
#include "LibGameTool.h"

#define STR_MAX	(500)	// ���ڿ��� ���� ������ �ִ밪

// �Լ� ����
void initGame();
int printRandStr();
void inputStr();
int calcScore(int nRand);
void printTypeSpeed(int score, double typeTime);