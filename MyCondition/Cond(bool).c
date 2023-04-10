#include <stdio.h>
#include <stdbool.h> // bool 자료형의 헤더 파일; 수학자 Boole을 따서 bool 사용
#include "LibConsole.h"
void main()
{
	// false: 0; true: 0이 아닌 숫자(예, 1)
	bool ans = false;
	//ans = false;
	//printf("ans = %d\n", ans);

	// ans == true => nAns = 1, ans == false => nAns = 0
	int nAns;
	//if (ans) nAns = 1;
	//else nAns = 0;
	// 삼항 조건 연산자
	nAns = (ans) ? 1 : 0; // (판단식) ? a : b => true면 a 선택, false면 b 선택
	printf("nAns = %d\n", nAns);

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