#include <stdio.h>
#include <conio.h> // console I/O: 콘솔 입출력

void main()
{
	char ch = 'G';
	printf("ch = %c\n", ch);
	putchar(ch); // char를 콘솔에 놓다(출력하다); 문자 하나 출력
	// put 반대말: get(얻다, 문자 입력)
	//char chin = (char)getchar(); // stdio.h: 마지막에 Enter 필요; 입력한 글자 출력
	//char chin = _getch(); // conio.h에 정의: Enter 불필요, 입력한 글자 출력 없음
	//_putch(chin); // 한글자 출력; putchar()와 동일
	char chin = _getche(); // _getch()와 _putch() 합친 기능: e는 echo 의미
	printf("\n 입력한 ch = %c\n", chin);
}