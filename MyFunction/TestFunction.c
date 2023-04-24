#include <stdio.h>

int ans = 0; // ���� ����

// �Լ� ����: ��� �Լ���(�Է� ����1, �Է� ���� 2, ...) {�ڵ� ���}
// �Լ��� �տ� ��� �ڷ��� ����; �ڵ� ��Ͽ��� return���� ���� ��ȯ
// ()�ӿ� �Է� �ڷ��� ����, �Է� ������ ����: ���� ����� �����ϰ� ���

// ����(add, addition) �Լ� ����
double add(double x, double y) // x�� double�� �����ؼ� �Է����� ���; y�� double�� �����ؼ� �Է����� ���
{
	double ans = x + y; // �������� ���ǵ� int ans�� �ƴ� double ans�� ����(double ans�� ���� �����̱� ����)
	return ans; // double�� ��ȯ�� ������ ����
}

// nMin���� nMax���� step��ŭ ���ϸ鼭 ���ϴ� �Լ�
int sum(int nMin, int nMax, int step)
{
	//int ans = 0; // ���� ����
	// for (�ʱⰪ; �Ǵܽ�; ����) {�ڵ� ���}
	//for (int i = nMin; i <= nMax; i = i + step)
	for (int i = nMin; i <= nMax; i += step)
	{
		ans += i; // ans = ans + i
		printf("ans = %d @ i = %d\n", ans, i);
	}
	return ans;
}

// ����(local) ����: �Լ� �ȿ� �����ϴ� ����; �ڵ� ��� �ȿ� �����ϴ� ����; {}�� ����� ���� ������ �����
// ����(global) ����: main() �Լ� �ۿ� �����ϴ� ����; ���� ������ ���α׷��� ����Ǵ� ���� �׻� ����
// ���� ������ ���� ������ �̸��� ������, ���� ������ �켱���� ����

void main()
{
	// �Լ� ���
	double x = add(10., 20.);
	printf("x = %g\n", x);

	// sum() �Լ� ���
	sum(10, 1000, 35);
}