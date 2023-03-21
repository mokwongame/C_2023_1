#include <stdio.h>
#include <string.h>
#include <ctype.h> // character type

// printf("%s", s)
void printString(char s[]) // 배열의 크기를 보낼 필요 X; 문자열의 길이는 strlen로 얻을 수 있음
{
	for (int i = 0; i < strlen(s); i++) // 0, 1, 2, ... strlen(s)-1
		putchar(s[i]);
}

void printCharType(char s[])
{
	for (int i = 0; i < strlen(s); i++) // 0, 1, 2, ... strlen(s)-1
	{
		if (isalpha(s[i]))
		{
			//printf("s[%d] = %c: 알파벳\n", i, s[i]);
			if (islower(s[i])) // 소문자: lower case
				printf("s[%d] = %c: 소문자\n", i, s[i]);
			//else
			else if (isupper(s[i])) // 대문자: upper case, capital letter
				printf("s[%d] = %c: 대문자\n", i, s[i]);
		}
		else if (isdigit(s[i])) printf("s[%d] = %c: 숫자\n", i, s[i]);
		else if (ispunct(s[i])) printf("s[%d] = %c: 구두점\n", i, s[i]);
		else if (isspace(s[i])) printf("s[%d] = %c: 공백\n", i, s[i]);
	}
}

void main()
{
	// 문자열(string): char 자료형을 원소로 가지는 배열(array)
	char s[] = "sTr123.,'  \t\n	INg"; // 크기가 6(X), 크기는 7(0); 문자열 마지막에는 ASCII 0번(\0)이 들어감
	// 문자열의 저장 공간으로 7 이상이 필요
	printf("%s\n", s); // %s: 포맷 규격자에서 s는 string 의미
	puts(s);
	// 문자열은 반드시 ASCII 0번으로 끝나야 함: 이게 안되면 출력할 때 문자열의 끝을 알 수 없음
	// 문자열의 끝을 명시하기 위해 \0 문자를 사용

	printf("문자열 길이: %zd\n", strlen(s)); // string length: 길이 계산에는 마지막 0번이 포함 X

	// 틀린 비교
	//if (s == "string") // s는 문자열의 머리말, 포인터
	// 맞는 비교
	if (strcmp(s, "string") == 0) // strcmp(string compare): 두 문자열의 비교(차이); 대소 관계 비교(b > a, c > d)
		printf("%s는 string과 같음\n", s);
	else
		printf("%s는 string과 다름\n", s);

	// 문자열 원소 접근
	putchar(s[0]);
	putchar(s[1]);
	puts("");
	printString(s);
	puts("");
	printCharType(s);
}