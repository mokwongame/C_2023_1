#include <stdio.h>
#include <stdbool.h> // bool �ڷ����� ��� ����; ������ Boole�� ���� bool ���
#include "LibConsole.h"
void main()
{
	// false: 0; true: 0�� �ƴ� ����(��, 1)
	bool ans = false;
	//ans = false;
	//printf("ans = %d\n", ans);

	// ans == true => nAns = 1, ans == false => nAns = 0
	int nAns;
	//if (ans) nAns = 1;
	//else nAns = 0;
	// ���� ���� ������
	nAns = (ans) ? 1 : 0; // (�Ǵܽ�) ? a : b => true�� a ����, false�� b ����
	printf("nAns = %d\n", nAns);

	printf("X: ");
	bool X = getint();
	printf("Y: ");
	bool Y = getint();

	ans = X || Y; // ����(or)
	printf("X or Y = ");
	if (ans) printf("true\n");
	else printf("false\n");

	ans = X && Y; // ����(and)
	printf("X and Y = ");
	if (ans) printf("true\n");
	else printf("false\n");

	ans = !X; // ����(not)
	printf("not X = ");
	if (ans) printf("true\n");
	else printf("false\n");
}