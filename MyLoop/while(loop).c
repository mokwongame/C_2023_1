#include <stdio.h>
#include <conio.h>

void main()
{
	char cExit = 'x';
	// ���� ����
	while (1)
	{
		char c = _getch(); // char �ϳ� �Է�; ��� X
		if (c == cExit) break; // break�� ���� �ݺ��Ǵ� �ڵ� ����� ����(break), �����ϱ�
		_putch(c); // c�� ���
	}
	puts("\n���α׷��� �����մϴ�.");
}