#include <stdio.h>

void main()
{
	int sum = 0;
	int i = 0;
	// do-while ����: ������ �� �� �̻� ����
	do
	{
		i++; // ���� ������ ++: �ϳ� ����
		// i%2: i�� 2�� ���� ������; �������� 1�̸� Ȧ��
		/*if (i % 2 == 1) continue; // Ȧ��; continue: �Ʒ� �ڵ� ��ϸ� ���̻� �������� �ʰ� �ٽ� �ݺ�
		else // ¦��
		{
			sum += i; // sum = sum + i
			printf("sum = %d @ i = %d\n", sum, i);
		}*/

		if (i % 2 == 0) continue; // ¦��; continue: �Ʒ� �ڵ� ��ϸ� ���̻� �������� �ʰ� �ٽ� �ݺ�
		else // Ȧ��
		{
			sum += i; // sum = sum + i
			printf("sum = %d @ i = %d\n", sum, i);
		}

	} while (i < 1000); // while (�Ǵܽ�): �Ǵܽ��� true�̸� ��� ����, �Ǵܽ��� false�̸� ����
	printf("\ntotal sum = %d\n", sum);
	int ans = (1000 * 1001) / 2; // n(n+1)/2 @ n = 1000
	printf("\n���н� ��� = %d\n", ans);
}