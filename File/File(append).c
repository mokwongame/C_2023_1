#include <stdio.h>
#include "LibCFile.h"

void main()
{
	// c-style file pointer
	cfileptr fp = NULL; // NULL�� 0�̶� ��
	// �ؽ�Ʈ ���� ����: ���� ��� ���� �ʱ�ȭ; �����(���� ������ ����)
	fp = openfile("myfirstfile.txt", FM_APPEND);
	if (!isvalidfile(fp))
	{
		puts("���� ������ �� �� �����ϴ�.");
		return; // ���α׷� ����
	}
	// ������ ���������� ����
	cfputs(fp, "\n[���ݺ��ʹ� �߰��� ����]\n");
	cfputc(fp, '1');
	cfputc(fp, '2');
	// ���� �ݱ�: ��� ����ϰ� ���� ������ ����
	closefile(fp);
}