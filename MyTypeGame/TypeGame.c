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
	char strIn[STR_MAX]; // char�� �迭 = ���ڿ�; ���ڿ� �Է��� �ޱ� ���� �޸� ������ STR_MAX��ŭ Ȯ��

	while (1)
	{
		int nRand = randrange(0, nQuote); // 0, 1, 2, ..., nQuote-1 ������ ���� �߻�
		puts(quotes[nRand]);
		puts("\n\n���ڿ��� �Է��ϼ���:");
		gets_s(strIn, STR_MAX - 1); // _s: safe(������); gets_s: safe gets; ���ڿ��� ������ 0 ���ڰ� ���� ��; '0'�� �ƴ� ���� 0
	}
}