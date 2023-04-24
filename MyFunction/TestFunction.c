#include <stdio.h>

int ans = 0; // 전역 변수

// 함수 정의: 출력 함수명(입력 변수1, 입력 변수 2, ...) {코드 블록}
// 함수명 앞에 출력 자료형 제시; 코드 블록에서 return으로 값을 반환
// ()속에 입력 자료형 제시, 입력 변수명도 제시: 변수 선언과 동일하게 사용

// 덧셈(add, addition) 함수 정의
double add(double x, double y) // x를 double로 선언해서 입력으로 사용; y를 double로 선언해서 입력으로 사용
{
	double ans = x + y; // 전역으로 정의된 int ans가 아닌 double ans가 사용됨(double ans가 지역 변수이기 때문)
	return ans; // double로 반환할 변수명 쓰기
}

// nMin부터 nMax까지 step만큼 더하면서 합하는 함수
int sum(int nMin, int nMax, int step)
{
	//int ans = 0; // 지역 변수
	// for (초기값; 판단식; 증감) {코드 블록}
	//for (int i = nMin; i <= nMax; i = i + step)
	for (int i = nMin; i <= nMax; i += step)
	{
		ans += i; // ans = ans + i
		printf("ans = %d @ i = %d\n", ans, i);
	}
	return ans;
}

// 지역(local) 변수: 함수 안에 선언하는 변수; 코드 블록 안에 선언하는 변수; {}를 벗어나면 지역 변수는 사라짐
// 전역(global) 변수: main() 함수 밖에 선언하는 변수; 전역 변수는 프로그램이 실행되는 동안 항상 존재
// 지역 변수와 전역 변수의 이름이 같으면, 지역 변수가 우선권을 가짐

void main()
{
	// 함수 사용
	double x = add(10., 20.);
	printf("x = %g\n", x);

	// sum() 함수 사용
	sum(10, 1000, 35);
}