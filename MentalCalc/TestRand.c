#include <stdio.h>
#include <stdlib.h> // ǥ�� ���̺귯��(standard library) ��� ����
#include <time.h>

void main()
{
	// ���� �߻��� �ʱⰪ ����
	srand(1000); // seed(����, ���ڰ�) for rand()
	printf("���� �߻� �ִ밪 = %d\n\n", RAND_MAX);
	for (int i = 0; i < 20; i++) // {}�� ���� ����: ����(;���� ������ ����)�� �ϳ��� �ִ� ���
	{
		int n = rand(); // 0 ���� �ڿ��� ���� �߻�; ���� �߻��� �ִ밪: RAND_MAX
		printf("n = %d\n", n);
	}

	// ���� �߻� �ʱ�ȭ�� ���� �ð��� ���� ���: time(NULL)�� �� ������ ������ �ð�(�������� 1970��: UNIX � ü���� ������ �ñ�)
	time_t sec = time(NULL); // time_t: typedef���� ���� time �ڷ���(����, ����)
	printf("���� �ð� = %lld\n", sec);
	srand((unsigned int)sec); // seed(����, ���ڰ�) for rand()
	printf("���� �߻� �ִ밪 = %d\n\n", RAND_MAX);
	for (int i = 0; i < 20; i++) // {}�� ���� ����: ����(;���� ������ ����)�� �ϳ��� �ִ� ���
	{
		int n = rand(); // 0 ���� �ڿ��� ���� �߻�; ���� �߻��� �ִ밪: RAND_MAX
		printf("n = %d\n", n);
	}
}