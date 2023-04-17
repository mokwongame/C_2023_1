#include <stdio.h>

void main()
{
	int nMax = 100;
	int ans = 0;
	int i = 1;

	// while과 차이: do while은 코드 블록이 한 번은 꼭 실행
	do // do {코드 블록} while (판단식);
	{
		ans += i;
		i++; // i = i+1; i += 1; ++i;
	} while (i <= nMax);
	printf("ans = %d\n", ans);
	int mathAns = nMax * (nMax + 1) / 2;
	printf("math ans = %d\n", mathAns);
}