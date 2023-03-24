#include <stdio.h>
#include "LibCFile.h"

void main()
{
	// c-style file pointer
	cfileptr fp = NULL; // NULL은 0이란 뜻
	// 텍스트 파일 열기: 현재 파일을 건드리지 않고 읽기
	fp = openfile("myfirstfile.txt", FM_READ);
	if (!isvalidfile(fp))
	{
		puts("현재 파일을 열 수 없습니다.");
		return; // 프로그램 종료
	}
	// 파일이 정상적으로 열림
	//char c = cfgetc(fp); // 문자 하나 읽기; fgetc() 같은 기능
	// 영문, 숫자 = 1 바이트, 한글 = 2 바이트
	int c = cfgetc(fp);
	//putchar(c);
	// 파일에는 반드시 끝 문자를 표시: EOF
	int eof = EOF;
	while (!iseof(c))
	{
		putchar(c);
		c = cfgetc(fp);
	}
	puts("=> 여기가 파일 끝");
	// 파일 닫기: 모두 사용하고 파일 접근을 종료
	closefile(fp);
}