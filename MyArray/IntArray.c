#include <stdio.h>

#define ARRAY_SIZE	(20000)

void main()
{
	// [] 기호: 배열을 의미
	//int ar[10] = { 1,2,3,4,5,6,7,8,9,10 }; // 배열(array): int 자료형 10개를 나열
	//int ar[10] = { 1,2,3 }; // 초기화하지 않은 값은 0으로 초기화
	int ar[ARRAY_SIZE] = { 0 };
	// {}를 이용해서 index 순서대로 배열을 초기화
	int ar0, ar1, ar2, ar3, ar4, ar5, ar6, ar7, ar8, ar9; // int 자료형 10개

	ar[0] = 2; // 0번에서 9번(index: 색인, 첨자)까지 할당 가능: ar[10] 선언 때문에 9번까지 할당
	ar[1] = 10;
	ar[9] = 45;
	ar[2] = ar[0];
	ar[3] = ar[9];
	ar[4] = ar[3] * 10; // ar[3]을 값(value)처럼 계산

	// 배열 출력: 반복문(for) 사용
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d, ", ar[i]);
	}
}