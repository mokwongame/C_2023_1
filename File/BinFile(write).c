#include <stdio.h>
#include "LibCFile.h"

void main()
{
	// c-style file pointer
	cfileptr fp = NULL; // NULL�� 0�̶� ��
	// ����(binary) ���� ����: ���� ��� ���� �ʱ�ȭ; �����(���� ������ ����)
	fp = openbinfile("myfirstfile.txt", FM_WRITE);
	if (!isvalidfile(fp))
	{
		puts("���� ������ �� �� �����ϴ�.");
		return; // ���α׷� ����
	}
	// ������ ���������� ����
	int n = 10;
	cfwriteint(fp, n); // fwrite()�� �
	cfwriteint(fp, -20);
	cfwriteint(fp, 320);
	cfwritedbl(fp, 1.234);
	cfwritedbl(fp, -12e30);

	// ���� �ݱ�: ��� ����ϰ� ���� ������ ����
	closefile(fp);
}