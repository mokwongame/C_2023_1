#include <stdio.h>
#include <stdlib.h> // 표준 라이브러리(standard library) 헤더 파일
#include <time.h>
#include "LibGameTool.h"

void main()
{
	randseed();
	int N = 30;
	for (int i = 0; i < 20; i++)
	{
		int n = randrange(1, N + 1); // 1, 2, ..., N까지 난수 발생
		printf("n = %d\n", n);
	}
}