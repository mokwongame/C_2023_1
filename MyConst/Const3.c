#include <stdio.h>
#include <limits.h>

#define INT_NUM	(34) // INT_NUM�� 34�� ����(define)

/*enum // ������ ��� ����: ����(enumeration), ������ ����
{
	FALSE = 0, TRUE = 1
};*/

// ������ ��� ����: enum ���Ÿ� {��� ���� �� �ʱ�ȭ}
/*enum Logic // ���Ÿ�: Logic
{
	FALSE = 0, TRUE, TRUE2 // �ʱ�ȭ�� �����ϸ� �׳� 1�� ����
}; // TRUE = 1, TRUE2 = 2�� ����*/

enum Logic // ���Ÿ�: Logic
{
	FALSE, TRUE, TRUE2 // ���� �ʱ�ȭ �����ϸ� 0�� ���; �ʱ�ȭ�� �����ϸ� �׳� 1�� ����
}; // FALSE = 0, TRUE = 1, TRUE2 = 2�� ����

void main()
{
	// ��ȣ ���: ���α׷��Ӱ� ���� �������� ���ϵ��� ���
	// 1. const �����(Ű����)
	const int i = 10; // �ʱ�ȭ�� ����
	//i = 30; // �߰� �Ҵ��� �Ұ���
	// 2. #define ��ũ�� ���
	int j = INT_NUM;
	printf("j = %d\n", j);
	// 3. enum ����� ���: ������ ���
	int k = TRUE2;
	printf("k = %d\n", k);
	enum Logic l = FALSE; // l�� Logic ���Ÿ��� ���� ������ ������� ����
	printf("l = %d\n", l);
}