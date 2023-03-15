#include <stdio.h>

void main()
{
	int sum = 0;
	// for 구문: 한번도 실행하지 않을 수 있다.
	// for 구문은 초기값 설정한 후에 판단식을 계산해서 true면 그 다음 코드 블록을 실행
	// break, continue 사용 가능
	for (int i = 1; i <= 1000; i++) // for (초기값; 판단식; 증감)
	{
		sum += i; // sum = sum + i
		printf("sum = %d @ i = %d\n", sum, i);
	}
	printf("\ntotal sum = %d\n", sum);
	int ans = (1000 * 1001) / 2; // n(n+1)/2 @ n = 1000
	printf("\n수학식 결과 = %d\n", ans);
}