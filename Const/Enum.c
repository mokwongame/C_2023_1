#include <stdio.h>

#define ZERO (0)
#define ONE (1)
#define TWO (2)

// 열거(enumeration)형 상수: 여러 개의 상수를 일관되게 정의
//enum { E_ZERO = 0, E_ONE = 1, E_TWO = 2 };
//enum { E_ZERO = 0, E_ONE, E_TWO }; // 할당(=)이 없으면, 원소 값은 하나씩 증가
//enum { E_ZERO, E_ONE, E_TWO }; // 맨앞에 원소에 할당(=)이 없으면, 원소 값은 0으로 취급
enum MY_NUM { E_ZERO, E_ONE, E_TWO }; // MY_NUM은 열거의 이름(열거명)

void main()
{
	int i = ONE;
	int j = E_ONE;
	printf("%d = %d\n", i, j);

	int i2 = TWO;
	enum MY_NUM k = E_TWO; // 자료형을 정수 입장에서 확장하는 방법
	//int k = E_TWO;
	printf("%d = %d\n", i2, k);
	k = E_ONE;
	printf("%d = %d\n", i2, k);

	// 이스케이프 서열(escape sequence): 이스케이프 문자(\)로 특별한 명령을 생성
	puts("escape sequence");
	puts("This\t\tis a C"); // = printf("문자열\n")
	printf("I am\\ \"Mokwon\".\n");
	printf("alarm\a\n");
	printf("carriage return\r"); // \r: home key

	char c = 'a';
	printf("a = %d    \n", (int)c);
	printf("a = %o    \n", (int)c); // 8진수: octal(8의)
	printf("a = %x    \n", (int)c); // 16진수: hexadecimal(16의: hexa=6,deci=10)
	printf("a = \141 \x61\n"); // \ooo \x_16진수

	const unsigned int k2 = 30u; // 상수인 무부호 기본 정수 k를 30으로 초기화
	printf("%u\n", k2);
	long double x = 1.234l;

	// 리터럴: 8진수(0으로 시작)와 16진수(0x로 시작)
	int m = 0141; // 8진수 리터럴 표현
	int m2 = 0x61; // 16진수 리터럴 표현
	printf("%d = %d\n", m, m2);
	char c2 = (char)m;
	printf("%c\n", c2);
}