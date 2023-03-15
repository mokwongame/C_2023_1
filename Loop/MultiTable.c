#include <stdio.h>
#include "LibConsole.h"

void main()
{
	// i*j
	for (int i = 1; i <= 9; i++)
	{
		settextcol(i);
		for (int j = 1; j <= 9; j++)
		{
			int ans = i * j;
			printf("%d x %d = %d\n", i, j, ans);
		}
		printf("\n");
	}
	settextcol(GRAY);
}