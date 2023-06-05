#pragma once
// Canvas 클래스 : ClassCanvas.h

// cout() : 프로그램 사용자 화면에 무언가를 출력하기 위한 함수
//   cout 을 사용하려면 iostream 을 include
//   변수의 값을 출력하고 싶으면 << (변수) << 의 형태로 작성
//   문자나 문자열을 출력하고 싶으면 << "(문자열)" << 의 형태로 작성
//   줄바꿈을 사용하고 싶으면 endl를 사용하거나 이스케이프 시퀀스(\n)를 사용
#include <iostream>

#include <string>
#define MAXLINES 100
using namespace std;


class ClassCanvas
{
	string line[MAXLINES];	// 화면 출력을 위한 문자열
	int xMax, yMax;		    // 맵의 크기

public:
	// 생성자와 소멸자 : 생성자는 캔버스의 크기를 받아 설정. 소멸자는 반드시 있어야 할 필요는 없으므로 생략
    // 클래스명(ClassCanvas)과 생성자명(ClassCanvas)은 반드시 같아야함
	ClassCanvas(int nx = 10, int ny = 10) : xMax(nx), yMax(ny)
	{
		for (int y = 0; y < yMax; y++)
		{
			line[y] = string(xMax * 2, ' ');
		}
	}

	// 캔버스 임의의 위치(x,y)에 있는 화소 값을 val로 변경하는 함수
	void f_Draw(int x, int y, string val)
	{
		if (x >= 0 && y >= 0 && x < xMax && y < yMax)
		{
			line[y].replace(x * 2, 2, val);
		}
	}

		// 캔버스 임의의 위치(x,y)에 있는 화소 값을 val로 변경하는 함수
	void f_Draw(int x, int y, string val) 
	{
		if (x >= 0 && y >= 0 && x < xMax && y < yMax)
		{
			line[y].replace(x * 2, 2, val);
		}
			
	}

	// 캔버스의 모든 화소값을 val로 변경하는 함수
	void f_Clear(string val = ". ")  // 디폴트 매개변수: 공백 2개
	{
		for (int y = 0; y < yMax; y++)
		{
			for (int x = 0; x < xMax; x++)
			{
				f_Draw(x, y, val);
			}
		}
	}


	// 현재의 캔버스를 모니터에 한꺼번에 출력하는 함수
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

