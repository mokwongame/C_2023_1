#include <stdio.h>
#include <stdlib.h> // ǥ�� ���̺귯��(standard library) ��� ����
#include <time.h>
#include "LibGameTool.h"

void main()
{
	randseed();
	int N = 30;
	for (int i = 0; i < 20; i++)
	{
		int n = randrange(1, N + 1); // 1, 2, ..., N���� ���� �߻�
		printf("n = %d\n", n);
	}
}