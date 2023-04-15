#include <stdio.h>
#include <stdlib.h> // 표준 라이브러리(standard library) 헤더 파일
#include <time.h>

void main()
{
	// 난수 발생의 초기값 설정
	srand(1000); // seed(씨앗, 종자값) for rand()
	printf("난수 발생 최대값 = %d\n\n", RAND_MAX);
	for (int i = 0; i < 20; i++) // {}는 생략 가능: 구문(;으로 끝나는 문장)이 하나만 있는 경우
	{
		int n = rand(); // 0 포함 자연수 난수 발생; 난수 발생의 최대값: RAND_MAX
		printf("n = %d\n", n);
	}

	// 난수 발생 초기화에 현재 시간을 많이 사용: time(NULL)은 초 단위로 측정한 시간(시작점이 1970년: UNIX 운영 체제가 출현한 시기)
	time_t sec = time(NULL); // time_t: typedef으로 만든 time 자료형(가명, 별명)
	printf("현재 시간 = %lld\n", sec);
	srand((unsigned int)sec); // seed(씨앗, 종자값) for rand()
	printf("난수 발생 최대값 = %d\n\n", RAND_MAX);
	for (int i = 0; i < 20; i++) // {}는 생략 가능: 구문(;으로 끝나는 문장)이 하나만 있는 경우
	{
		int n = rand(); // 0 포함 자연수 난수 발생; 난수 발생의 최대값: RAND_MAX
		printf("n = %d\n", n);
	}
}