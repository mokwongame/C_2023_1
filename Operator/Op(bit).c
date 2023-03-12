#include <stdio.h>

void main()
{
	char i = 2; // ������: 010
	char j = 4; // ������: 100
	printf("i = %o\n", i);
	printf("j = %o\n", j);
	char k = i & j; // ��Ʈ ���� AND ����: 000
	printf("and = %o\n", k);
	k = i | j; // ��Ʈ ���� OR ����: 110
	printf("or = %o\n", k);
	k = ~i; // ��Ʈ ���� NOT ����: ...111101(int�� ���)
	printf("not = %o\n", k); // 8����
	// 16���� ���� 2 = 00|00|00|02 => ff|ff|ff|fd (0010 => 1101(2) = 8+4+1 = 13)
	printf("not = %x\n", k); // 16����(f=15, d=13, 4��Ʈ): ff|ff|ff|fd = 4����Ʈ = 4*8��Ʈ
	k = i << 2; // ���� ����Ʈ ����(���ڰ� Ŀ��): 000|010 => 001|000
	printf("left shift = %o\n", k);
	printf("left shift = %d\n", k);
	k = i >> 1; // ������ ����Ʈ ����(���ڰ� �۾���): 010 => 001
	printf("right shift = %o\n", k);
	// XOR ����: �� ��Ʈ�� ������ 0, �ٸ��� 1�� ��Ʈ ����
	k = i ^ j;
	printf("xor = %o\n", k);
}