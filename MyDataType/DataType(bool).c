#include <stdio.h>
#include <stdbool.h> // 논리 자료형 bool 사용

void main()
{
	bool b = false; // 0으로 정의
	// true: 0이 아닌 값; 대표적으로 1을 선택
	//bool b = true; // false도 가능
	printf("%d, ", b);
	printf("bool의 저장 공간 = %lld", sizeof(bool));
}