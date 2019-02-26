#include <stdio.h>

int a(int num)
{
	int output = 1;
	for(int i=1; i<=3; i++)
	{
		output *= num;
	}
	return output;
}

int main ()
{
	int i = 10;
	printf("%d", a(i));
	return 0;
}
