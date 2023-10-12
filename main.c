#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 모듈은 int main 위에다가 다 쓰기

int factorial(int a)
{
	if (a == 1)
		return 1;
	else
		return a * factorial(a-1); // return 이용 ver 
 } 

int combination(int n, int r)
{
	int div1, div2;
	
	div1 = factorial(n); // n! 분자 
	div2 = factorial(n-r)*factorial(r); // (n-r)!*r! 분모 
	
	return (div1/div2); //분모, 분자 나누기 연산울 "저장??" 반환의 정확한 의미 어렵 -> 저장으로 생각하기 
 } 


int main(int argc, char *argv[])
{
	int n, r;
	int result; // int result 까먹기 쉬운 듯 
	
	// 1. 입력 값
	// n입력하삼
	printf("intput n : ");
	scanf("%d", &n);
	
	// r입력하삼 
	printf("intput r : "); 
	scanf("%d", &r);
	
	
	// 2. 분자/분모 계산
	result = combination(n, r);
	
	// 3. 최종 값 출력
	printf("Combination of %i and %i : %i\n", n, r, result); // 마지막 값은 result 넣는거인거 헷갈렸음 
	
	
	system("PAUSE");
	return 0;
}
