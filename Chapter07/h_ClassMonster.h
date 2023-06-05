#pragma once
#include "h_ClassCanvas.h"  // Canvas 클래스
#define DIM 40

class ClassMonster
{
	string strName, strIcon;               // 몬스터 이름과 화면 출력용 아이콘
	int nPositionX, nPositionY, nItem;	   // 현재 위치와 먹은 아이템 수

	// 현재의 위치가 맵의 외부이면 안쪽으로 다시 옮기는 함수
    //   무작위 이동하면 몬스터의 위치가 맵의 외부가 될 수 있음
    //   몬스터가 이동할 수 있는 최댓값을 설정하여 밖으로 나가지 않도록 함
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

	// 이동한 칸에 아이템이 있으면 이것을 먹어야 한다. 
    //   아이템을 먹으면 속성인 nItem이 1 증가함
	void f_Eat(int map[DIM][DIM])
	{
		if (map[nPositionY][nPositionX] == 1)
		{
			map[nPositionY][nPositionX] = 0;

			nItem++;
		}
	}

public:
	// 생성자는 몬스터의 이름과 아이콘, 생성 위치를 매개변수로 받아 설정
	ClassMonster(string n = "나괴물", string i = "※", int px = 0, int py = 0)
		: strName(n), strIcon(i), nPositionX(px), nPositionY(py), nItem(0) {}

	// 소멸자에서는 몬스터가 사라진다는 메세지만 출력
	~ClassMonster() { cout << "\t" << strName << strIcon << " 물러갑니다~~~\n"; }

	// 몬스터를 캔버스에 출력한다. 이것은 몬스터의 아이콘을 캔버스의 몬스터 위치에 그린다.
	void f_Draw(ClassCanvas& canvas)
	{
		canvas.f_Draw(nPositionX, nPositionY, strIcon);
	}

	// 몬스터 무작위 이동에는 난수를 사용하여 인접한 8칸 중의 하나로 움직임
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

	// 현재 몬스터의 정보를 출력한다.
    //   몬스터의 이름, 아이콘과 먹은 아이템의 수를 출력함
	void f_Print()
	{
		cout << "\t" << strName << strIcon << ":" << nItem << endl;
	}


};

