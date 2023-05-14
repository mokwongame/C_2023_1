#include <stdio.h>

#define STR_MAX	(100)
#define STR_IN_MAX	(200)

void main()
{
	// ���ڿ�(���� char�� �迭)�� 1���� �迭: char�� 2���� �迭
	char quotes[][STR_MAX] =
	{
		"he greatest glory in living lies not in never falling,",
		"but in rising every time we fall.",
		"The way to get started is to quit talking and begin doing.",
		"Your time is limited,",
		"so don't waste it living someone else's life.Don't be trapped by dogma.",
		"which is living with the results of other people's thinking.",
		"If life were predictable it would cease to be life, and be without flavor.",
		"If you look at what you have in life, you'll always have more.",
		"If you look at what you don't have in life, you'll never have enough.",
		"If you set your goals ridiculously high and it's a failure,",
		"you will fail above everyone else's success.",
		"Life is what happens when you're busy making other plans.",
		"Spread love everywhere you go. Let no one ever come to you without leaving happier."
	};

	size_t nTotalSize = sizeof(quotes) / sizeof(char); // _t: typedef
	int nQuote = (int)(nTotalSize / STR_MAX);
	printf("%zd\n", nTotalSize);
	printf("%d\n", nQuote);

	// ���ڿ� ���
	for (int i = 0; i < nQuote; i++)
	{
		puts(quotes[i]); // put string
	}

	// ���ڿ� �Է�: gets() - get string
	char strIn[STR_IN_MAX]; // char 9�� �Է� ����; ���ڿ� - �������� ���� 0�� ��
	puts("���ڿ��� �Է��ϼ���.");
	gets_s(strIn, STR_IN_MAX - 1); // _s: safe(������); gets()�� �����ϰ� ���� �Լ� => gets_s()
	puts(strIn);
}