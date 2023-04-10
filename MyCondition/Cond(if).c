#include <stdio.h>

void main()
{
	int i = 13; // 할당(=)
	// 짝수, 홀수 판단: 나머지 연산(%)
	int rem = i % 2; // 나머지(remainder)
	// 짝수: 나머지 = 0
	// 홀수: 나머지 = 1
	printf("rem = %d\n", rem);
	// 문법: if (판단식) {...}
	if (rem == 0) // rem과 0이 같음(==): 짝수
	{ // 조건이 맞을 경우에 실행할 코드 블록
		printf("%d는 짝수\n", i);
	}
	else // 그외 조건: 같음의 반대(다름); rem == 1
	{
		printf("%d는 홀수\n", i);
	}
}