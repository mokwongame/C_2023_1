#include <stdio.h> // <���ϸ�>: Visual Studio ���� ������ �ִ� ��� ����
#include "LibConsole.h" // "���ϸ�": ���� ������ �ִ� ��� ����

void main()
{
	puts("����� ����SW");
	settextcol(DARK_SKYBLUE); // ���ڻ� ����; ���� ����� LibConsole.h�� ������ ���(enum)�� ����
	puts("����� ����SW");
	setbackcol(YELLOW); // ���(background)�� ����; ���� ����� LibConsole.h�� ������ ���(enum)�� ����
	puts("����� ����SW");
}