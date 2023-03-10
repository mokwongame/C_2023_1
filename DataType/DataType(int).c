#include <stdio.h>
#include <limits.h>

// 함수 정의: 코드 블록 {} 만들기
void main()
{
	// 정수 변수 선언: 정수 사용할 준비
	int i = 10; // 정상(일반) 정수: 4 바이트 = 4*8 비트 = 32 비트
	short j; // 짧은 정수: 저장 공간 작음, 2 바이트
	long k; // 긴 정수: 저장 공간 큼, 4 바이트
	long long l; // 아주 긴 정수: 8 바이트 = 64 비트

	puts("int");
	printf("size: %d", (int)sizeof(i));
	puts("===");
	printf("min: %d ~ max: %d", INT_MIN, INT_MAX); // 표현 영역을 넘어선 경우: 오버플로(overflow)
	puts("===");

	puts("short");
	printf("size: %d", (int)sizeof(j));
	puts("===");
	printf("min: %d ~ max: %d", SHRT_MIN, SHRT_MAX);
	puts("===");

	puts("long");
	printf("size: %d", (int)sizeof(k));
	puts("===");
	printf("min: %ld ~ max: %ld", LONG_MIN, LONG_MAX);
	puts("===");

	puts("long long");
	printf("size: %d", (int)sizeof(l));
	puts("===");
	printf("min: %lld ~ max: %lld", LLONG_MIN, LLONG_MAX);
	puts("===");

	// 무부호 정수 unsigned
	unsigned int ui = 30;
	unsigned short uj;
	unsigned long uk;
	unsigned long long ul;

	puts("unsigned int");
	printf("size: %d", (int)sizeof(ui));
	puts("===");
	printf("min: 0 ~ max: %u", UINT_MAX);
	puts("===");
}