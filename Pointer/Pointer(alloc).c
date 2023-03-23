#include <stdio.h>
#include <stdlib.h> // ǥ�� ���̺귯��(standard library): ���̺귯��(�Լ� ����)

typedef int* intptr;

intptr makearray(int arsize)
{
	intptr ptr = (int*)malloc(arsize * sizeof(int));
	return ptr;
}

intptr makecleararray(int arsize)
{
	intptr ptr = (int*)calloc(arsize, sizeof(int)); // malloc���� ���� �ð��� �� �ɸ�
	return ptr;
}

void main()
{
	// ����(static) �޸�: ����(�������� �� �޸� �Ҵ�); ���� ������ ����� �ܰ�
	int ars[] = { 1, 2, 3, 4, 5 };

	// ����(dynamic) �޸�: ����(����ð�(runtime)�� �� �޸� �Ҵ�); ���� ������ ������ ���
	intptr arptr = NULL; // int �ڷ����� ���� ����: 4 ����Ʈ
	int arsize = 100;
	void* pvoid = NULL; // �ڷ����� ������ ���� ������; �Ϲ����� �ڷ����� ������ ���� ����
	arptr = (int*)malloc(arsize * sizeof(int)); // �޸� �Ҵ�(memory allocation): ���� ���� �ȶ�; ����Ʈ ���� �Ҵ�
	*arptr = 20;
	printf("%d\n", *arptr);
	arptr[30] = 100;
	printf("%d\n", arptr[30]);

	// malloc�� ������: �� ���� ���� �� �޸� ����
	free(arptr);

	arptr = makearray(200);
	*arptr = 20;
	printf("%d\n", *arptr);
	arptr[30] = 100;
	printf("%d\n", arptr[30]);
	printf("[100] = %d\n", arptr[100]);
	free(arptr);

	// �޸� �Ҵ�, �ʱ�ȭ(0)���� ���ִ� �Լ�: calloc(memory clear and allocation)
	arptr = makecleararray(500);
	*arptr = 20;
	printf("%d\n", *arptr);
	arptr[300] = 100;
	printf("%d\n", arptr[300]);
	printf("[100] = %d\n", arptr[100]);
	//free(arptr);

	// �޸� ũ�� ����: realloc
	intptr arptr310 = realloc(arptr, 310 * sizeof(int)); // int 500 -> int 300
	printf("%d\n", *arptr310);
	printf("%d\n", arptr310[300]);
	printf("[100] = %d\n", arptr310[100]);
	free(arptr310);
}