#pragma once
// Canvas Ŭ���� : ClassCanvas.h

// cout() : ���α׷� ����� ȭ�鿡 ���𰡸� ����ϱ� ���� �Լ�
//   cout �� ����Ϸ��� iostream �� include
//   ������ ���� ����ϰ� ������ << (����) << �� ���·� �ۼ�
//   ���ڳ� ���ڿ��� ����ϰ� ������ << "(���ڿ�)" << �� ���·� �ۼ�
//   �ٹٲ��� ����ϰ� ������ endl�� ����ϰų� �̽������� ������(\n)�� ���
#include <iostream>

#include <string>
#define MAXLINES 100
using namespace std;


class ClassCanvas
{
	string line[MAXLINES];	// ȭ�� ����� ���� ���ڿ�
	int xMax, yMax;		    // ���� ũ��

public:
	// �����ڿ� �Ҹ��� : �����ڴ� ĵ������ ũ�⸦ �޾� ����. �Ҹ��ڴ� �ݵ�� �־�� �� �ʿ�� �����Ƿ� ����
    // Ŭ������(ClassCanvas)�� �����ڸ�(ClassCanvas)�� �ݵ�� ���ƾ���
	ClassCanvas(int nx = 10, int ny = 10) : xMax(nx), yMax(ny)
	{
		for (int y = 0; y < yMax; y++)
		{
			line[y] = string(xMax * 2, ' ');
		}
	}

	// ĵ���� ������ ��ġ(x,y)�� �ִ� ȭ�� ���� val�� �����ϴ� �Լ�
	void f_Draw(int x, int y, string val)
	{
		if (x >= 0 && y >= 0 && x < xMax && y < yMax)
		{
			line[y].replace(x * 2, 2, val);
		}
	}

		// ĵ���� ������ ��ġ(x,y)�� �ִ� ȭ�� ���� val�� �����ϴ� �Լ�
	void f_Draw(int x, int y, string val) 
	{
		if (x >= 0 && y >= 0 && x < xMax && y < yMax)
		{
			line[y].replace(x * 2, 2, val);
		}
			
	}

	// ĵ������ ��� ȭ�Ұ��� val�� �����ϴ� �Լ�
	void f_Clear(string val = ". ")  // ����Ʈ �Ű�����: ���� 2��
	{
		for (int y = 0; y < yMax; y++)
		{
			for (int x = 0; x < xMax; x++)
			{
				f_Draw(x, y, val);
			}
		}
	}


	// ������ ĵ������ ����Ϳ� �Ѳ����� ����ϴ� �Լ�
	void f_Print(const char* title = "<My Canvas>")
	{
		system("cls");

		cout << title << endl;

		for (int y = 0; y < yMax; y++)
		{
			cout << line[y] << endl;
		}

		cout << endl;
	}


};

