#include <stdio.h>

int main()
{
	char words[] = "hello world!";
		
	printf("시작점의 주소는 %p\n", words);
	printf(words);
	
	for (int i = 0; i < 12; i++)
	{
		printf("\n%p에 있는 \'%c\'", &words[i], words[i]);
	}
	
	return 0;
}

