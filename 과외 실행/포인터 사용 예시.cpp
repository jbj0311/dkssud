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
	printf("���� ���ڴ� a = %d, b = %d\n", a, b);
	
	swap(a, b);
	
	printf("�ٲ� ���ڴ� a = %d, b = %d\n", a, b);	
	
	return 0;
}

