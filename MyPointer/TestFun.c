#include <stdio.h>

void myfun(int a) // a = i: 입력을 a에 복사; 값에 의한 호출(call by value)
{
	a = -100;
}

void myfunptr(int* p) // 저장 공간의 주소를 넘겨줌; 참조에 의한 호출(call by reference); return 대신 값을 넘겨받을 수 있는 새로운 방법
{
	*p = -100;
}

void myfunptr2(int* p, int* q) // 저장 공간의 주소를 넘겨줌; 참조에 의한 호출(call by reference); return 대신 값을 넘겨받을 수 있는 새로운 방법; return을 동시에 2개 할 수 있는 방법
{
	*p = -1000;
	*q = 1000;
}

void main()
{
	int i = 30;
	myfun(i);
	printf("i = %d\n", i);
	myfunptr(&i);
	printf("i = %d\n", i);
	int j = 0;
	myfunptr2(&i, &j);
	printf("i = %d, j = %d\n", i, j);
}