#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// 숫자 더하기: 1부터 시작 nMax
	printf("1부터 더할 최대 정수: ");
	int nMax = getint();
	int ans = 0;
	//ans += 1; // 이항(항이 2개) 할당: ans = ans + 1;
	//ans += 2;
	//ans += 3;
	int i = 1;
	// i가 nMax보다 작거나 같으면(<=) 코드 블록 반복
	while (i <= nMax) // while (판단식) {코드 블록}
	{
		ans += i;
		i++; // i = i+1; i += 1; ++i;
	}
	printf("ans = %d\n", ans);
	int mathAns = nMax * (nMax + 1) / 2;
	printf("math ans = %d\n", mathAns);
}