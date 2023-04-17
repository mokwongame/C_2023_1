#pragma once

// 선형 리스트에서 원소 삽입하고 삭제하기 헤더 파일: h_ListInsertDelete.h

#define MAX 10  // 원소 최대 갯수

// 선형 리스트에 원서 삽입 함수
// ArrayList:선형리스트, nElementCount:원소갯수, nInsertData:삽입데이터
extern int f_ListInsertElement(int* ArrayList, int nElementCount, int nInsertData);

// 선형 리스트에 원서 삭제 함수
// ArrayList:선형리스트, nElementCount:원소갯수, nDeleteData:삭제데이터
extern int f_ListDeleteElement(int* ArrayList, int nElementCount, int nDeleteData);


