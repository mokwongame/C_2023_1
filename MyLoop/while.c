#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// ���� ���ϱ�: 1���� ���� nMax
	printf("1���� ���� �ִ� ����: ");
	int nMax = getint();
	int ans = 0;
	//ans += 1; // ����(���� 2��) �Ҵ�: ans = ans + 1;
	//ans += 2;
	//ans += 3;
	int i = 1;
	// i�� nMax���� �۰ų� ������(<=) �ڵ� ��� �ݺ�
	while (i <= nMax) // while (�Ǵܽ�) {�ڵ� ���}
	{
		ans += i;
		i++; // i = i+1; i += 1; ++i;
	}
	printf("ans = %d\n", ans);
	int mathAns = nMax * (nMax + 1) / 2;
	printf("math ans = %d\n", mathAns);
}