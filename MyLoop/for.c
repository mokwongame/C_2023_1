#include <stdio.h>

void main()
{
	int nMax = 100;
	int ans = 0;
	for (int i = 1; i <= nMax; i++) // for (초기값; 판단식; 증감)
		ans += i; // 구문이 하나일 때는 {} 생략 가능
	printf("ans = %d\n", ans);
	int mathAns = nMax * (nMax + 1) / 2;
	printf("math ans = %d\n", mathAns);
}