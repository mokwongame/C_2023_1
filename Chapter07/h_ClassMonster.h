#pragma once
#include "h_ClassCanvas.h"  // Canvas Ŭ����
#define DIM 40

class ClassMonster
{
	string strName, strIcon;               // ���� �̸��� ȭ�� ��¿� ������
	int nPositionX, nPositionY, nItem;	   // ���� ��ġ�� ���� ������ ��

	// ������ ��ġ�� ���� �ܺ��̸� �������� �ٽ� �ű�� �Լ�
    //   ������ �̵��ϸ� ������ ��ġ�� ���� �ܺΰ� �� �� ����
    //   ���Ͱ� �̵��� �� �ִ� �ִ��� �����Ͽ� ������ ������ �ʵ��� ��
	void f_Clip(int xMax, int yMax)
	{
		if (nPositionX < 0)
		{
			nPositionX = 0;
		}

		if (nPositionX >= xMax)
		{
			nPositionX = xMax - 1;
		}

		if (nPositionY < 0)
		{
			nPositionY = 0;
		}

		if (nPositionY >= yMax)
		{
			nPositionY = yMax - 1;
		}

	}

	// �̵��� ĭ�� �������� ������ �̰��� �Ծ�� �Ѵ�. 
    //   �������� ������ �Ӽ��� nItem�� 1 ������
	void f_Eat(int map[DIM][DIM])
	{
		if (map[nPositionY][nPositionX] == 1)
		{
			map[nPositionY][nPositionX] = 0;

			nItem++;
		}
	}

public:
	// �����ڴ� ������ �̸��� ������, ���� ��ġ�� �Ű������� �޾� ����
	ClassMonster(string n = "������", string i = "��", int px = 0, int py = 0)
		: strName(n), strIcon(i), nPositionX(px), nPositionY(py), nItem(0) {}

	// �Ҹ��ڿ����� ���Ͱ� ������ٴ� �޼����� ���
	~ClassMonster() { cout << "\t" << strName << strIcon << " �������ϴ�~~~\n"; }

	// ���͸� ĵ������ ����Ѵ�. �̰��� ������ �������� ĵ������ ���� ��ġ�� �׸���.
	void f_Draw(ClassCanvas& canvas)
	{
		canvas.f_Draw(nPositionX, nPositionY, strIcon);
	}

	// ���� ������ �̵����� ������ ����Ͽ� ������ 8ĭ ���� �ϳ��� ������
	void f_Move(int map[DIM][DIM], int xMax, int yMax)
	{
		switch (rand() % 8)
		{
			case 0: nPositionY--; break;

			case 1: nPositionX++; nPositionY--; break;

			case 2: nPositionX++; break;

			case 3: nPositionX++; nPositionY++; break;

			case 4: nPositionY++; break;

			case 5: nPositionX--; nPositionY++; break;

			case 6: nPositionX--; break;

			case 7: nPositionX--; nPositionY--; break;
		}

		f_Clip(xMax, yMax);

		f_Eat(map);
	}

	// ���� ������ ������ ����Ѵ�.
    //   ������ �̸�, �����ܰ� ���� �������� ���� �����
	void f_Print()
	{
		cout << "\t" << strName << strIcon << ":" << nItem << endl;
	}


};

