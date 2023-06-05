#include <stdio.h>
#include "LibCFile.h"

void main()
{
	cfileptr fp = NULL;
	fp = openfile("test.txt", FM_READ);
	char ch = cfgetc(fp); // C file pointer, fp를 이용해 char 하나 읽기
	putchar(ch);
	ch = cfgetc(fp);
	//putchar(ch);
	// EOF: end of file; 파일의 가장 끝을 표시하는 문자
	int eof = EOF;
	while (!iseof(ch)) // !: not(부정)
	{
		putchar(ch);
		ch = cfgetc(fp);
	}
	closefile(fp);
}