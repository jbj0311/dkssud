#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	return;
}

int main()
{
	int a = 10, b = 5;
	printf("이전 숫자는 a = %d, b = %d\n", a, b);
	
	swap(a, b);
	
	printf("바꾼 숫자는 a = %d, b = %d\n", a, b);	
	
	return 0;
}

