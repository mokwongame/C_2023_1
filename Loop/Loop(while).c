#include <stdio.h>

void main()
{
	int sum = 0;
	int i = 1;
	// while 구문: 한번도 실행하지 않을 수 있다.
	/*while (i <= 1000) // while (판단식): 판단식 = true이면 계속 실행, 판단식 = false이면 실행을 정지
	{
		sum += i; // sum = sum + i
		printf("sum = %d @ i = %d\n", sum, i);
		i++; // 증가 연산자 ++: 하나 증가
	}*/

	// 논리값 판정 기준: 0이면 false, 0이 아니면 true
	while (1) // while (판단식): 판단식 = true이면 계속 실행, 판단식 = false이면 실행을 정지
	{
		sum += i; // sum = sum + i
		printf("sum = %d @ i = %d\n", sum, i);
		if (i == 1000) break; // while 구문을 완전히 빠져 나감
		i++; // 증가 연산자 ++: 하나 증가
	}

	printf("\ntotal sum = %d\n", sum);
	int ans = (1000 * 1001) / 2; // n(n+1)/2 @ n = 1000
	printf("\n수학식 결과 = %d\n", ans);
}