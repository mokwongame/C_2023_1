#include <stdio.h>
#include "LibCFile.h"

void main()
{
	cfileptr fp = NULL; // cfileptr: C file pointer; 포인터를 NULL로 초기화; null(없음) -> 0
	//fp = openfile("test.txt", FM_WRITE); // file을 초기화해서 다시 쓰기
	fp = openfile("test.txt", FM_APPEND); // 기존 file에 추가해서 붙여쓰기(append)
	cfputc(fp, 'a'); // putc with cfileptr: cfileptr 이용해 char를 put(쓰다)
	cfputc(fp, 'b');
	cfputc(fp, 'c');
	cfputs(fp, "\nMokwon Game\n"); // puts with cfileptr: cfileptr 이용해서 string을 put(쓰다)
	cfputs(fp, "\n목원 게임\n"); // char로는 한글 쓰기가 불가능; string으로는 한글 쓰기 가능
	closefile(fp);
}