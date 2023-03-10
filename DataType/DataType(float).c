#include <stdio.h>
#include <float.h>

void main()
{
	float x; // 실수(무조건 부호): real number, floating-point number(부동(부유 동작) 소수점 실수: 1.234, 12.34, 0.1234)
	double y = 1.2345; // 실수(이배 정밀도: float의 2배 정밀도); 정수는 int를 많이 씀; 실수는 double을 많이 씀
	long double z;

	puts("float");
	//printf("size: %d", (int)sizeof(x)); // 변수명
	printf("size: %d", (int)sizeof(float)); // 자료형
	puts("===");
	printf("min: %f ~ max: %f", FLT_MIN, FLT_MAX); // %f: fixed-point(고정 소수점): 소수 표현식
	puts("===");
	printf("min: %e ~ max: %e", FLT_MIN, FLT_MAX); // %e: exponent(지수): 지수 표현식
	// FLT_MIN보다 작은값: 언더플로우(underflow): over의 반대말 under
	// FLT_MAX를 넘는 값: 오버플로우(overflow)
	puts("===");
	printf("min: %g ~ max: %g", FLT_MIN, FLT_MAX); // %g: %f와 %e중에서 보기 좋은 형태로 출력
	puts("===");

	puts("double"); // double float
	printf("size: %d", (int)sizeof(y));
	puts("===");
	printf("min: %f ~ max: %f", DBL_MIN, DBL_MAX); // %f: fixed-point(고정 소수점): 소수 표현식
	puts("===");
	printf("min: %e ~ max: %e", DBL_MIN, DBL_MAX); // %e: exponent(지수): 지수 표현식
	// FLT_MIN보다 작은값: 언더플로우(underflow): over의 반대말 under
	// FLT_MAX를 넘는 값: 오버플로우(overflow)
	puts("===");
	printf("min: %g ~ max: %g", DBL_MIN, DBL_MAX); // %g: %f와 %e중에서 보기 좋은 형태로 출력

	puts("long double"); // long double float
	printf("size: %d", (int)sizeof(z));
	puts("===");
	printf("min: %f ~ max: %f", LDBL_MIN, LDBL_MAX); // %f: fixed-point(고정 소수점): 소수 표현식
	puts("===");
	printf("min: %e ~ max: %e", LDBL_MIN, LDBL_MAX); // %e: exponent(지수): 지수 표현식
	// FLT_MIN보다 작은값: 언더플로우(underflow): over의 반대말 under
	// FLT_MAX를 넘는 값: 오버플로우(overflow)
	puts("===");
	printf("min: %g ~ max: %g", LDBL_MIN, LDBL_MAX); // %g: %f와 %e중에서 보기 좋은 형태로 출력
}