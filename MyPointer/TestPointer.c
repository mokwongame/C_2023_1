#include <stdio.h>

void main()
{
	int i = 10;
	int j;
	&i; // &: i�� ����� ��ġ�� �ּ�; �ּ� ������(addressof)
	printf("i�� �ּ� %p\n", &i); // %p: pointer
	int* p; // p�� ������
	// j = i;
	p = &i;	// i�� �ּҸ� ������ p�� �Ҵ�
	j = *p; // ������ p�� �̿��� int ���� ������ ����; ���� ������, Ż���� ������(valueof)
	printf("%d", j);
}