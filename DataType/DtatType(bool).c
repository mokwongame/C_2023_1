#include <stdio.h>
#include <stdbool.h> // bool 자료형 사용하기 위한 include

void main()
{
	// 수학자 Boole을 따서 자료형 bool을 정의
	// 논리 연산에 적합: int를 써도 가능
	bool b = true;
	bool c = false;

	puts("int");
	printf("size: %d", (int)sizeof(b));
	puts("===");
	printf("%d, %d", b, c);
}