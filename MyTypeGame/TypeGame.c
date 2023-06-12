#include <stdio.h>
#include "LibGameTool.h"

#define STR_MAX	(500)	// 문자열의 문자 개수의 최대값

// 전역 변수 선언: 함수 정의 바깥에 선언한 변수; 누구나 접근 가능
char quotes[][STR_MAX] = { "I'm not here to be perfect, I'm here to be real.",
"I'm not interested in money. I just want to be wonderful.",
"The only thing that feels better than winning is winning when nobody thought you could.",
"Success is not final, failure is not fatal: It is the courage to continue that counts.",
	"If you can dream it, you can do it." };
int nQuote;
char strIn[STR_MAX]; // char의 배열 = 문자열; 문자열 입력을 받기 위해 메모리 공간을 STR_MAX만큼 확보

// 입력 X, 출력은 int
int printRandStr()
{
	int nRand = randrange(0, nQuote); // 0, 1, 2, ..., nQuote-1 범위의 난수 발생
	puts(quotes[nRand]);
	return nRand;
}

void main()
{
	randseed();
	nQuote = (int)(sizeof(quotes) / STR_MAX);

	while (1)
	{
		int nRand = printRandStr();
		puts("\n\n문자열을 입력하세요:");
		gets_s(strIn, STR_MAX - 1); // _s: safe(안전한); gets_s: safe gets; 문자열의 끝에는 0 문자가 들어가야 함; '0'가 아닌 숫자 0
	}
}