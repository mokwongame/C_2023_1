#include <stdio.h>

void main()
{
	// ���� ����
	char ch = 'a'; // 'a'�� ���� ���; ���ͷ�(literal, ���� ��ü)
	int i = 10; // 10�� ����(����) ���; ���ͷ�(literal, ���� ��ü)
	double x = 1.2345; // 1.2345�� ����(�Ǽ�) ���; ���ͷ�(literal, ���� ��ü)
	double y1 = 12e10; // e�� 10�� ����(exponent); 12e10 = 12*10^10
	double y2 = 12e+10; // 12e+10 = 12*10^10
	double y3 = 12e-10; // 12e+10 = 12*10^-10

	long long j = 10ll; // ll: long long; l: long
	// 1 I l
	long long k = 20LL; // LL: long long
	float z = -45.67f; // f: float

	// �̽������� ������(escape sequence): �̽������� ���ڴ� \�� ����
	char ch2 = '\n'; // ����(new line)
	char ch3 = '\\'; // \�� �� ���� \\ �ι� ���
	char ch4 = '\t'; // ��(tab)
	char ch4 = '\a'; // �˶�(alarm)
}

