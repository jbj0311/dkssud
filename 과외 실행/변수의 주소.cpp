#include <stdio.h>

int main()
{
	int a = 10;
	int b = 5;
	int* pa = &a;
	int* pb = &b;
		
	printf("\n ���� a�� �ּҴ� pa = %p\n\n", pa);
	printf(" ���� b�� �ּҴ� pb = %p\n", pb);
	
	return 0;
}

