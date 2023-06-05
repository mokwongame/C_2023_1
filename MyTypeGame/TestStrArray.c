#include <stdio.h>

#define STR_MAX	(200)	// 문자열의 문자 개수의 최대값

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
}