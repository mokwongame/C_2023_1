#include <stdio.h>

void main()
{
	int nMax = 100;
	int ans = 0;
	int i = 1;

	// while�� ����: do while�� �ڵ� ����� �� ���� �� ����
	do // do {�ڵ� ���} while (�Ǵܽ�);
	{
		ans += i;
		i++; // i = i+1; i += 1; ++i;
	} while (i <= nMax);
	printf("ans = %d\n", ans);
	int mathAns = nMax * (nMax + 1) / 2;
	printf("math ans = %d\n", mathAns);
}