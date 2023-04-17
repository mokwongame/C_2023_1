// 선형 리스트에서 원소 삽입하고 삭제하기 메인 함수: MainListInsertDelete.cpp

#include <stdio.h>
#include "h_ListInsertDelete.h"  // 선형 리스트에서 원소 삽입하고 삭제하기 헤더 파일

int main()
{
	int ArrayList[MAX] = { 10, 20, 40, 50, 60, 70 };

	int i = 0;  // 제어변수

	int nInsertMove = 0;          // 원소 삽입 후 이동 횟수 리턴값 저장 변수 
	const int nInsertData = 30;   // 원소 삽입 데이타

	int nDeleteMove = 0;          // 원소 삭제 후 이동 횟수 리턴값 저장 변수 
	const int nDeleteData = 30;   // 원소 삭제 데이타

	int nElementCount = 0;        // 리스트에 있는 원소의 개수
	int nSize = sizeof(ArrayList) / sizeof(ArrayList[0]); // 리스트에 있는 원소의 개수

	// 삽입 전 선형 리스트 출력
	printf("\n삽입 전 선형 리스트 : ");
	for (i = 0; i < nSize; i++)
	{
		if (ArrayList[i] != 0)
		{
			printf("%3d ", ArrayList[i]);

			nElementCount++;
		}
	}
	printf("\n원소의 갯수 : %d \n", nElementCount);

	// 선형 리스트에 원서 삽입
	nInsertMove = f_ListInsertElement(ArrayList, nElementCount, nInsertData);

	printf("\n삽입 후 선형 리스트 : ");
	for (i = 0; i <= nElementCount; i++)
	{
		printf("%3d ", ArrayList[i]);
	}
	printf("\n삽입 데이터 : %d ", nInsertData);
	printf("\n원소의 갯수 : %d ", ++nElementCount);
	printf("\n자리 이동 횟수 : %d \n", nInsertMove);

	// 선형 리스트에 원서 삭제
	nDeleteMove = f_ListDeleteElement(ArrayList, nElementCount, nDeleteData);

	if (nDeleteMove == nElementCount)
	{
		printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다.\n");
	}
	else
	{
		printf("\n삭제 후 선형 리스트 : ");

		for (i = 0; i < nElementCount - 1; i++)
		{
			if (ArrayList[i] != 0)
			{
				printf("%3d ", ArrayList[i]);
			}
		}
		printf("\n삭제 데이터 : %d ", nDeleteData);
		printf("\n원소의 갯수 : %d ", --nElementCount);
		printf("\n자리 이동 횟수 : %d \n", nDeleteMove);
	}


	return 0;
}