#include <stdio.h>

// 구조체 정의: struct 구조체명 {...}; 코드 블록에는 변수 선언
struct _mydata
{
	// 멤버 변수
	char c, d;
	int i, j;
	double x;
	//};
} g_mydata; // 구조체를 정의하면서 구조체 변수를 선언까지 가능

typedef struct _mydata mydata; // mydata를 자료형처럼 사용하게 만드는 typedef

// 구조체 입력 변수: 입력된 구조체의 모든 멤버를 지역 변수 md에 복사(값으로 호출: call by value)
void printMydata(mydata md)
{
	printf("c = %c\n", md.c);
	printf("i = %d\n", md.i);
	printf("x = %g\n", md.x);
}

// 포인터(주소)로 호출: call by pointer or address
void printMydataPtr(mydata* ptr) // 입력을 포인터로 보내는 방법을 많이 씀
{
	printf("c = %c\n", ptr->c);
	printf("i = %d\n", ptr->i);
	printf("x = %g\n", ptr->x);
}

void main()
{
	// 구조체 선언
	mydata md1; // struct 구조체명 변수명
	mydata md2 = { 'a', 'b', 10, 20, 5.79 };

	// 접근 연산자는 .: 구조체명.멤버변수명
	md1.c = 'b';
	md2.c = md1.c;

	mydata md3 = md2; // 모든 멤버를 복사해서 할당
	printMydata(md2);

	// 배열처럼 초기화 가능: [] 연산자 이용해서 특정 원소를 초기화
	mydata md4 = { .i = 50, .x = -45.67, .c = 'z' }; // . 연산자 이용해서 임의의 멤버 변수를 초기화

	mydata* md5 = &md4; // md5: 구조체의 주소를 저장하고 있는 포인터
	// 포인터 접근 연산자 ->: 구조체의 포인터로 멤버 접근하는 연산자
	md5->c = 'm'; // md5 주소에 가서 그 밑의 멤버 c에 접근해서 'm'을 할당
	printf("mydata 바이트 크기: %zd\n", sizeof(md4)); // sizeof(mydata)
	printf("mydata 바이트 크기: %zd\n", sizeof(mydata)); // sizeof(mydata)
	printf("mydata 포인터의 바이트 크기: %zd\n", sizeof(md5));
	printMydataPtr(md5);

	g_mydata.c = 'g';
	printMydataPtr(&g_mydata);
}