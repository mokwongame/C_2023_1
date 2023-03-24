#include <stdio.h>
#include "LibCFile.h"

void main()
{
	// c-style file pointer
	cfileptr fp = NULL; // NULL은 0이란 뜻
	// 이진(binary) 파일 열기: 파일 사용 전에 초기화; 덮어쓰기(기존 내용은 삭제)
	fp = openbinfile("myfirstfile.txt", FM_READ);
	if (!isvalidfile(fp))
	{
		puts("현재 파일을 열 수 없습니다.");
		return; // 프로그램 종료
	}
	// 파일이 정상적으로 열림
	int n = cfreadint(fp); // fread() 함수와 등가
	printf("%d\n", n);
	n = cfreadint(fp);
	printf("%d\n", n);
	n = cfreadint(fp);
	printf("%d\n", n);
	double x = cfreaddbl(fp);// fread() 함수와 등가
	printf("%g\n", x);
	x = cfreaddbl(fp);
	printf("%g\n", x);
	// 파일 닫기: 모두 사용하고 파일 접근을 종료
	closefile(fp);
}