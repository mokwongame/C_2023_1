#include <stdio.h>
#include "LibConsole.h"

void main()
{
	printf("정수 입력:");
	int n = getint(); // 정수 입력 받기
	printf("n = %d\n", n); // printf 사용해서 정수 출력
	printf("n = ");
	putint(n); // putint 사용해서 정수 출력

	printf("\n실수 입력:");
	double x = getdbl(); // 실수(double) 입력 받기
	printf("x = %g\n", x);
	printf("x = ");
	putdbl(x);
}