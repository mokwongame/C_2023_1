#include "../MgHead/LibConsole.h"

void main()
{
	// 정수 입력
	puts("정수 입력");
	int i = getint();
	putintln(i);

	// 실수 입력
	puts("실수 입력");
	double x = getdbl();
	putdblln(x);

	// 알파벳이나 숫자 입력
	puts("알파벳이나 숫자 입력: ");
	char ch = _getch();
	_putch(ch); putln();

	// 임의 키
	puts("임의 키: ");
	int key = getkey();
	putintln(key);

	// 키 입력 대기
	puts("키 입력 대기");
	waitkey();
	putintln(getkey());

	// 키 누름을 비동기로 확인
	puts("← 누름을 비동기로 확인");
	while (1)
	{
		putintln(iskeydown(VK_LEFT));
		sleepcon(1);
	}
}