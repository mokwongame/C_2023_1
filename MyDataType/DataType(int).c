#include <stdio.h>
#include <limits.h>

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
	puts("======"); // puts: put string; 문자열 하나 출력 + Enter도 출력; 포맷은 지원하지 않음
	// 자료형으로 표현할 수 있는 최소값과 최대값은 limits.h
	printf("정수 최소: %d ~ 최대: %d", INT_MIN, INT_MAX);

	// 짧은 정수
	puts("====");
	puts("짧은 정수");
	short i1 = 10; // short int
	printf("%d, ", i1);
	printf("저장 공간 크기 = %d, ", (int)sizeof(i1));
	printf("short 정수 최소: %d ~ 최대: %d", SHRT_MIN, SHRT_MAX);

	// 긴 정수
	puts("====");
	puts("긴 정수");
	long i2 = 10; // long int
	printf("%d, ", i2);
	printf("저장 공간 크기 = %d, ", (int)sizeof(i2));
	printf("long 정수 최소: %d ~ 최대: %d", LONG_MIN, LONG_MAX);

	// 긴 긴 정수
	puts("====");
	puts("긴 긴 정수");
	long long i3 = 10; // long long int
	printf("%lld, ", i3); // %lld: long long decimal
	printf("저장 공간 크기 = %lld, ", sizeof(i3));
	printf("long long 정수 최소: %lld ~ 최대: %lld", LLONG_MIN, LLONG_MAX);
}