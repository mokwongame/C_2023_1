
// 선형 리스트에서 원소 삽입하고 삭제하기 함수들: f_ListInsertDelete.cpp

// 선형 리스트에서 원소 삽입하고 삭제하기 헤더 파일
#include "h_ListInsertDelete.h"

// 선형 리스트에 원서 삽입 함수
// ArrayList:선형리스트, nElementCount:원소갯수, nInsertData:삽입데이터
int f_ListInsertElement(int* ArrayList, int nElementCount, int nInsertData)
{
	int i, k = 0;    // 제어변수
	int nMove = 0;   // 자리이동 횟수 카운터

	//원소의 크기를 비교하여 삽입 위치 k 찾기
	for (i = 0; i < nElementCount; i++)
	{
		if (ArrayList[i] <= nInsertData && nInsertData <= ArrayList[i + 1])
		{
			k = i + 1;
			break;
		}
	}

	if (i == nElementCount) //삽입 원소가 가장 큰 원소인 경우
	{
		k = nElementCount;
	}

	// 마지막 원소부터 k+1원소까지 뒤로 자리이동
	for (i = nElementCount; i > k; i--)
	{
		ArrayList[i] = ArrayList[i - 1];

		nMove++;
	}

	ArrayList[k] = nInsertData;	//자리 이동하여 만든 자리 k에 삽입 원소 저장 

	return nMove;
}

// 선형 리스트에 원서 삭제 함수
// ArrayList:선형리스트, nElementCount:원소갯수, nDeleteData:삭제데이터
int f_ListDeleteElement(int* ArrayList, int nElementCount, int nDeleteData)
{
	int i, k = 0;    // 제어변수
	int nMove = 0;   // 자리이동 횟수 카운터

	//원소의 크기를 비교하여 삭제 위치 k 찾기
	for (i = 0; i < nElementCount; i++)
	{
		if (ArrayList[i] == nDeleteData)
		{
			k = i;
			break;
		}
	}

	if (i == nElementCount)
	{
		nMove = nElementCount;
	}


	// k+1 부터 마지막 원소까지 앞으로 자리이동
	for (i = k; i < nElementCount - 1; i++)
	{
		ArrayList[i] = ArrayList[i + 1];
		nMove++;
	}

	return nMove;
}
