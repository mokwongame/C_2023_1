#include <stdio.h>

#define STR_MAX	(200)	// ���ڿ��� ���� ������ �ִ밪

void main()
{
	// 1���� �迭
	char quote1[] = "I'm not here to be perfect, I'm here to be real.";
	// 2���� �迭
	char quotes[][STR_MAX] = { "I'm not here to be perfect, I'm here to be real.",
	"I'm not interested in money. I just want to be wonderful.",
	"The only thing that feels better than winning is winning when nobody thought you could.",
	"Success is not final, failure is not fatal: It is the courage to continue that counts."};
	puts(quote1);
	puts(quotes[0]); // quotes�� 0�� ���ڿ�
	puts(quotes[1]); // quotes�� 1�� ���ڿ�
	size_t sizeQuotes = sizeof(quotes);
	int nQuote = (int)(sizeQuotes / STR_MAX);
	printf("\n size = %lld\n", sizeQuotes);
	printf("\n # of quotes = %d", nQuote);
}