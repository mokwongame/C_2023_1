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
	int q = n / m; // �� ���
	int r = n % m; // ������ ���: ������ ����
	printf("�� = %d\n", q);
	printf("������ = %d\n", r);
	printf("q*m+r = %d\n", q * m + r);
}