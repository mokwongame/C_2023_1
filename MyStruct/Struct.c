#include <stdio.h>

// 기본 자료형: char, int, float, double
struct _calcdata // 이항 연산
{
	int x, y;	// 연산할 2개의 항
	char op; // 연산자: +-*/%
};

// 형 정의(typedef)
typedef struct _calcdata calcdata; // struct _calcdata의 별명, 가명을 calcdata로 정의

void main()
{
	int x, y;	// 연산할 2개의 항
	char op; // 연산자: +-*/%
	struct _calcdata mydata = {1, 2, '*'}; // 구조체 선언: struct struct명 변수명
	calcdata mydata2;	// 새로운 자료형처럼 calcdata를 사용
	mydata2.x = 10; // . 연산자: struct의 멤버에 접근
	mydata2.y = -20;
	mydata2.op = '+';
	printf("mydata의 멤버: x = %d, y = %d, op = %c\n", mydata.x, mydata.y, mydata.op);
	printf("mydata2의 멤버: x = %d, y = %d, op = %c\n", mydata2.x, mydata2.y, mydata2.op);

	// 포인터 접근
	calcdata* ptr;
	ptr = &mydata2;
	x = (*ptr).x;
	y = ptr->y; // -> 연산자: 포인터->멤버명으로 멤버에 접근
	printf("mydata2의 x = %d\n", x);
	printf("mydata2의 y = %d\n", y);

	// 구조체의 할당
	calcdata mydata3 = mydata2;
	printf("mydata3의 멤버: x = %d, y = %d, op = %c\n", mydata3.x, mydata3.y, mydata3.op);

	// 객체 지향: struct(변수) -> class(변수, 함수)
}