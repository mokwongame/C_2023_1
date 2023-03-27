#include <stdio.h>
#include <limits.h>

#define INT_NUM	(34) // INT_NUM을 34로 정의(define)

/*enum // 열거형 상수 정의: 열거(enumeration), 정수만 가능
{
	FALSE = 0, TRUE = 1
};*/

// 열거형 상수 정의: enum 열거명 {상수 선언 및 초기화}
/*enum Logic // 열거명: Logic
{
	FALSE = 0, TRUE, TRUE2 // 초기화를 생략하면 그냥 1씩 증가
}; // TRUE = 1, TRUE2 = 2와 동일*/

enum Logic // 열거명: Logic
{
	FALSE, TRUE, TRUE2 // 최초 초기화 생략하면 0을 배당; 초기화를 생략하면 그냥 1씩 증가
}; // FALSE = 0, TRUE = 1, TRUE2 = 2와 동일

void main()
{
	// 기호 상수: 프로그래머가 값을 변경하지 못하도록 사용
	// 1. const 예약어(키워드)
	const int i = 10; // 초기화만 가능
	//i = 30; // 추가 할당은 불가능
	// 2. #define 매크로 사용
	int j = INT_NUM;
	printf("j = %d\n", j);
	// 3. enum 예약어 사용: 열거형 상수
	int k = TRUE2;
	printf("k = %d\n", k);
	enum Logic l = FALSE; // l이 Logic 열거명을 가진 열거형 상수임을 선언
	printf("l = %d\n", l);
}