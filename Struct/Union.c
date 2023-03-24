#include <stdio.h>

// 공용체: 서로 다른 멤버 변수를 같은 공간에 이진수 저장; 이 이진수를 x로 볼수도, 정수 배열로 볼 수 있음
// 공용체 정의: 메모리를 공유하기 때문에 서로 다른 자료형의 비트별 연산 처리에 유용
union intdbl
{
	double x; // 8 바이트
	int n[2]; // 4 바이트 *2 = 8바이트
};

void main()
{
	union intdbl id; // 공용체 선언
	printf("공용체 크기: %zd\n", sizeof(union intdbl));
	id.x = 1.234;
	printf("%d %d\n", id.n[0], id.n[1]);
	id.n[0] = 1;
	id.n[1] = 2;
	printf("%g\n", id.x); // NaN: not a number (실수 표현식이 틀림)
}