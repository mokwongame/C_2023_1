#include <stdio.h>

// �Լ� ���� ���
// ��� �Լ���(�Է� �Ű�����, �Է� ����) {...}

// �Լ� ����: �Լ��� ����ϱ����� ����
// ���� ���: �Լ� ����ó��(�ڵ� ���� ����)
int add(int x, int y); // �Լ� �̸� �����ؼ� �Ʒ� �κп��� ��� ����

// ��� ����: �ַ� �Լ� ������ �����ϰ� ����
// �Լ� ���Ǵ�? �ַ� lib ���Ͽ� ����(library: ������ Ȥ�� �Լ� ����) = ������, ��ũ(���� ���� ����� ���ܰ�); lib ������ ���� �ҽ� �ڵ��� ������ �ӵ��� ������

void main()
{
	//int i = 3 + 4;
	int i = add(3, 4); // �Լ� ȣ��: �Լ� ���δ� �Ű� �� �ʿ� X; �̹� ������ �ڵ� ������ �Լ��� ����
	printf("%d\n", i); // ��� ���Ͽ��� �Լ� ����(or �Լ� ����(prototype)); printf()�� �Լ� ���Ǵ� ��ũ���� ����
}

int add(int x, int y)
{
	// ���� ����
	//int w = x + y;
	//return w; // ���� w�� ��ȯ(return)
	return x + y; // ��� ����� ��ȯ
}