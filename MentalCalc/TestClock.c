#include <stdio.h>
#include <time.h>
#include <math.h> // ����(math) �Լ��� ���ǵ� ��� ����
#include "LibConsole.h"

void main()
{
	// clock_t: clock�� typedef���� ���� ���ο� �ڷ���(����, ����)
	clock_t msec = clock(); // clock()�� ���α׷��� ������ �ð��� 0���� �ؼ� msec ������ ������ ��ȯ
	printf("���� �ð�(ms) = %d\n", msec);
	double ans = 0.;
	for (int i = 0; i < 100000; i++) ans += sin(i);
	msec = clock();
	printf("���� �ð�(ms) = %d\n", msec);

	clock_t start = clock();
	sleepcon(1.0); // 1.0�� ���� ����
	clock_t elapse = clock() - start; // ����� �ð� ����
	printf("��� �ð�(ms) = %d\n", elapse);
}