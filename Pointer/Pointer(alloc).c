#include <stdio.h>
#include <stdlib.h> // 표준 라이브러리(standard library): 라이브러리(함수 집합)

typedef int* intptr;

intptr makearray(int arsize)
{
	intptr ptr = (int*)malloc(arsize * sizeof(int));
	return ptr;
}

intptr makecleararray(int arsize)
{
	intptr ptr = (int*)calloc(arsize, sizeof(int)); // malloc보다 실행 시간이 더 걸림
	return ptr;
}

void main()
{
	// 정적(static) 메모리: 정지(컴파일할 때 메모리 할당); 실행 파일을 만드는 단계
	int ars[] = { 1, 2, 3, 4, 5 };

	// 동적(dynamic) 메모리: 동작(실행시간(runtime)할 때 메모리 할당); 실행 파일을 실행한 경우
	intptr arptr = NULL; // int 자료형의 저장 공간: 4 바이트
	int arsize = 100;
	void* pvoid = NULL; // 자료형을 정하지 않은 포인터; 일반적인 자료형의 포인터 저장 공간
	arptr = (int*)malloc(arsize * sizeof(int)); // 메모리 할당(memory allocation): 읽을 때는 맬락; 바이트 단위 할당
	*arptr = 20;
	printf("%d\n", *arptr);
	arptr[30] = 100;
	printf("%d\n", arptr[30]);

	// malloc의 주의점: 다 쓰고 나면 꼭 메모리 해제
	free(arptr);

	arptr = makearray(200);
	*arptr = 20;
	printf("%d\n", *arptr);
	arptr[30] = 100;
	printf("%d\n", arptr[30]);
	printf("[100] = %d\n", arptr[100]);
	free(arptr);

	// 메모리 할당, 초기화(0)까지 해주는 함수: calloc(memory clear and allocation)
	arptr = makecleararray(500);
	*arptr = 20;
	printf("%d\n", *arptr);
	arptr[300] = 100;
	printf("%d\n", arptr[300]);
	printf("[100] = %d\n", arptr[100]);
	//free(arptr);

	// 메모리 크기 조정: realloc
	intptr arptr310 = realloc(arptr, 310 * sizeof(int)); // int 500 -> int 300
	printf("%d\n", *arptr310);
	printf("%d\n", arptr310[300]);
	printf("[100] = %d\n", arptr310[100]);
	free(arptr310);
}