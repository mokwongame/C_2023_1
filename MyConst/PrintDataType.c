#include <stdio.h>
#include <limits.h>
#include <float.h>

void main()
{
	// char 출력
	puts("1. char 자료형"); // 자료형 이름 출력
	printf("- 바이트 크기 = %zd B\n", sizeof(char));// 자료형의 바이트 크기
	printf("- 표현 최소값 = 0\n"); // 자료 표현의 최소값; 원래는 0이 최소값; 한글 등을 표현위해 음수 허용: SCHAR_MIN
	printf("- 표현 최대값 = %d\n", SCHAR_MAX); // 자료 표현의 최대값
	char ch = 'M';
	printf("- 변수 선언 및 초기화: %c\n", ch);

	// int 출력
	puts("\n2. int 자료형"); // 자료형 이름 출력
}