#include <stdio.h>
#include "LibConsole.h"
#include "LibGameTool.h"

void main()
{
	randseed();
	for (int i = 0; i < 10; i++)
	{
		int nRand = randrange(1, 11); // 1~11-1
		printf("³­¼ö = %d\n", nRand);
	}
}