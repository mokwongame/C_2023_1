/*-------------------------------------------------------------------
LibConsole.h: Library for Console Applications
Author: ictplusud@gmail.com (Department of Game SW Engineering, Mokwon University)

Copyright �� 2023-Forever Mokwon Game, Korea.
All Rights Reserved. Personal and non-commercial purpose only.
-------------------------------------------------------------------*/

#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <Windows.h>

/*-------------------------------------------------------------------
Definition of Data or Types
-------------------------------------------------------------------*/
// ������: �ܼ� ����
enum CON_COLOR {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VOILET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};

/*-------------------------------------------------------------------
Input Functions
-------------------------------------------------------------------*/
// ���� �Է� ���
int getint()
{
	int i;
	scanf_s("%d", &i);
	return i;
}

// �Ǽ� �Է� ���
double getdbl()
{
	double x;
	scanf_s("%lg", &x);
	return x;
}

// Ű���忡 �ִ� ��� Ű�� �Է� ����: �ܼ� ���ĺ��̳� ���ڴ� _getch()�� �̿�
int getkey()
{
	char key = _getch();
	if (key > 0) return (int)key;
	else
	{
		int key1 = key;
		if (key1 < 0) key1 += 256;
		int key2 = _getch();
		return (key2 << 8) + key1;
	}
}

// ���� Ű�� ������ ���¸� �񵿱�(asynchronous)�� ����: Ű �Է��� ��ٸ��� �ʰ� �ٷ� ��ȯ; Ű�� ���� Ű(virtual key); ���� Ű�� WinUser.h�� ���ǵ�
bool iskeydown(int key)
{
	return GetAsyncKeyState(key) & 0x8000;
}

// Ű �Է±��� ��ٸ���
void waitkey()
{
	while (!_kbhit());
}

/*-------------------------------------------------------------------
Output Functions
-------------------------------------------------------------------*/
// double ���
void putdbl(double x)
{
	printf("%g", x);
}

// double ��� + �� ����
void putdblln(double x)
{
	printf("%g\n", x);
}

// int ���
void putint(int n)
{
	printf("%d", n);
}

// int ��� + �� ����
void putintln(int n)
{
	printf("%d\n", n);
}

// �� ����
void putln()
{
	printf("\n");
}

/*-------------------------------------------------------------------
Console Functions
-------------------------------------------------------------------*/
// Ŀ�� ũ�� ���: 1~100 ���� ��(%�� ����)
int getcursorsize()
{
	const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	GetConsoleCursorInfo(handle, &info);
	return (int)info.dwSize;
}

// Ŀ�� ���ü� ���: ���̸� true, �� ���̸� false
bool getcursorview()
{
	const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	GetConsoleCursorInfo(handle, &info);
	return (bool)info.bVisible;
}

// �ܼ��� ���� ������ ���ڻ� ���: ����� ���� �ڵ�(0~255 = backcol << 4 + textcol)
int getconbacktextcol()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	return (int)(csbi.wAttributes % 256);
}

// �ܼ��� ���� ���� ���: ����� ���� �ڵ�(0~15)
int getconbackcol()
{
	int backtextcol = getconbacktextcol();
	return backtextcol >> 4;
}

// �ܼ��� ���� ���ڻ� ���: ����� ���� �ڵ�(0~15)
int getcontextcol()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	return (int)(csbi.wAttributes % 16);
}

// Ŀ�� ũ�� ����: �⺻�� 25; 1~100���� ����(%�� ����)
void setcursorsize(int size)
{
	CONSOLE_CURSOR_INFO info;
	info.bVisible = (BOOL)getcursorview();
	info.dwSize = (DWORD)size;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

// ���� �ٲٱ�: �⺻�� BLACK
void setbackcol(int color)
{
	int textcol = getcontextcol();
	WORD backtextcol = (color << 4) | textcol;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backtextcol);
}

// ������ ���ڻ� �ٲٱ�
void setbacktextcol(int backcol, int textcol)
{
	WORD backtextcol = (backcol << 4) | textcol;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backtextcol);
}

// ���ڻ� �ٲٱ�: �⺻�� GRAY
void settextcol(int color)
{
	int backcol = getconbackcol();
	WORD backtextcol = (backcol << 4) | color;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backtextcol);
}

void setconcol(int backcol, int textcol)
{
	char cmd[] = "color 00";
	char back[2], text[2];
	sprintf_s(back, 2, "%X", backcol);
	sprintf_s(text, 2, "%X", textcol);
	cmd[6] = back[0];
	cmd[7] = text[0];
	system(cmd);
}

// clear screen: ȭ�� �����
void clrscr()
{
	system("cls");
}

// �ܼ� ��� ����
void pausecon()
{
	system("pause");
}

// �ܼ��� sleeptime(����: ��) ���� �� ����
void sleepcon(double sleeptime)
{
	int timems = (int)(sleeptime * 1000 + 0.5); // �ݿø�
	Sleep(timems);
}

// (x, y) ��ġ�� Ŀ�� �̵�: x, y�� 0���� ����
void gotoxy(int x, int y)
{
	COORD pos;
	pos.X = (SHORT)x, pos.Y = (SHORT)y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// Ŀ�� ���߱�
void hidecursor()
{
	CONSOLE_CURSOR_INFO info;
	info.bVisible = FALSE;
	info.dwSize = (DWORD)getcursorsize();
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

// Ŀ�� ���̱�
void showcursor()
{
	CONSOLE_CURSOR_INFO info;
	info.bVisible = TRUE;
	info.dwSize = (DWORD)getcursorsize();
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

// (x, y) ��ġ�� attribute ���: �����ϸ� -1�� ��ȯ
int readconattr(int x, int y)
{
	WORD attr;
	COORD pos;
	DWORD read;
	pos.X = (SHORT)x, pos.Y = (SHORT)y;
	ReadConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &attr, 1, pos, &read);
	return (read == 1) ? (int)attr : -1;
}

// (x, y) ��ġ�� ������ color�� �ٲٱ�: �����ϸ� false�� ��ȯ
bool writebackcol(int x, int y, int color)
{
	WORD attr = readconattr(x, y);
	WORD textcol = attr % 16;
	WORD backtextcol = (color << 4) + textcol;
	attr = ((attr >> 8) << 8) + backtextcol;
	COORD pos;
	DWORD written;
	pos.X = (SHORT)x, pos.Y = (SHORT)y;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &attr, 1, pos, &written);
	return (written == 1) ? true : false;
}

// (x, y) ��ġ�� ������ ���ڻ� �ٲٱ�: �����ϸ� false�� ��ȯ
bool writebacktextcol(int x, int y, int backcol, int textcol)
{
	WORD attr = readconattr(x, y);
	WORD backtextcol = (backcol << 4) | textcol;
	attr = ((attr >> 8) << 8) + backtextcol;
	COORD pos;
	DWORD written;
	pos.X = (SHORT)x, pos.Y = (SHORT)y;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &attr, 1, pos, &written);
	return (written == 1) ? true : false;
}

// (x, y) ��ġ�� ���ڻ��� color�� �ٲٱ�: �����ϸ� false�� ��ȯ
bool writetextcol(int x, int y, int color)
{
	WORD attr = readconattr(x, y);
	attr = ((attr >> 4) << 4) | color;
	COORD pos;
	DWORD written;
	pos.X = (SHORT)x, pos.Y = (SHORT)y;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &attr, 1, pos, &written);
	return (written == 1) ? true : false;
}

/*-------------------------------------------------------------------
Console Output Functions
-------------------------------------------------------------------*/
// (x, y)�� �̵��ؼ� ���ڿ� s ���
void putsxy(int x, int y, const char* s)
{
	gotoxy(x, y);
	puts(s);
}
