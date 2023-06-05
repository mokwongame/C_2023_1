#include <stdio.h>
#include "LibCFile.h"

void main()
{
	cfileptr fp = NULL; // cfileptr: C file pointer; �����͸� NULL�� �ʱ�ȭ; null(����) -> 0
	//fp = openfile("test.txt", FM_WRITE); // file�� �ʱ�ȭ�ؼ� �ٽ� ����
	fp = openfile("test.txt", FM_APPEND); // ���� file�� �߰��ؼ� �ٿ�����(append)
	cfputc(fp, 'a'); // putc with cfileptr: cfileptr �̿��� char�� put(����)
	cfputc(fp, 'b');
	cfputc(fp, 'c');
	cfputs(fp, "\nMokwon Game\n"); // puts with cfileptr: cfileptr �̿��ؼ� string�� put(����)
	cfputs(fp, "\n��� ����\n"); // char�δ� �ѱ� ���Ⱑ �Ұ���; string���δ� �ѱ� ���� ����
	closefile(fp);
}