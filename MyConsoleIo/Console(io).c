#include <stdio.h>
#include <conio.h> // console I/O: �ܼ� �����

void main()
{
	char ch = 'G';
	printf("ch = %c\n", ch);
	putchar(ch); // char�� �ֿܼ� ����(����ϴ�); ���� �ϳ� ���
	// put �ݴ븻: get(���, ���� �Է�)
	//char chin = (char)getchar(); // stdio.h: �������� Enter �ʿ�; �Է��� ���� ���
	//char chin = _getch(); // conio.h�� ����: Enter ���ʿ�, �Է��� ���� ��� ����
	//_putch(chin); // �ѱ��� ���; putchar()�� ����
	char chin = _getche(); // _getch()�� _putch() ��ģ ���: e�� echo �ǹ�
	printf("\n �Է��� ch = %c\n", chin);
}