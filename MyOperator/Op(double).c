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
	ans = x / y; // �Ǽ��� ������ �����ڰ� �ϳ�(/); ������ ������(%) ����
	printf("x/y = %g\n", ans);
}