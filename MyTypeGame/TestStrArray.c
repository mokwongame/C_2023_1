#include <stdio.h>	// ǥ�� ������� ���� ��� ����
#include <string.h> // ���ڿ� ó�� ���� ��� ����

#define STR_MAX	(500)	// ���ڿ��� ���� ������ �ִ밪

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

	char strIn[STR_MAX]; // char�� �迭 = ���ڿ�; ���ڿ� �Է��� �ޱ� ���� �޸� ������ STR_MAX��ŭ Ȯ��
	puts("\n\n���ڿ��� �Է��ϼ���:");
	gets_s(strIn, STR_MAX-1); // _s: safe(������); gets_s: safe gets; ���ڿ��� ������ 0 ���ڰ� ���� ��; '0'�� �ƴ� ���� 0
	puts(strIn);
}