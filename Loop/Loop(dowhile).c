#include <stdio.h>

void main()
{
	int sum = 0;
	int i = 0;
	// do-while 구문: 무조건 한 번 이상 실행
	do
	{
		i++; // 증가 연산자 ++: 하나 증가
		// i%2: i를 2로 나눈 나머지; 나머지가 1이면 홀수
		/*if (i % 2 == 1) continue; // 홀수; continue: 아래 코드 블록를 더이상 실행하지 않고 다시 반복
		else // 짝수
		{
			sum += i; // sum = sum + i
			printf("sum = %d @ i = %d\n", sum, i);
		}*/

		if (i % 2 == 0) continue; // 짝수; continue: 아래 코드 블록를 더이상 실행하지 않고 다시 반복
		else // 홀수
		{
			sum += i; // sum = sum + i
			printf("sum = %d @ i = %d\n", sum, i);
		}

	} while (i < 1000); // while (판단식): 판단식이 true이면 계속 실행, 판단식이 false이면 종료
	printf("\ntotal sum = %d\n", sum);
	int ans = (1000 * 1001) / 2; // n(n+1)/2 @ n = 1000
	printf("\n수학식 결과 = %d\n", ans);
}