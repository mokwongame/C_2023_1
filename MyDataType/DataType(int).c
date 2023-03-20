#include <stdio.h>

void main()
{
	// 정수(integer) 자료형 선언: int
	int i;
	int j = 1;
	int k = -10;

	// 포맷 문자 % 개수에 맞게 변수명을 나열
	printf("%d %d, ", j, k);
	// () 의미: 형 변환; 8 바이트 자료형을 4 바이트(int)로 변환
	printf("저장 공간 크기 = %d", (int)sizeof(i)); // sizeof(int)
}