#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// getint(): 정수를 키보드로부터 입력받는 함수; LibConsole.h를 include
	puts("3의 나머지를 판단할 정수를 입력하세요.");
	printf("i: ");
	int i = getint(); // 할당(=)
	int rem = i % 3; // 나머지: 0, 1, 2까지 나옴
	if (rem == 0)
		printf("i의 나머지는 0\n");
	else if (rem == 1)
		printf("i의 나머지는 1\n");
	//else if (rem == 2) // else if는 여러 개 사용 가능
	else // 그외 경우 전체
		printf("i의 나머지는 2\n");

	// 3의 배수 판단
	//if (rem == 0) // 같음 연산자(==)
	//	printf("i는 3의 배수\n");
	//else 	printf("i는 3의 배수가 아님\n");

	if (rem != 0) // 다름 연산자(!=)
		printf("i는 3의 배수가 아님\n");
	else 	printf("i는 3의 배수\n");
}