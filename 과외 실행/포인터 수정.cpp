#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main()
{
	int a = 10;
	int b = 5;
	int* pa = &a;
	int* pb = &b;
		
	printf("���� ���ڴ� a = %d, b = %d\n", *pa, *pb);
	
	swap(pa, pb);
	
	printf("�ٲ� ���ڴ� a = %d, b = %d\n", *pa, *pb);	
	
	return 0;
}

