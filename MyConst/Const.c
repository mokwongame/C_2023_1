#include <stdio.h>

void main()
{
	// 변수 선언
	char ch = 'a'; // 'a'는 문자 상수; 리터럴(literal, 문자 자체)
	int i = 10; // 10은 숫자(정수) 상수; 리터럴(literal, 문자 자체)
	double x = 1.2345; // 1.2345는 숫자(실수) 상수; 리터럴(literal, 문자 자체)
	double y1 = 12e10; // e는 10의 지수(exponent); 12e10 = 12*10^10
	double y2 = 12e+10; // 12e+10 = 12*10^10
	double y3 = 12e-10; // 12e+10 = 12*10^-10

	long long j = 10ll; // ll: long long; l: long
	// 1 I l
	long long k = 20LL; // LL: long long
	float z = -45.67f; // f: float

	// 이스케이프 시퀀스(escape sequence): 이스케이프 문자는 \가 쓰임
	char ch2 = '\n'; // 엔터(new line)
	char ch3 = '\\'; // \를 쓸 때는 \\ 두번 사용
	char ch4 = '\t'; // 탭(tab)
	char ch4 = '\a'; // 알람(alarm)
}

