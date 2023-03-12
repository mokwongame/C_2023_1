#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// 프로그램: 명령어(코드) + 데이터
	int i;
	int j;
	int k;

	// 입력
	printf("i 입력:");
	i = getint();
	printf("j 입력:");
	j = getint();

	// 연산(operation): 이항 연산(binary operation)
	printf("i = %d, j = %d\n", i, j);
	// 연산자(operator)
	k = i + j;
	printf("add: %d\n", k);
	k = i - j;
	printf("sub: %d\n", k);
	k = i * j;
	printf("mul: %d\n", k);
	k = i / j; // 나눗셈: 몫
	printf("div: %d\n", k);
	k = i % j; // 나눗셈: 나머지
	printf("mod: %d\n", k);

	// 단항 연산(unary operation)
	int m = -k;
	m = +k;
	printf("m = %d\n", m);
	// 정수에만 있는 단항 연산자
	m++; // m을 하나 증가: m = m+1
	printf("m++ = %d\n", m);
	m--; // m을 하나 감소: m = m-1
	printf("m-- = %d\n", m);
	// 정수와 실수에 모두 있는 단항 연산자
	m += 4; // m = m+4
	printf("m += 4: %d\n", m);
	m -= 4; // m = m-4
	printf("m -= 4: %d\n", m);
	m *= 4; // m = m*4
	printf("m *= 4: %d\n", m);
	m /= 4; // m = m/4
	printf("m /= 4: %d\n", m);
	m %= 4; // m = m%4
	printf("m %%= 4: %d\n", m);
}