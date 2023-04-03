#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "LibConsole.h"

void main()
{
	// char 출력
	settextcol(RED);
	puts("1. char 자료형"); // 자료형 이름 출력
	printf("- 바이트 크기 = %zd B\n", sizeof(char));// 자료형의 바이트 크기
	printf("- 표현 최소값 = 0\n"); // 자료 표현의 최소값; 원래는 0이 최소값; 한글 등을 표현위해 음수 허용: SCHAR_MIN
	printf("- 표현 최대값 = %d\n", SCHAR_MAX); // 자료 표현의 최대값
	char ch = 'M';
	printf("- 변수 선언 및 초기화: %c\n", ch);
	// char 연산
	//ch = ch + 1;
	ch++; //ch = ch + 1과 동일
	printf("- 변수 + 1: %c\n", ch);
	ch--; //ch = ch - 1과 동일
	printf("- 변수 - 1: %c\n", ch);

	// short 출력
	settextcol(BLUE);
	puts("\n2. short 자료형"); // 자료형 이름 출력
	printf("- 바이트 크기 = %zd B\n", sizeof(short));// 자료형의 바이트 크기
	printf("- 표현 최소값 = %d\n", SHRT_MIN); // 자료 표현의 최소값
	printf("- 표현 최대값 = %d\n", SHRT_MAX); // 자료 표현의 최대값
	short i = 23;
	printf("- 변수 선언 및 초기화: %d\n", i);
	short j = -50;
	short ans = i + j;
	printf("i+j = %d\n", ans);
	ans = i - j;
	printf("i-j = %d\n", ans);
	ans = i * j;
	printf("i*j = %d\n", ans);
	ans = i / j;
	printf("i/j = %d\n", ans);
	ans = i % j;
	printf("i%%j = %d\n", ans);

	// int 출력
	// long 출력
	// long long 출력
	// float 출력: % 연산자를 제외
	// double 출력: % 연산자를 제외
	// long double 출력: % 연산자를 제외
}