#include <stdio.h>
#include <math.h> // ���� �Լ��� ���ǵ� ��� ����

#define ARRAY_SIZE	(10)

void main()
{
	double ar[ARRAY_SIZE] = { 1.1, 2.2, 3.3 };
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%g, ", ar[i]);
		printf("sin = %g, ", sin(ar[i]));
		printf("cos = %g, ", cos(ar[i]));
		printf("exp = %g,", exp(ar[i]));
		printf("log = %g\n", log(ar[i]));
	}
}