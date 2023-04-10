#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// 등호 판단식을 가진 조건문: 주로 if 대신 switch 사용
	// Cond(elseif).c의 코드와 비교
	puts("3의 나머지를 판단할 정수를 입력하세요.");
	printf("i: ");
	int i = getint(); // 할당(=)
	int rem = i % 3; // 나머지: 0, 1, 2까지 나옴
	switch (rem) // switch (등호용 판단 결과)
	{
	case 0: printf("i의 나머지는 0\n"); break; // case 값: 코드 블록; break;
	case 1: printf("i의 나머지는 1\n"); break;
		//case 2: printf("i의 나머지는 2\n"); break;
	default: printf("i의 나머지는 2\n"); // 나머지 경우 전체
	}
}