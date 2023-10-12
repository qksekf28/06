#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// not remove. Coding at the top.
int sumTwo(int a, int b)
{
	int c = a+ b;
	return c;
}

int square(int n)
{
	return n*n;
}

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(int argc, char *argv())
{
	int a, b;
	int n;
	int x, y;
	a = 3;
	b = 10;
	n = 4;
	
	printf("sumTwo result is %i\n", sumTwo(a,b));
	printf("square result is %i\n", square(n));
	printf("get_max result is %i\n", get_max(a,b));
	
	system("PAUSE");
	return 0;
}
