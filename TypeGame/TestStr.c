#include <stdio.h>

#define STR_MAX	(100)
#define STR_IN_MAX	(200)

void main()
{
	// 문자열(문자 char의 배열)의 1차원 배열: char의 2차원 배열
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

	// 문자열 출력
	for (int i = 0; i < nQuote; i++)
	{
		puts(quotes[i]); // put string
	}

	// 문자열 입력: gets() - get string
	char strIn[STR_IN_MAX]; // char 9개 입력 가능; 문자열 - 마지막은 숫자 0이 들어감
	puts("문자열을 입력하세요.");
	gets_s(strIn, STR_IN_MAX - 1); // _s: safe(안전한); gets()를 안전하게 만든 함수 => gets_s()
	puts(strIn);
}