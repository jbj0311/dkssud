#include <stdio.h>
int main ()
{
	int inputs[5];
	for (int i=0;i<5;i++)
	{
		scanf("%d", &inputs[i]);
	}
	for(int i=4;i>=0;i--)
	{
		printf("%d", inputs[i]);
	}
	return 0;
}
 
