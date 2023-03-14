#include <stdio.h>
#include "LibConsole.h"

void main()
{
	//int i = 20;
	// 관계 연산자: == (같음), != (다름), <, >, <=, >=
	// 관계 연산자는 관계가 맞으면 true, 틀리면 false
	/*if (i > 1) // if (판단식, 관계식): 판단식 = true(코드 블록 실행) or false(코드 블록 미실행; 대신 else의 코드 블록 실행)
	{ // if 코드 블록
		puts("i > 1");
	}
	else // 이전 if가 false인 경우에 실행
	{ // else 코드 블록
		puts("i <= 1");
	}*/

	printf("정수 입력:");
	int i = getint();
	printf("입력 받은 i = %d\n", i);
	// 1번 우선 순위(판단식 계산)
	if (i < 1) // 실행 조건: i < 1; 미실행 조건(그 다음 else로 넘어감): i >= 1
	{
		puts("i < 1");
	}
	// 2번 우선 순위(판단식 계산)
	else if (i < 5) // 실행 조건: i < 5(추가로 i >= 1 만족); 미실행 조건(그 다음 else로 넘어감): i >= 5
	{
		puts("1 <= i < 5");
	}
	// 3번 우선 순위(판단식 계산)
	else if (i < 10) // 실행 조건: i < 10(추가로 i >= 1 && i >= 5를 만족); 미실행 조건(그 다음 else로 넘어감): i >= 10
	{
		puts("5 <= i < 10");
	}
	// 마지막 우선 순위(판단식 계산 X)
	else // 실행 조건: i >= 10
	{
		puts("i >= 10");
	}
}