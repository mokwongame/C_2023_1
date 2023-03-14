#include <stdio.h>
#include <stdbool.h>

void main()
{
	int i = 3;

	//if (i == 1) {}
	//else if (i == 2) {}
	// 등호에 대한 조건문은 switch로 간편하게 표현
	/*switch (i) // switch (등호 판단식)
	{
		// break를 쓰면 case을 벗어남
	case 1: puts("i is one."); // case가 if 역할(등호로 판단); case와 break은 한 쌍으로 사용
	case 2: puts("i is two."); break;
	default: puts("i is unknown."); // default는 else 역할
	}*/

	switch (i) // switch (등호 판단식)
	{
		// break를 쓰면 case을 벗어남
	case 1: case 2: puts("i is one or two."); break; // case를 여러 개 쓰면 등호이면서 OR로 판단
	default: puts("i is unknown."); // default는 else 역할
	}

	//조건 삼항 연산자
	//bool b = (i == 2) ? true : false; // 간편하지만 헷갈리는 구문: (판단식) ? true일 때 값 : false일 때 값; ?는 if 역할, :은 else 역할
	bool b;
	if (i == 2) b = true;
	else b = false;

	switch (b)
	{
	case true: puts("true"); break;
	case false: puts("false"); break;
		// default는 선택 사항; else도 선택 사항
	}
}