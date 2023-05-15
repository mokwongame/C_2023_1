#include <stdio.h>

// 자료형 정의(type definition) 연산자
typedef int* intptr; // int*를 intptr로 새롭게 형정의(별명)
typedef int* myintptr_t; // int*를 myintptr_t로 새롭게 형정의(별명); typedef한 자료형임을 명시하기 위해 _t 사용
typedef long wide; // long을 wide로 형정의(별명)

void main()
{
	// ar의 의미: 배열명, 배열의 포인터(int의 나열에 접근); 배열 0번 원소의 저장 주소
	//int ar[5] = { 1, 2, 3, 4, 5 };
	int ar[] = { 1, 2, 3, 4, 5 };
	printf("ar의 주소 = %p\n", ar);
	//int* p = ar;
	intptr p = ar;
	printf("%d = %d\n", *p, ar[0]);
	printf("%d = %d\n", *(p + 1), ar[1]);
	printf("%d = %d\n", *(p + 2), ar[2]);

	wide a = 100;
	printf("a = %d\n", a);
}