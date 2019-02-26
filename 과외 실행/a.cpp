#include <stdio.h>
int main ()
{
	FILE*fp = fopen("CunerSilsup.txt", "w");
	
	for (int i=1;i<10;i++)
	{
		fprintf(fp,"%d^2=%d\n",i,i*i);
		
	}
	
	fclose(fp);
	return 0;
}
