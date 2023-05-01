#include <stdio.h>

void main()
{
	// 2차원 배열: 행렬
	//int ar[2][3] = { {1, 2, 3}, {4, 5, 6} }; // int[3] 배열이 2개 있는 배열의 배열; 배열의 배열은 뒷부분부터 읽음
	int ar[][3] = { {1, 2, 3}, {4, 5, 6} };
	//int ar[2][3] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
}