#include <stdio.h>
#include <conio.h>
#include "LibConsole.h"

// 함수 선언
void addGlobal();

// 전역 변수(global variable)
double g_add = 100; // 어디에서든 사용 가능; 전역 변수는 메모리 해제 X; 프로그램 실행이 끝나야 메모리 해제
// 전역 변수는 사용이 편리; 어디서 수정되는지 확인 어려움; 가능하면 안 쓰는 게 프로그래밍의 기본; 객체 지향 프로그래밍(C++)

// 화씨(미국) -> 섭씨(우리)
double farenToCelci(double F) // F: 화씨
{
	//g_add += 2.;
	double C = 5. / 9. * (F - 32.); // 5/9 = 0: 정수 나누기로 몫을 계산
	return C; // 섭씨
} // C는 함수 계산이 끝나면, 반환이 되면, C는 메모리가 해제됨

double accum(double val)
{
	//double sum = 0.; // 지역 변수: 저장값이 보존 X
	static double sum = 0.; // 정적 변수: 저장값이 보존 O; 초기화는 선언할 때만 가능
	// 함수 안에서만 접근 가능
	sum += val;
	return sum;
}

// 함수 안에 있는 변수 선언: 지역 변수(local variable) = 함수 안에서만 유효
// 지역 변수: 조건문이나 반복문에도 가능; 코드 블록 실행이 끝나면 지역 변수의 메모리 해제
void main()
{
	//g_add = 200;
	/*while (1) // 영원히 반복: 괄호 안이 1로서 항상 참(true)
	{
		printf("화씨 입력:");
		double F = getdbl(); // LibConsole.h에 정의
		if (F < -100.) break; // 조건이 맞으면 while(가장 가까운 반복문)을 빠져나감
		double C = farenToCelci(F) + g_add;
		printf("섭씨 + 100 = %g\n", C);
	}*/

	/*while (1)
	{
		printf("숫자 입력:");
		double val = getdbl(); // LibConsole.h에 정의
		printf("합 = %g\n", accum(val));
	}*/

	while (1)
	{
		//char c = getchar(); // 문자 하나 입력: 마지막에 enter 쳐야 함
		char c = _getche(); // conio.h에 정의; 문자 하나 입력, 이 문자를 출력(e: echo); _ 의미: 컴파일러가 지원하는 함수, 주의를 가지고 써야 하는 함수
		addGlobal();
		printf("g_add = %g\n", g_add);
	}
}