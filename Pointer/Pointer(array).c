#include <stdio.h>

// 형 정의: 자료형 이름 바꾸기
// typedef: type definition
typedef char letter; // 마치 변수 선언처럼 새로운 자료형 이름(별명, 가명)을 정의
typedef int* intptr;

void main()
{
	int ar[] = { 1, 2, 3, 4 }; // 배열명은 배열의 포인터(주소)
	//int ar[4] = { 1, 2, 3, 4 };

	// ar[1]; *j
	printf("ar[1] = %d\n", ar[1]); // [] 연산자를 이용해서 원소를 가져오기; 배열명은 마치 포인터처럼

	int* ptr = NULL; // 포인터는 보통 NULL로 초기화
	ptr = ar;
	printf("주소 = %p, 포인터 저장 공간 = %zd\n", ptr, sizeof(ptr)); // %p: pointer를 출력하는 포맷 규격자
	printf("ar[0] = %d\n", *ptr);
	printf("ar[1] = %d\n", *(ptr + 1)); // 자료형이 int이므로 바이트로는 4바이트 전진
	printf("ar[2] = %d\n", *(ptr + 2)); // 자료형이 int이므로 바이트로는 4바이트 전진

	int ar2[2][3] = { {1, 2, 3}, {4, 5, 6} }; // {0번 행벡터, 1번 행벡터}
	int n = ar2[0][0];
	int* ptr0 = ar2[0]; // 값: ar2[][], 포인터(ar2[][]에 접근하는 주소): ar2[]
	int* ptr1 = ar2[1]; // 1번 행벡터를 가리키는 포인터(주소)
	int m = *ar2[0]; // ar2[0]는 포인터: 0번 행벡터 {1, 2, 3}을 가리키는 포인터
	printf("%d == %d\n", n, m);

	// 상수 const
	const int* i0 = ar2[0];
	// *i0 = 20; // error
	printf("%d\n", *i0);
	int* const i1 = ar2[1];
	//i1 = ar2[0]; // error
	printf("%d\n", *i1);

	letter ch = 'm';
	printf("%c\n", ch);

	intptr ip = ar2[0];
	printf("%d\n", *(ip + 1));
}