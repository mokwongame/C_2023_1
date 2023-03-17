#include <stdio.h>
#include <conio.h>
#include "LibConsole.h"

// 1+2+3+4+...
// 재귀 함수(recursion function): 자기 자신을 내부에서 호출하는 함수
// 종료 조건: 재귀가 되지 않는 조건
// sum() 함수 목적: 1부터 n까지 더하기
int sum(int n)
{
	if (n <= 1) return 1; // 종료 조건: 재귀 호출하지 않는 구문, sum()를 호출하지 않음
	else return n + sum(n - 1);
}

int sumFor(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

// 팩토리어(factorial), 계승
// 5! = 1*2*3*4*5
long long factorial(long long n)
{
	if (n <= 1) return 1; // 종료 조건: 재귀 호출하지 않는 구문, sum()를 호출하지 않음
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
	printf("정수 n 입력:");
	long long n = getint();
	//int sum = sum(n); // 함수 sum()과 같은 이름을 변수에 써서 error(오류)
	/*int totalSum = sum(n);
	printf("n까지 합 (재귀): %d\n", totalSum);
	totalSum = sumFor(n);
	printf("n까지 합 (for): %d\n", totalSum);*/

	long long totalProd = factorial(n);
	printf("n! (재귀): %lld\n", totalProd);
	totalProd = factFor(n);
	printf("n! (for): %lld\n", totalProd);
}