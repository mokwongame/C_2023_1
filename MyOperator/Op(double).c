#include <stdio.h>

void main()
{
	double x = -1.567;
	double y = 346.676;
	double ans = x + y;
	printf("x+y = %g\n", ans);
	ans = x - y;
	printf("x-y = %g\n", ans);
	ans = x * y;
	printf("x*y = %g\n", ans);
	ans = x / y; // 실수는 나눗셈 연산자가 하나(/); 나머지 연산자(%) 없음
	printf("x/y = %g\n", ans);
}