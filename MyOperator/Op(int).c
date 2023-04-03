#include <stdio.h>

void main()
{
	int n = 101;
	int m = 30;
	int ans = n + m;
	printf("n+m = %d\n", ans);
	ans = n - m;
	printf("n-m = %d\n", ans);
	ans = n * m;
	printf("n*m = %d\n", ans);
	// n = q*m + r
	int q = n / m; // 몫 계산
	int r = n % m; // 나머지 계산: 정수만 가능
	printf("몫 = %d\n", q);
	printf("나머지 = %d\n", r);
	printf("q*m+r = %d\n", q * m + r);
}