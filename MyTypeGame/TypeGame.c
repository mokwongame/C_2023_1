#include <stdio.h>
#include "LibGameTool.h"

#define STR_MAX	(500)	// ���ڿ��� ���� ������ �ִ밪

void main()
{
	randseed();

	char quotes[][STR_MAX] = { "I'm not here to be perfect, I'm here to be real.",
"I'm not interested in money. I just want to be wonderful.",
"The only thing that feels better than winning is winning when nobody thought you could.",
"Success is not final, failure is not fatal: It is the courage to continue that counts.",
	"If you can dream it, you can do it."};
	int nQuote = (int)(sizeof(quotes) / STR_MAX);
	int nRand = randrange(0, nQuote); // 0, 1, 2, ..., nQuote-1 ������ ���� �߻�
}