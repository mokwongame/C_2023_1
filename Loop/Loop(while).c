#include <stdio.h>

void main()
{
	int sum = 0;
	int i = 1;
	// while ����: �ѹ��� �������� ���� �� �ִ�.
	/*while (i <= 1000) // while (�Ǵܽ�): �Ǵܽ� = true�̸� ��� ����, �Ǵܽ� = false�̸� ������ ����
	{
		sum += i; // sum = sum + i
		printf("sum = %d @ i = %d\n", sum, i);
		i++; // ���� ������ ++: �ϳ� ����
	}*/

	// ���� ���� ����: 0�̸� false, 0�� �ƴϸ� true
	while (1) // while (�Ǵܽ�): �Ǵܽ� = true�̸� ��� ����, �Ǵܽ� = false�̸� ������ ����
	{
		sum += i; // sum = sum + i
		printf("sum = %d @ i = %d\n", sum, i);
		if (i == 1000) break; // while ������ ������ ���� ����
		i++; // ���� ������ ++: �ϳ� ����
	}

	printf("\ntotal sum = %d\n", sum);
	int ans = (1000 * 1001) / 2; // n(n+1)/2 @ n = 1000
	printf("\n���н� ��� = %d\n", ans);
}