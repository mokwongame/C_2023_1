#include <stdio.h>
#include <stdbool.h> // bool 자료형의 헤더 파일; 수학자 Boole을 따서 bool 사용
#include "LibConsole.h"
void main()
{
	// false: 0; true: 0이 아닌 숫자(예, 1)
	bool ans = true;
	//ans = false;
	//printf("ans = %d\n", ans);

	printf("X: ");
	bool X = getint();
	printf("Y: ");
	bool Y = getint();

	ans = X || Y; // 논리합(or)
	printf("X or Y = ");
	if (ans) printf("true\n");
	else printf("false\n");

	ans = X && Y; // 논리곱(and)
	printf("X and Y = ");
	if (ans) printf("true\n");
	else printf("false\n");

	ans = !X; // 부정(not)
	printf("not X = ");
	if (ans) printf("true\n");
	else printf("false\n");
}