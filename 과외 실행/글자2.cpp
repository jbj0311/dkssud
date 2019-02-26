#include <stdio.h>

int main()
{
	char words[2];
	
	scanf("%c %c", &words[0], &words[1]);
	
	printf("%c %s %c", words[0], "and", words[1]);
	
	return 0;
}

