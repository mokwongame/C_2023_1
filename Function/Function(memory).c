#include <stdio.h>
#include <conio.h>
#include "LibConsole.h"

// �Լ� ����
void addGlobal();

// ���� ����(global variable)
double g_add = 100; // ��𿡼��� ��� ����; ���� ������ �޸� ���� X; ���α׷� ������ ������ �޸� ����
// ���� ������ ����� ��; ��� �����Ǵ��� Ȯ�� �����; �����ϸ� �� ���� �� ���α׷����� �⺻; ��ü ���� ���α׷���(C++)

// ȭ��(�̱�) -> ����(�츮)
double farenToCelci(double F) // F: ȭ��
{
	//g_add += 2.;
	double C = 5. / 9. * (F - 32.); // 5/9 = 0: ���� ������� ���� ���
	return C; // ����
} // C�� �Լ� ����� ������, ��ȯ�� �Ǹ�, C�� �޸𸮰� ������

double accum(double val)
{
	//double sum = 0.; // ���� ����: ���尪�� ���� X
	static double sum = 0.; // ���� ����: ���尪�� ���� O; �ʱ�ȭ�� ������ ���� ����
	// �Լ� �ȿ����� ���� ����
	sum += val;
	return sum;
}

// �Լ� �ȿ� �ִ� ���� ����: ���� ����(local variable) = �Լ� �ȿ����� ��ȿ
// ���� ����: ���ǹ��̳� �ݺ������� ����; �ڵ� ��� ������ ������ ���� ������ �޸� ����
void main()
{
	//g_add = 200;
	/*while (1) // ������ �ݺ�: ��ȣ ���� 1�μ� �׻� ��(true)
	{
		printf("ȭ�� �Է�:");
		double F = getdbl(); // LibConsole.h�� ����
		if (F < -100.) break; // ������ ������ while(���� ����� �ݺ���)�� ��������
		double C = farenToCelci(F) + g_add;
		printf("���� + 100 = %g\n", C);
	}*/

	/*while (1)
	{
		printf("���� �Է�:");
		double val = getdbl(); // LibConsole.h�� ����
		printf("�� = %g\n", accum(val));
	}*/

	while (1)
	{
		//char c = getchar(); // ���� �ϳ� �Է�: �������� enter �ľ� ��
		char c = _getche(); // conio.h�� ����; ���� �ϳ� �Է�, �� ���ڸ� ���(e: echo); _ �ǹ�: �����Ϸ��� �����ϴ� �Լ�, ���Ǹ� ������ ��� �ϴ� �Լ�
		addGlobal();
		printf("g_add = %g\n", g_add);
	}
}