#include <stdio.h>

void main()
{
	int sum = 0;
	// for ����: �ѹ��� �������� ���� �� �ִ�.
	// for ������ �ʱⰪ ������ �Ŀ� �Ǵܽ��� ����ؼ� true�� �� ���� �ڵ� ����� ����
	// break, continue ��� ����
	for (int i = 1; i <= 1000; i++) // for (�ʱⰪ; �Ǵܽ�; ����)
	{
		sum += i; // sum = sum + i
		printf("sum = %d @ i = %d\n", sum, i);
	}
	printf("\ntotal sum = %d\n", sum);
	int ans = (1000 * 1001) / 2; // n(n+1)/2 @ n = 1000
	printf("\n���н� ��� = %d\n", ans);
}