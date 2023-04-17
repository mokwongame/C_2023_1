
// ���� ����Ʈ���� ���� �����ϰ� �����ϱ� �Լ���: f_ListInsertDelete.cpp

// ���� ����Ʈ���� ���� �����ϰ� �����ϱ� ��� ����
#include "h_ListInsertDelete.h"

// ���� ����Ʈ�� ���� ���� �Լ�
// ArrayList:��������Ʈ, nElementCount:���Ұ���, nInsertData:���Ե�����
int f_ListInsertElement(int* ArrayList, int nElementCount, int nInsertData)
{
	int i, k = 0;    // �����
	int nMove = 0;   // �ڸ��̵� Ƚ�� ī����

	//������ ũ�⸦ ���Ͽ� ���� ��ġ k ã��
	for (i = 0; i < nElementCount; i++)
	{
		if (ArrayList[i] <= nInsertData && nInsertData <= ArrayList[i + 1])
		{
			k = i + 1;
			break;
		}
	}

	if (i == nElementCount) //���� ���Ұ� ���� ū ������ ���
	{
		k = nElementCount;
	}

	// ������ ���Һ��� k+1���ұ��� �ڷ� �ڸ��̵�
	for (i = nElementCount; i > k; i--)
	{
		ArrayList[i] = ArrayList[i - 1];

		nMove++;
	}

	ArrayList[k] = nInsertData;	//�ڸ� �̵��Ͽ� ���� �ڸ� k�� ���� ���� ���� 

	return nMove;
}

// ���� ����Ʈ�� ���� ���� �Լ�
// ArrayList:��������Ʈ, nElementCount:���Ұ���, nDeleteData:����������
int f_ListDeleteElement(int* ArrayList, int nElementCount, int nDeleteData)
{
	int i, k = 0;    // �����
	int nMove = 0;   // �ڸ��̵� Ƚ�� ī����

	//������ ũ�⸦ ���Ͽ� ���� ��ġ k ã��
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


	// k+1 ���� ������ ���ұ��� ������ �ڸ��̵�
	for (i = k; i < nElementCount - 1; i++)
	{
		ArrayList[i] = ArrayList[i + 1];
		nMove++;
	}

	return nMove;
}
