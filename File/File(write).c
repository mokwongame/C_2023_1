#include <stdio.h>
#include "LibCFile.h"

void main()
{
	// c-style file pointer
	cfileptr fp = NULL; // NULL�� 0�̶� ��
	// �ؽ�Ʈ ���� ����: ���� ��� ���� �ʱ�ȭ; �����(���� ������ ����)
	fp = openfile("myfirstfile.txt", FM_WRITE);
	if (!isvalidfile(fp))
	{
		puts("���� ������ �� �� �����ϴ�.");
		return; // ���α׷� ����
	}
	// ������ ���������� ����
	cfputc(fp, 'a'); // fputc() �Լ��� �
	cfputc(fp, 'b');
	cfputc(fp, 'c');
	cfputs(fp, "\nMokwon\n"); // fputs()�� �
	cfputs(fp, "��� ����SW���а�\n"); // �ѱ��� fputs() ���

	// ���� �ݱ�: ��� ����ϰ� ���� ������ ����
	closefile(fp);
}