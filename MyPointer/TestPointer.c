#include <stdio.h>

void main()
{
	int i = 10;
	int j;
	&i; // &: i가 저장된 위치의 주소; 주소 연산자(addressof)
	printf("i의 주소 %p\n", &i); // %p: pointer
	int* p; // p를 포인터
	// j = i;
	p = &i;	// i의 주소를 포인터 p에 할당
	j = *p; // 포인터 p를 이용해 int 저장 공간에 접근; 간접 연산자, 탈참조 연산자(valueof)
	printf("%d", j);
}