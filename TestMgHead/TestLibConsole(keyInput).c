#include "../MgHead/LibConsole.h"

void main()
{
	// ���� �Է�
	puts("���� �Է�");
	int i = getint();
	putintln(i);

	// �Ǽ� �Է�
	puts("�Ǽ� �Է�");
	double x = getdbl();
	putdblln(x);

	// ���ĺ��̳� ���� �Է�
	puts("���ĺ��̳� ���� �Է�: ");
	char ch = _getch();
	_putch(ch); putln();

	// ���� Ű
	puts("���� Ű: ");
	int key = getkey();
	putintln(key);

	// Ű �Է� ���
	puts("Ű �Է� ���");
	waitkey();
	putintln(getkey());

	// Ű ������ �񵿱�� Ȯ��
	puts("�� ������ �񵿱�� Ȯ��");
	while (1)
	{
		putintln(iskeydown(VK_LEFT));
		sleepcon(1);
	}
}