#include <stdio.h>

int factorial(int i)
{
	if (i == 0) return 1;
	return i * factorial(i - 1);
}

int main()
{
	printf("%d", factorial(5));
	return 0; 
}
