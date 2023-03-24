#include <stdio.h>
#include "LibCFile.h"

void main()
{
	// c-style file pointer
	cfileptr fp = NULL; // NULL�� 0�̶� ��
	// �ؽ�Ʈ ���� ����: ���� ������ �ǵ帮�� �ʰ� �б�
	fp = openfile("myfirstfile.txt", FM_READ);
	if (!isvalidfile(fp))
	{
		puts("���� ������ �� �� �����ϴ�.");
		return; // ���α׷� ����
	}
	// ������ ���������� ����
	//char c = cfgetc(fp); // ���� �ϳ� �б�; fgetc() ���� ���
	// ����, ���� = 1 ����Ʈ, �ѱ� = 2 ����Ʈ
	int c = cfgetc(fp);
	//putchar(c);
	// ���Ͽ��� �ݵ�� �� ���ڸ� ǥ��: EOF
	int eof = EOF;
	while (!iseof(c))
	{
		putchar(c);
		c = cfgetc(fp);
	}
	puts("=> ���Ⱑ ���� ��");
	// ���� �ݱ�: ��� ����ϰ� ���� ������ ����
	closefile(fp);
}