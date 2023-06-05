#include <stdio.h>	// 표준 입출력을 위한 헤더 파일
#include <string.h> // 문자열 처리 위한 헤더 파일

#define STR_MAX	(500)	// 문자열의 문자 개수의 최대값

void main()
{
	// 1차원 배열
	char quote1[] = "I'm not here to be perfect, I'm here to be real.";
	// 2차원 배열
	char quotes[][STR_MAX] = { "I'm not here to be perfect, I'm here to be real.",
	"I'm not interested in money. I just want to be wonderful.",
	"The only thing that feels better than winning is winning when nobody thought you could.",
	"Success is not final, failure is not fatal: It is the courage to continue that counts."};
	puts(quote1);
	puts(quotes[0]); // quotes의 0번 문자열
	puts(quotes[1]); // quotes의 1번 문자열
	size_t sizeQuotes = sizeof(quotes);
	int nQuote = (int)(sizeQuotes / STR_MAX);
	printf("\n size = %lld\n", sizeQuotes);
	printf("\n # of quotes = %d", nQuote);

	char strIn[STR_MAX]; // char의 배열 = 문자열; 문자열 입력을 받기 위해 메모리 공간을 STR_MAX만큼 확보
	puts("\n\n문자열을 입력하세요:");
	gets_s(strIn, STR_MAX-1); // _s: safe(안전한); gets_s: safe gets; 문자열의 끝에는 0 문자가 들어가야 함; '0'가 아닌 숫자 0
	puts(strIn);
}