#include <stdio.h>
#include <limits.h>

#define MY_INT	(35) // #define 이름 매크로: 매크로 정의 방식; ()는 명확히 표현하기 위해 추가; ()는 없어도 됨

void main() // 프로그램이 실행될 때 최초 실행되는 함수; 딱 하나만 존재해야 함
{
	// 리터럴 상수 혹은 리터럴(literal): 글자 상수
	puts("literal(리터럴)");
	char ch1_test = 'a';
	int i2 = -123;
	double x3 = 1.2345;

	printf("%c\n", ch1_test);
	printf("%d\n", i2);
	printf("%g\n", x3);

	short j = 1;
	long k = 3l;
	printf("%d\n", j);
	printf("%d\n", k);

	long long m = 1000LL; // 1 I l; l or L 의미: long을 명확히 표현
	printf("%lld\n", m);

	float y = 1.2f; // f 의미: float 상수를 명확히 표현
	printf("%e\n", y);
	double z = 1.567e+100; // e+100 의미: 10^100
	printf("%g\n", z);
	double z2 = 1.567e100; // e100 의미: 10^100
	printf("%g\n", z2);
	double z3 = 1.567e-200; // e-200 의미: 10^-200
	printf("%g\n", z3);

	// 기호(symbolic) 상수(constant) 혹은 상수(const)
	puts("constant(상수)");
	const int a = 10; // 상수: 값을 할당 X; 상수를 선언할 때만 초기화 가능
	printf("%d\n", a);
	//a = -20;
	int b = MY_INT; // 컴파일러는 int b = (15);로 해석
	printf("%d\n", b);
}