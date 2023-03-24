#include <stdio.h>
#include "LibCFile.h"

void main()
{
	// c-style file pointer
	cfileptr fp = NULL; // NULL은 0이란 뜻
	// 텍스트 파일 열기: 파일 사용 전에 초기화; 덮어쓰기(기존 내용은 삭제)
	fp = openfile("myfirstfile.txt", FM_APPEND);
	if (!isvalidfile(fp))
	{
		puts("현재 파일을 열 수 없습니다.");
		return; // 프로그램 종료
	}
	// 파일이 정상적으로 열림
	cfputs(fp, "\n[지금부터는 추가한 내용]\n");
	cfputc(fp, '1');
	cfputc(fp, '2');
	// 파일 닫기: 모두 사용하고 파일 접근을 종료
	closefile(fp);
}