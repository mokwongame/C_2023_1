#include <stdio.h> // <>: C 컴파일러가 기본적으로 열람하는 폴더에서 검색
#include <conio.h> // Console I/O(input/output): 콘솔 입출력을 지원하는 헤더 파일
#include "LibConsole.h" // "": 현재 폴더를 기준으로 해서 검색

void main()
{
	/*int i = 10;
	printf("%d\n", i); // output(주소 X); write(저수준 출력); print(고수준 출력)

	int j; // 변수 선언: 자료형 변수명(저장 위치(주소: address)를 찾아가기 위한 이름: 프로그래머); 변수: 주소와 값
	// input(주소 필요); read(저수준 입력); input(고수준 입력)
	scanf_s("%d", &j); // scan: 주사하다; scanf = scan formatted; scanf_s: safe scanf; &(address): &j = j의 주소
	printf("%d\n", j);*/

	/*printf("문자 하나 입력(출력 X):");
	// 함수명이 _, __로 시작하는 의미: C 컴파일러가 예약 수준으로 쓰는 함수; 사용하기 위험한 함수; 아주 저수준 함수
	char ch = _getch(); // get char: 문자 하나 입력만, 출력 X
	_putch(ch); // put char: 문자 하나 출력; puts(): 문자열 출력

	printf("\n문자 하나 입력(출력 O):");
	char ch2 = _getche(); // get char with echo: 문자 하나 입력만, 출력 O*/

	/*printf("정수 하나 입력:");
	int i = getint();
	putint(i);*/

	/*printf("실수(double, dbl) 하나 입력:");
	double x = getdbl();
	putdbl(x);*/

	settextcol(RED); // 글자색 변경; 16가지 색깔 지원: 반면에 윈도우 256*256*256
	puts("문자열 출력"); // 문자열(string): 문자 배열(char array) = 문자 여러 개를 사용
	setbackcol(YELLOW); // 배경색 변경
	puts("Mokwon Game"); // 문자열(string): 문자 배열(char array) = 문자 여러 개를 사용
	setbacktextcol(BLUE, GREEN);
	puts("목원대 게임SW공학과");

	// 콘솔 위치 이동: 영어는 한 글자가 한 칸, 한글은 한 글자가 두 칸
	gotoxy(2, 1); // 콘솔 커서 이동: (x, y) = x축과 y축으로 이동; 원점 = 왼쪽, 가장 위
	// x축: 왼쪽 -> 오른쪽 갈 때 커짐(수학과 같은 방향); y축: 위 -> 아래로 갈 때 커짐(수학과 반대 방향)
	puts("커서 이동");

	// 콘솔 기다리기, 잠재우기
	hidecursor(); // 커서 감추기
	//sleepcon(2); // 2초 기다리기
	setbacktextcol(BLACK, GRAY); // 앞으로 쓸 글자 특성 변경
	puts("Mokwon Game");
	showcursor(); // 커서 보이기
	puts("커서 보이기");
	//sleepcon(1.5); // 1.5초 기다리기

	// 기존 글자색과 배경색 변경
	writetextcol(0, 0, SKYBLUE); // 기존 글자 특성 변경
	writebackcol(2, 0, VIOLET);
	puts("현재 색깔 출력"); // set 함수의 영향 받음; write 함수에는 영향을 받지 않음
	writebacktextcol(2, 2, WHITE, DARK_SKYBLUE);

	// 전체 콘솔 배경색과 글자색 변경
	setconcol(WHITE, BLACK);
}