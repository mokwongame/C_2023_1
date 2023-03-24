#include <stdio.h>
#include "LibCFile.h"

void main()
{
	// c-style file pointer
	cfileptr fp = NULL; // NULL�� 0�̶� ��
	// ����(binary) ���� ����: ���� ��� ���� �ʱ�ȭ; �����(���� ������ ����)
	fp = openbinfile("myfirstfile.txt", FM_READ);
	if (!isvalidfile(fp))
	{
		puts("���� ������ �� �� �����ϴ�.");
		return; // ���α׷� ����
	}
	// ������ ���������� ����
	int n = cfreadint(fp); // fread() �Լ��� �
	printf("%d\n", n);
	n = cfreadint(fp);
	printf("%d\n", n);
	n = cfreadint(fp);
	printf("%d\n", n);
	double x = cfreaddbl(fp);// fread() �Լ��� �
	printf("%g\n", x);
	x = cfreaddbl(fp);
	printf("%g\n", x);
	// ���� �ݱ�: ��� ����ϰ� ���� ������ ����
	closefile(fp);
}