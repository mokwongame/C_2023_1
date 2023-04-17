// ���� ����Ʈ���� ���� �����ϰ� �����ϱ� ���� �Լ�: MainListInsertDelete.cpp

#include <stdio.h>
#include "h_ListInsertDelete.h"  // ���� ����Ʈ���� ���� �����ϰ� �����ϱ� ��� ����

int main()
{
	int ArrayList[MAX] = { 10, 20, 40, 50, 60, 70 };

	int i = 0;  // �����

	int nInsertMove = 0;          // ���� ���� �� �̵� Ƚ�� ���ϰ� ���� ���� 
	const int nInsertData = 30;   // ���� ���� ����Ÿ

	int nDeleteMove = 0;          // ���� ���� �� �̵� Ƚ�� ���ϰ� ���� ���� 
	const int nDeleteData = 30;   // ���� ���� ����Ÿ

	int nElementCount = 0;        // ����Ʈ�� �ִ� ������ ����
	int nSize = sizeof(ArrayList) / sizeof(ArrayList[0]); // ����Ʈ�� �ִ� ������ ����

	// ���� �� ���� ����Ʈ ���
	printf("\n���� �� ���� ����Ʈ : ");
	for (i = 0; i < nSize; i++)
	{
		if (ArrayList[i] != 0)
		{
			printf("%3d ", ArrayList[i]);

			nElementCount++;
		}
	}
	printf("\n������ ���� : %d \n", nElementCount);

	// ���� ����Ʈ�� ���� ����
	nInsertMove = f_ListInsertElement(ArrayList, nElementCount, nInsertData);

	printf("\n���� �� ���� ����Ʈ : ");
	for (i = 0; i <= nElementCount; i++)
	{
		printf("%3d ", ArrayList[i]);
	}
	printf("\n���� ������ : %d ", nInsertData);
	printf("\n������ ���� : %d ", ++nElementCount);
	printf("\n�ڸ� �̵� Ƚ�� : %d \n", nInsertMove);

	// ���� ����Ʈ�� ���� ����
	nDeleteMove = f_ListDeleteElement(ArrayList, nElementCount, nDeleteData);

	if (nDeleteMove == nElementCount)
	{
		printf("\n���� ����Ʈ�� ���Ұ� ��� ������ �� �����ϴ�.\n");
	}
	else
	{
		printf("\n���� �� ���� ����Ʈ : ");

		for (i = 0; i < nElementCount - 1; i++)
		{
			if (ArrayList[i] != 0)
			{
				printf("%3d ", ArrayList[i]);
			}
		}
		printf("\n���� ������ : %d ", nDeleteData);
		printf("\n������ ���� : %d ", --nElementCount);
		printf("\n�ڸ� �̵� Ƚ�� : %d \n", nDeleteMove);
	}


	return 0;
}