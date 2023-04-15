#include <stdio.h>
#include <time.h>
#include <math.h> // 수학(math) 함수가 정의된 헤더 파일
#include "LibConsole.h"

void main()
{
	// clock_t: clock을 typedef으로 만든 새로운 자료형(가명, 별명)
	clock_t msec = clock(); // clock()은 프로그램이 시작한 시간을 0으로 해서 msec 단위로 시작을 반환
	printf("시작 시간(ms) = %d\n", msec);
	double ans = 0.;
	for (int i = 0; i < 100000; i++) ans += sin(i);
	msec = clock();
	printf("종료 시간(ms) = %d\n", msec);

	clock_t start = clock();
	sleepcon(1.0); // 1.0초 동안 정지
	clock_t elapse = clock() - start; // 경과한 시간 측정
	printf("경과 시간(ms) = %d\n", elapse);
}