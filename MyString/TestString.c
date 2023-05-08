#include <stdio.h>
#include <string.h> // string을 다루는 함수를 가진 헤더 파일

void printString(char str[]) // []안에 숫자를 적으면 안됨
{
	// 문자열 -> 문자 배열 -> 각 문자를 출력
	// strlen(): string length(문자열 길이)
	int strsize = (int)strlen(str); // _t: 자료형(type)을 새롭게 정의
	printf("문자열 길이 = %d\n", strsize);
	for (int i = 0; i < strsize; i++) // 0, 1, 2, ..., 6(7-1)
	{
		char ch = str[i];
		putchar(ch);
		//printf("%c", ch);
	}
}

void main()
{
	char str[10] = "Game SW"; // 글자 7자 + 마지막에 문자열의 끝을 나태는 문자를 추가 \0 = 총 7+1 = 8자
	//puts("Game SW");
	puts(str);
	printf("%s\n", str);
	printString(str);
}