#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// 프로그램: 명령어(코드) + 데이터
	/*double x;
	double y;
	double z;

	// 입력
	printf("x 입력:");
	x = getdbl();
	printf("y 입력:");
	y = getdbl();

	// 연산(operation): 이항 연산(binary operation)
	printf("x = %g, y = %g\n", x, y);
	// 연산자(operator)
	z = x + y;
	printf("add: %g\n", z);
	z = x - y;
	printf("sub: %g\n", z);
	z = x * y;
	printf("mul: %g\n", z);
	z = x / y;
	printf("div: %g\n", z);
	z = x / 100; // 실수 / 정수: 계산 결과는 실수
	printf("div: %g\n", z);
	int i = 100 / (int)x; // 형 변환 (int): double -> int로 변환; 소수점을 버리고 정수 부분만 선택(정보 손실: 소수점 부분)
	printf("div: %d\n", i);
	printf("(int)x = %d\n", (int)x);
	// 단항 연산(unary operation)
	double w = -z;
	printf("w = %g\n", w);
	w = +z;
	printf("w = %g\n", w);*/

	// 연산자 우선 순위: 누가 먼저 계산할 것인가 순서를 정하는 규칙(수학의 규칙을 따름)
	// ()를 먼저 계산 > +-(단항 연산) > */% > 덧셈(+)과 뺄셈(-)
	// 헷갈리면 ()를 써서 명확히 연산자 우선 순위
	double x = 12.6;
	double y = 4.5;
	double z = x * y + -x - y; // (x*y) + (-x) - y;
	printf("z = %g\n", z);
	z = (x * y) + (-x) - y;
	printf("z = %g\n", z);

	// 세미콜론: 구문이 끝남(국어 시간의 마침표)
	// 쉼표 연산자: 현재 구문 계산 끝나고 그 다음 계산이 이어짐(쉼표와 같은 의미)
	x = 20 * y, y = 50 * x, z = x * y;
	printf("z = %g\n", z);
}