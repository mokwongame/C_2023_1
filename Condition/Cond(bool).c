#include <stdio.h>
#include <stdbool.h>

void main()
{
	/*bool b1 = false;
	bool b2 = false;

	// 관계 연산자, 논리 연산자, 논리값 그 자체: 조건문의 판단식에 들어갈 수 있음
	//bool ans = b1 && b2; // 논리 AND 연산: &(비트 단위 AND)와 구별
	bool ans = b1 || b2; // 논리 OR 연산: |(비트 단위 OR)와 구별
	//bool ans = !b1; // NOT 연산: ~(비트 단위 NOT)과 구별
	// bool인 경우 true는 1
	if (ans) // 판단식: true(정수: 1만 해당하지 않고 0이 아닌 모든 값, false(0인 값)만 들어오면 가능
	{
		puts("ans is true.");
	}
	else
	{
		puts("ans is false.");
	}*/

	int i = -50;
	int j = -10;
	int ref = 7; // 기준값
	printf("i = %d, j = %d\n", i, j);
	// 구문이 하나인 경우는 {} 생략 가능
	if ((i > ref) && (j > ref))
		printf("i, j 둘다 %d보다 큼\n", ref);
	else if ((i > ref) || (j > ref))
		printf("i, j 둘중 하나만 %d보다 큼\n", ref);
	else
		printf("i, j 둘다 %d보다 크지 않음\n", ref);
}