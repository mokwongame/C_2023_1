#include <stdio.h>
#include <stdbool.h>

void main()
{
	int i = 3;

	//if (i == 1) {}
	//else if (i == 2) {}
	// ��ȣ�� ���� ���ǹ��� switch�� �����ϰ� ǥ��
	/*switch (i) // switch (��ȣ �Ǵܽ�)
	{
		// break�� ���� case�� ���
	case 1: puts("i is one."); // case�� if ����(��ȣ�� �Ǵ�); case�� break�� �� ������ ���
	case 2: puts("i is two."); break;
	default: puts("i is unknown."); // default�� else ����
	}*/

	switch (i) // switch (��ȣ �Ǵܽ�)
	{
		// break�� ���� case�� ���
	case 1: case 2: puts("i is one or two."); break; // case�� ���� �� ���� ��ȣ�̸鼭 OR�� �Ǵ�
	default: puts("i is unknown."); // default�� else ����
	}

	//���� ���� ������
	//bool b = (i == 2) ? true : false; // ���������� �򰥸��� ����: (�Ǵܽ�) ? true�� �� �� : false�� �� ��; ?�� if ����, :�� else ����
	bool b;
	if (i == 2) b = true;
	else b = false;

	switch (b)
	{
	case true: puts("true"); break;
	case false: puts("false"); break;
		// default�� ���� ����; else�� ���� ����
	}
}