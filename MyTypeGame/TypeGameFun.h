#pragma once // 헤더 파일을 한 번만 include
// pragma: pragmatic(점진적으로 개선되는); 컴파일러에게 개선 사항을 제시

#include <stdio.h>
#include <string.h> // strlen() 사용
#include <stdlib.h> // abs() 사용
#include <time.h>	// clock() 사용
#include "LibGameTool.h"

#define STR_MAX	(500)	// 문자열의 문자 개수의 최대값

// 함수 선언
void initGame();
int printRandStr();
void inputStr();
int calcScore(int nRand);
void printTypeSpeed(int score, double typeTime);