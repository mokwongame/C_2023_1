#include <stdio.h>
#include <conio.h>
#include "LibConsole.h"

// 1+2+3+4+...
// ��� �Լ�(recursion function): �ڱ� �ڽ��� ���ο��� ȣ���ϴ� �Լ�
// ���� ����: ��Ͱ� ���� �ʴ� ����
// sum() �Լ� ����: 1���� n���� ���ϱ�
int sum(int n)
{
	if (n <= 1) return 1; // ���� ����: ��� ȣ������ �ʴ� ����, sum()�� ȣ������ ����
	else return n + sum(n - 1);
}

int sumFor(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

// ���丮��(factorial), ���
// 5! = 1*2*3*4*5
long long factorial(long long n)
{
	if (n <= 1) return 1; // ���� ����: ��� ȣ������ �ʴ� ����, sum()�� ȣ������ ����
	else return n * factorial(n - 1);
}

long long factFor(long long n)
{
	long long prod = 1;
	for (long long i = 2; i <= n; i++)
		prod *= i;
	return prod;
}

void main()
{
	printf("���� n �Է�:");
	long long n = getint();
	//int sum = sum(n); // �Լ� sum()�� ���� �̸��� ������ �Ἥ error(����)
	/*int totalSum = sum(n);
	printf("n���� �� (���): %d\n", totalSum);
	totalSum = sumFor(n);
	printf("n���� �� (for): %d\n", totalSum);*/

	long long totalProd = factorial(n);
	printf("n! (���): %lld\n", totalProd);
	totalProd = factFor(n);
	printf("n! (for): %lld\n", totalProd);
}