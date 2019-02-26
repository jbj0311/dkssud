#include <stdio.h>

int main()
{
	FILE* fp = fopen("CunerSilsup.txt", "r");
	char data;
	
	while(fscanf(fp, "%c", &data) != EOF)
	{
		printf("%c", data);
	}
	
	fclose(fp);
	return 0;
}

