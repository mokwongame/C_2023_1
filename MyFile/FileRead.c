#include <stdio.h>
#include "LibCFile.h"

void main()
{
	cfileptr fp = NULL;
	fp = openfile("test.txt", FM_READ);
	char ch = cfgetc(fp); // C file pointer, fp�� �̿��� char �ϳ� �б�
	putchar(ch);
	ch = cfgetc(fp);
	//putchar(ch);
	// EOF: end of file; ������ ���� ���� ǥ���ϴ� ����
	int eof = EOF;
	while (!iseof(ch)) // !: not(����)
	{
		putchar(ch);
		ch = cfgetc(fp);
	}
	closefile(fp);
}