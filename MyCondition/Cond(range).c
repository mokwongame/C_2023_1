#include <stdio.h>
#include "LibConsole.h"

void main()
{
	puts("자리수를 판단할 정수를 입력하세요.");
	printf("i: ");
	int i = getint();

	//if (i <= 9)
	//	printf("%d는 일의 자리 숫자 가짐\n", i);
	//else if (i <= 99) // 10부터 처리
	//	printf("%d는 십의 자리 숫자 가짐\n", i);
	//else if (i <= 999) // 100부터 처리
	//	printf("%d는 백의 자리 숫자 가짐\n", i);

	if (i < 10)
		printf("%d는 일의 자리 숫자 가짐\n", i);
	else if (i < 100) // 10부터 처리
		printf("%d는 십의 자리 숫자 가짐\n", i);
	else if (i < 1000) // 100부터 처리
		printf("%d는 백의 자리 숫자 가짐\n", i);
}