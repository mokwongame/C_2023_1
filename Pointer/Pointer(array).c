#include <stdio.h>

// �� ����: �ڷ��� �̸� �ٲٱ�
// typedef: type definition
typedef char letter; // ��ġ ���� ����ó�� ���ο� �ڷ��� �̸�(����, ����)�� ����
typedef int* intptr;

void main()
{
	int ar[] = { 1, 2, 3, 4 }; // �迭���� �迭�� ������(�ּ�)
	//int ar[4] = { 1, 2, 3, 4 };

	// ar[1]; *j
	printf("ar[1] = %d\n", ar[1]); // [] �����ڸ� �̿��ؼ� ���Ҹ� ��������; �迭���� ��ġ ������ó��

	int* ptr = NULL; // �����ʹ� ���� NULL�� �ʱ�ȭ
	ptr = ar;
	printf("�ּ� = %p, ������ ���� ���� = %zd\n", ptr, sizeof(ptr)); // %p: pointer�� ����ϴ� ���� �԰���
	printf("ar[0] = %d\n", *ptr);
	printf("ar[1] = %d\n", *(ptr + 1)); // �ڷ����� int�̹Ƿ� ����Ʈ�δ� 4����Ʈ ����
	printf("ar[2] = %d\n", *(ptr + 2)); // �ڷ����� int�̹Ƿ� ����Ʈ�δ� 4����Ʈ ����

	int ar2[2][3] = { {1, 2, 3}, {4, 5, 6} }; // {0�� �຤��, 1�� �຤��}
	int n = ar2[0][0];
	int* ptr0 = ar2[0]; // ��: ar2[][], ������(ar2[][]�� �����ϴ� �ּ�): ar2[]
	int* ptr1 = ar2[1]; // 1�� �຤�͸� ����Ű�� ������(�ּ�)
	int m = *ar2[0]; // ar2[0]�� ������: 0�� �຤�� {1, 2, 3}�� ����Ű�� ������
	printf("%d == %d\n", n, m);

	// ��� const
	const int* i0 = ar2[0];
	// *i0 = 20; // error
	printf("%d\n", *i0);
	int* const i1 = ar2[1];
	//i1 = ar2[0]; // error
	printf("%d\n", *i1);

	letter ch = 'm';
	printf("%c\n", ch);

	intptr ip = ar2[0];
	printf("%d\n", *(ip + 1));
}