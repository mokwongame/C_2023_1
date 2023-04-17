#include <stdio.h>
#include <conio.h>

void main()
{
	char cExit = 'x';
	// 무한 루프
	while (1)
	{
		char c = _getch(); // char 하나 입력; 출력 X
		if (c == cExit) break; // break는 현재 반복되는 코드 블록을 깨기(break), 종료하기
		_putch(c); // c를 출력
	}
	puts("\n프로그램을 종료합니다.");
}