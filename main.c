#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ����� int main �����ٰ� �� ����

int factorial(int a)
{
	if (a == 1)
		return 1;
	else
		return a * factorial(a-1); // return �̿� ver 
 } 

int combination(int n, int r)
{
	int div1, div2;
	
	div1 = factorial(n); // n! ���� 
	div2 = factorial(n-r)*factorial(r); // (n-r)!*r! �и� 
	
	return (div1/div2); //�и�, ���� ������ ����� "����??" ��ȯ�� ��Ȯ�� �ǹ� ��� -> �������� �����ϱ� 
 } 


int main(int argc, char *argv[])
{
	int n, r;
	int result; // int result ��Ա� ���� �� 
	
	// 1. �Է� ��
	// n�Է��ϻ�
	printf("intput n : ");
	scanf("%d", &n);
	
	// r�Է��ϻ� 
	printf("intput r : "); 
	scanf("%d", &r);
	
	
	// 2. ����/�и� ���
	result = combination(n, r);
	
	// 3. ���� �� ���
	printf("Combination of %i and %i : %i\n", n, r, result); // ������ ���� result �ִ°��ΰ� �򰥷��� 
	
	
	system("PAUSE");
	return 0;
}
