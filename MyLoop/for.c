#include <stdio.h>

void main()
{
	int nMax = 100;
	int ans = 0;
	for (int i = 1; i <= nMax; i++) // for (�ʱⰪ; �Ǵܽ�; ����)
		ans += i; // ������ �ϳ��� ���� {} ���� ����
	printf("ans = %d\n", ans);
	int mathAns = nMax * (nMax + 1) / 2;
	printf("math ans = %d\n", mathAns);
}