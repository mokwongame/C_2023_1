#include <stdio.h>
#include <float.h> // 실수 특성을 가진 헤더 파일

void main()
{
	// 게임 분야에서 많이 활용
	// 실수: float(floating-point real number); 부동(부유 이동) 소수점 실수
	float x; // int와 같은 크기
	printf("float 저장 크기: %lld, ", sizeof(x)); // sizeof(float)
	printf("float 최소(0과 가까운 값): %g, 최대: %g", FLT_MIN, FLT_MAX);
	puts("");
	// C 언어의 기본 자료형: char(문자), int(정수), double(실수)
	// 이중 정밀도 실수: double float
	double y = 1230000000.23344;
	puts("double float");
	// %f: fixed-point(고정 소수점), %e: exponential, %g: %f 혹은 %e 중에서 보기 좋은 방식으로 출력
	printf("고정점: %f, 지수: %e, 보기 좋게 출력: %g", y, y, y);
	puts("");
	printf("double 저장 크기: %lld, ", sizeof(y)); // sizeof(double)
	printf("double 최소(0과 가까운 값): %g, 최대: %g", DBL_MIN, DBL_MAX);

	// 긴 실수
	long double z = 1.56;
	printf("고정점: %f, 지수: %e, 보기 좋게 출력: %g", z, z, z);
	puts("");
	printf("long double 저장 크기: %lld, ", sizeof(z)); // sizeof(long double)
	printf("long double 최소(0과 가까운 값): %g, 최대: %g", LDBL_MIN, LDBL_MAX);

}