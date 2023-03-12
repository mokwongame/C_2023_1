#include <stdio.h>

void main()
{
	char i = 2; // 이진수: 010
	char j = 4; // 이진수: 100
	printf("i = %o\n", i);
	printf("j = %o\n", j);
	char k = i & j; // 비트 단위 AND 연산: 000
	printf("and = %o\n", k);
	k = i | j; // 비트 단위 OR 연산: 110
	printf("or = %o\n", k);
	k = ~i; // 비트 단위 NOT 연산: ...111101(int로 취급)
	printf("not = %o\n", k); // 8진수
	// 16진수 기준 2 = 00|00|00|02 => ff|ff|ff|fd (0010 => 1101(2) = 8+4+1 = 13)
	printf("not = %x\n", k); // 16진수(f=15, d=13, 4비트): ff|ff|ff|fd = 4바이트 = 4*8비트
	k = i << 2; // 왼쪽 쉬프트 연산(숫자가 커짐): 000|010 => 001|000
	printf("left shift = %o\n", k);
	printf("left shift = %d\n", k);
	k = i >> 1; // 오른쪽 쉬프트 연산(숫자가 작아짐): 010 => 001
	printf("right shift = %o\n", k);
	// XOR 연산: 두 비트가 같으면 0, 다르면 1인 비트 연산
	k = i ^ j;
	printf("xor = %o\n", k);
}