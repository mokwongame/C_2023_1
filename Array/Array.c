#include <stdio.h>

#define INT_ARRAY_SIZE	(10)
#define DBL_ARRAY_SIZE	(5)

//void printIntArray(int a[INT_ARRAY_SIZE]) // 출력 함수명(입력 변수) {...}
// 함수 입력 변수인 경우는 a[]도 가능; 배열 크기는 기억하고 있어야 함
void printIntArray(int a[]) // a[]의 의미: 내부적으로 처리할 때는 a를 주소(메모리 주소, 포인터)로 생각(배열명을 0번 주소로 생각)
{
	printf("a[]의 크기: %zd\n\n", sizeof(a)); // 주소, 포인트로 계산: 8 바이트 = 8*8비트 = 64비트
	for (int i = 0; i < INT_ARRAY_SIZE; i++) // for (초기화; 판단식; 증감) {...}
		printf("[%d] = %d\n", i, a[i]);
}

// 상수(const) 정수(int) 배열([])을 출력
void printConstIntArray(const int a[]) // a[]의 의미: 크기가 정해지지 않는 배열; 내부적으로 처리할 때는 a를 주소(메모리 주소, 포인터)로 생각(배열명을 0번 주소로 생각)
{
	for (int i = 0; i < INT_ARRAY_SIZE; i++) // for (초기화; 판단식; 증감) {...}
		printf("[%d] = %d\n", i, a[i]);
}

//void printDblArray(double x[DBL_ARRAY_SIZE])
void printDblArray(double x[])
{
	for (int i = 0; i < DBL_ARRAY_SIZE; i++) // for (초기화; 판단식; 증감) {...}
		printf("[%d] = %g\n", i, x[i]);
}

void main()
{
	// int a와 비슷; [10]을 추가해서 배열의 크기를 정의; 배열을 쓰지 않으면 int a0, a1, a2, ..., a9;
	int a[INT_ARRAY_SIZE]; //크기가 10인 배열(array)을 선언: 자료형 배열명[크기]
	// 접근할 때: 0, 1, 2, ..., 9까지 사용: 9 = 10-1(크기 - 1)까지 접근을 위한 위치(position)로 사용할 수 있음
	a[0] = 10; // 배열 원소 할당: 0번 원소에 10을 할당
	a[1] = 20;
	a[2] = a[1]; // 배열 원소 할당: a[1]의 값을 가져와서 a[2]에 할당
	// 왼쪽값(l-value): 그 변수(배열 원소)에 쓰기; 상수, 숫자는 왼쪽값이 될 수 없음(저장 공간을 가져야 되기 때문, 변수나 배열만 저장 공간 가짐)
	// 오른쪽값(r-value): 그 변수(배열 원소), 상수, 숫자를 읽기

	puts("\n 실수 배열\n");
	printIntArray(a); // 함수 입력 변수: 배열인 경우는 배열의 이름을 넘겨줌
	printf("배열 크기(바이트) = %d\n", (int)sizeof(a)); // sizeof(배열명): 이 배열이 가진 크기를 바이트로 출력: 정수 = 4바이트 * 10개 = 40바이트
	printf("배열 크기(바이트) = %lld\n", sizeof(a)); // ll: long long
	printf("배열 크기(바이트) = %zd\n", sizeof(a)); // z: size
	int arraysize = (int)(sizeof(a) / sizeof(a[0])); // sizeof(a[0])) = sizeof(int): 4 바이트
	printf("배열 크기(원소 개수) = %d\n", arraysize);
	return;

	// 배열 초기화 = {...}; 집합 정의할 때 사용
	//double x[DBL_ARRAY_SIZE] = { 1., 2., 3., 4.1 }; // double로 배열 초기화; 초기화를 할 숫자가 부족하면 나머지는 0으로 초기화
	double x[] = { 1., 2., 3., 4.1, 5.2 }; // x[] 의미: 원소 개수로 배열 크기를 배정
	//double x[DBL_ARRAY_SIZE] = { 0. };
	puts("\n 실수 배열\n");
	printDblArray(x);

	// 배열 초기화 = {...}: 배열명 생략, [1] = 10
	// 초기화하는 원소의 순서순으로 위치, 첨자(index)가 배정
	const int b[INT_ARRAY_SIZE] = { -10, -20,[3] = 100 }; // 초기화하지 않는 원소는 0으로 초기화
	puts("\n 새로운 초기화\n");
	printConstIntArray(b);
}