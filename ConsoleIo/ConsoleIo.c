#include <stdio.h> // <>: C �����Ϸ��� �⺻������ �����ϴ� �������� �˻�
#include <conio.h> // Console I/O(input/output): �ܼ� ������� �����ϴ� ��� ����
#include "LibConsole.h" // "": ���� ������ �������� �ؼ� �˻�

void main()
{
	/*int i = 10;
	printf("%d\n", i); // output(�ּ� X); write(������ ���); print(����� ���)

	int j; // ���� ����: �ڷ��� ������(���� ��ġ(�ּ�: address)�� ã�ư��� ���� �̸�: ���α׷���); ����: �ּҿ� ��
	// input(�ּ� �ʿ�); read(������ �Է�); input(����� �Է�)
	scanf_s("%d", &j); // scan: �ֻ��ϴ�; scanf = scan formatted; scanf_s: safe scanf; &(address): &j = j�� �ּ�
	printf("%d\n", j);*/

	/*printf("���� �ϳ� �Է�(��� X):");
	// �Լ����� _, __�� �����ϴ� �ǹ�: C �����Ϸ��� ���� �������� ���� �Լ�; ����ϱ� ������ �Լ�; ���� ������ �Լ�
	char ch = _getch(); // get char: ���� �ϳ� �Է¸�, ��� X
	_putch(ch); // put char: ���� �ϳ� ���; puts(): ���ڿ� ���

	printf("\n���� �ϳ� �Է�(��� O):");
	char ch2 = _getche(); // get char with echo: ���� �ϳ� �Է¸�, ��� O*/

	/*printf("���� �ϳ� �Է�:");
	int i = getint();
	putint(i);*/

	/*printf("�Ǽ�(double, dbl) �ϳ� �Է�:");
	double x = getdbl();
	putdbl(x);*/

	settextcol(RED); // ���ڻ� ����; 16���� ���� ����: �ݸ鿡 ������ 256*256*256
	puts("���ڿ� ���"); // ���ڿ�(string): ���� �迭(char array) = ���� ���� ���� ���
	setbackcol(YELLOW); // ���� ����
	puts("Mokwon Game"); // ���ڿ�(string): ���� �迭(char array) = ���� ���� ���� ���
	setbacktextcol(BLUE, GREEN);
	puts("����� ����SW���а�");

	// �ܼ� ��ġ �̵�: ����� �� ���ڰ� �� ĭ, �ѱ��� �� ���ڰ� �� ĭ
	gotoxy(2, 1); // �ܼ� Ŀ�� �̵�: (x, y) = x��� y������ �̵�; ���� = ����, ���� ��
	// x��: ���� -> ������ �� �� Ŀ��(���а� ���� ����); y��: �� -> �Ʒ��� �� �� Ŀ��(���а� �ݴ� ����)
	puts("Ŀ�� �̵�");

	// �ܼ� ��ٸ���, ������
	hidecursor(); // Ŀ�� ���߱�
	//sleepcon(2); // 2�� ��ٸ���
	setbacktextcol(BLACK, GRAY); // ������ �� ���� Ư�� ����
	puts("Mokwon Game");
	showcursor(); // Ŀ�� ���̱�
	puts("Ŀ�� ���̱�");
	//sleepcon(1.5); // 1.5�� ��ٸ���

	// ���� ���ڻ��� ���� ����
	writetextcol(0, 0, SKYBLUE); // ���� ���� Ư�� ����
	writebackcol(2, 0, VIOLET);
	puts("���� ���� ���"); // set �Լ��� ���� ����; write �Լ����� ������ ���� ����
	writebacktextcol(2, 2, WHITE, DARK_SKYBLUE);

	// ��ü �ܼ� ������ ���ڻ� ����
	setconcol(WHITE, BLACK);
}