#include <stdio.h>

// 함수 정의: 입력은 여러 개가 가능; 출력은 단 하나만 가능
int operate(int i, int j)
{
	return i + j;
}

// call by address (주소로 호출)
int operate2(int* addptr, int* mulptr, int i, int j)
{
	*addptr = i + j; // i+j 결과를 addptr 주소에 값으로 쓰기(valueof)
	*mulptr = i * j;
	return 1; // true
}

// call by value (값으로 호출)
int operate3(int add, int mul, int i, int j)
{
	// add, mul은 지역 변수
	add = i + j;
	mul = i * j;
	return 1; // true
}

void main()
{
	int i = 10; // 변수 선언: 자료형 변수명 = 초기화 값;
	// 포인터 선언
	int k = 20;
	int* j = &i; // &: 변수명의 주소 가져오기(addressof 연산자)
	// *: 주소(포인터)에 접근해서 값 가져오기(valueof 연산자); 역참조(dereference) 연산자; 간접(indirection) 연산자
	j = &k; // 포인터(주소) = &변수명 (참조 과정)
	printf("*j = %d\n", *j); // *포인터(주소) = 값 (역참조 과정)

	int add;
	int mul;
	add = mul = 0;
	operate2(&add, &mul, i, k);
	printf("add = %d, mul = %d\n", add, mul);

	add = mul = 0;
	operate3(add, mul, i, k);
	printf("add = %d, mul = %d\n", add, mul);
}