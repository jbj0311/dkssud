#include <stdio.h>

int main()
{
	int a = 10;
	int b = 5;
	int* pa = &a;
	int* pb = &b;
		
	printf("\n 변수 a의 주소는 pa = %p\n\n", pa);
	printf(" 변수 b의 주소는 pb = %p\n", pb);
	
	return 0;
}

